<?php

/**
 * @file
 * Definition views_handler_area_text_permission.
 */

/**
 * Views area text handler.
 *
 * @ingroup views_area_handlers
 */
class custom_handler_area_text extends views_handler_area_text {

  function option_definition() {
    $options = parent::option_definition();
    $options['roles'] = array('default' => array());
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
  }

  function options_submit(&$form, &$form_state) {
    $form_state['values']['options']['roles'] = $form_state['values']['options']['visibility']['role']['roles'];

    parent::options_submit($form, $form_state);
  }

  function render($empty = FALSE) {
    if (!_check_permission(array_flip($this->options['roles']))) {
      return '';
    }

    return token_replace(parent::render($empty));
  }

  /**
   * Render a text area, using the proper format.
   */
  function render_textarea($value, $format) {
    if (!_check_permission(array_flip($this->options['roles']))) {
      return '';
    }

    return token_replace(parent::render_textarea($value, $format));
  }
}