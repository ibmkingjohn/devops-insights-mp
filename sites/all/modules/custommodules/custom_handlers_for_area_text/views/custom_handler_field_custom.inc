<?php

/**
 * @file
 * Definition of views_handler_field_custom_permission.
 */

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */

class custom_handler_field_custom extends views_handler_field_custom {

  function option_definition() {
    $options = parent::option_definition();
    $options['roles'] = array('default' => array());

    $options['alter']['contains']['skipxss'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $role_options = array_map('check_plain', user_roles());
    $form['visibility']['role'] = array(
      '#type' => 'fieldset',
      '#title' => t('Roles'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#group' => 'visibility',
      '#weight' => 10,
    );
    $form['visibility']['role']['roles'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Show Text area for specific roles'),
      '#default_value' => $this->options['roles'],
      '#options' => $role_options,
      '#description' => t('Show this Text area only for the selected role(s). If you select no roles, the Text area will be visible to all users.'),
    );
    $form['alter']['skipxss'] = array(
      '#type' => 'checkbox',
      '#title' => t('Skip XSS filter'),
      '#default_value' => $this->options['alter']['skipxss'],
      '#options' => $role_options,
      '#description' => t('If checked, all HTML will be visible.'),
    );
  }

  function options_submit(&$form, &$form_state) {
    $form_state['values']['options']['roles'] = $form_state['values']['options']['visibility']['role']['roles'];

    parent::options_submit($form, $form_state);
  }

  function render($values) {
    if(!_check_permission(array_flip($this->options['roles']))) {
      return '';
    }

    return parent::render($values);
  }

  /**
   * Render a field using advanced settings.
   *
   * This renders a field normally, then decides if render-as-link and
   * text-replacement rendering is necessary.
   */
  function advanced_render($values) {
    if(!_check_permission(array_flip($this->options['roles']))) {
      return '';
    }

    return parent::advanced_render($values);
  }

  function render_altered($alter, $tokens) {
    // Filter this right away as our substitutions are already sanitized.
    if (empty($this->options['alter']['skipxss'])) {
      $value = filter_xss_admin(token_replace(strtr($alter['text'], $tokens)));
    }
    else {
      $value = token_replace(strtr($alter['text'], $tokens));
    }

    return $value;
  }
}
