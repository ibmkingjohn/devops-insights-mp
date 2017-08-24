<?php
/**
 * @file
 * Contains the embed display plugin.
 */

/**
 * A plugin to create an embed display.
 */
class embed_views_plugin_display_embed extends views_plugin_display {
  public $embed_exposed_form = FALSE;

  /**
   * Provide the default summary for options in the views UI.
   */
  function options_summary(&$categories, &$options) {
    // Add all the parent options.
    $options['exposed_block'] = array(
      'category' => 'exposed',
      'title' => t('Exposed form in block'),
      'value' => $this->get_option('exposed_block', TRUE) ? t('Yes') : t('No'),
      'desc' => t('Allow the exposed form to appear in a block instead of the view.'),
    );

    $title = '';
    if (module_exists('advanced_help')) {
      $title .= theme('advanced_help_topic', array('module' => 'embed_views', 'topic' => 'embed-exposed-filter'));
    }
    $title .= t('Embed exposed form manually');

    $options['exposed_embed'] = array(
      'category' => 'exposed',
      'title' => $title,
      'value' => $this->get_option('exposed_embed') ? t('Yes') : t('No'),
      'desc' => t('Allow the exposed form to appear in a block instead of the view.'),
    );

    parent::options_summary($categories, $options);
  }

  /**
   * Add options form.
   *
   * - Add exposed block overridden value, adding help text and, adding embed
   *   exposed filter option.
   */
  function options_form(&$form, &$form_state) {
    // Add all the parent options.
    parent::options_form($form, $form_state);
    if ($form_state['section'] == 'exposed_block') {
      $form['exposed_block']['#default_value'] = $this->get_option('exposed_block', TRUE) ? 1 : 0;
    }
    if ($form_state['section'] == 'exposed_embed') {
      $form['#title'] .= t('Display exposed filter with embed code');
      $form['description'] = array(
        '#markup' => '<div class="description form-item">' . t('If set, any exposed widgets will not appear with this view, and will require that it is embedded elsewhere.') . '</div>',
      );
      $form['exposed_embed'] = array(
        '#type' => 'radios',
        '#options' => array(1 => t('Yes'), 0 => t('No')),
        '#default_value' => $this->get_option('exposed_embed') ? 1 : 0,
      );
    }
  }

  /**
   * Options form submit handler.
   *
   * - Set the embed exposed filter value.
   */
  function options_submit(&$form, &$form_state) {
    parent::options_submit($form, $form_state);

    $section = $form_state['section'];
    if ('exposed_embed' == $section) {
      $this->set_option($section, (bool) $form_state['values'][$section]);
    }
  }

  /**
   * Checks if the exposed form is used in a block.
   */
  function uses_exposed_form_in_block() {
    return $this->get_option('exposed_block') && !$this->get_option('exposed_embed');
  }

  /**
   * Determines if the exposed form could be rendered.
   */
  function displays_exposed() {
    return (!$this->get_option('exposed_embed') || $this->embed_exposed_form);
  }

  /**
   * Helper function to allow for easier exposed form embeds.
   *
   * @return mixed
   *  Returns the rendered exposed form or FALSE if it could not be rendered.
   */
  function embed_views_exposed_form() {
    if (!$this->get_option('exposed_embed')) { return FALSE; }

    // Allows for the exposed form to be rendered.
    $this->embed_exposed_form = TRUE;

    $this->view->init_handlers();
    $exposed_form = $this->get_plugin('exposed_form')->render_exposed_form();

    // Set this back incase we are embedding and then rendering the form.
    // Otherwise, the form would render with the view.
    $this->embed_exposed_form = FALSE;

    return $exposed_form;
  }
}
