<?php

/**
 * A handler to provide a filter that is completely custom SQL by the administrator.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_views_raw_sql extends views_handler_filter {

  function query() {
    global $user;

    $raw_sql = $this->options['raw_sql'];

    // Get replacement tokens like @see views_handler_filter::get_replacement_tokens()
    $tokens = array();
    $count = 0;
    foreach ($this->view->display_handler->get_handlers('argument') as $arg => $handler) {
      ++$count;
      $tokens['!args' . $count] = isset($this->view->args[$count - 1]) ? check_plain($this->view->args[$count - 1]) : '';
    }

    $noskip = TRUE;

    if (!empty($this->options['exposed'])) {
      if(empty($this->value[0])) {
        $noskip = FALSE;
      }

      foreach ($this->value as $key => $val) {
        $tokens['!exposed' . $key ] =  check_plain($val);
      }
    }

    if (sizeof(array_keys($tokens)) > 0) {
      $raw_sql = str_replace(array_keys($tokens), $tokens, $raw_sql);
    }

    if ($noskip === TRUE) {
      // And replace.
      $raw_sql = token_replace($raw_sql, array('user' => $user));

      $this->ensure_my_table();
      $this->query->add_where_expression($this->options['group'], $raw_sql);
    }
  } // query

  function option_definition() {

    $options = parent::option_definition();

    // Override the alter text option to never alter the text.
    $options['alter']['contains']['alter_text'] = array('default' => FALSE);
    $options['raw_sql'] = array('default' => '');

    return $options;

  } // option_definition

  function options_form(&$form, &$form_state) {

    parent::options_form($form, $form_state);

    unset($form['alter']);

    $form['raw_sql'] = array(
      '#type' => 'textarea',
      '#title' => 'SQL',
      '#description' => t('This SQL will be added to the query as a filter expression. Use placeholders like !args for arguments and !exposed for exposed filters.'),
      '#default_value' => $this->options['raw_sql'],
      '#required' => TRUE,
    );

    if (!user_access('edit views raw sql')) {
      $form['raw_sql']['#disabled'] = TRUE;
      $form['raw_sql']['#description'] = t('You lack %permission permission to edit this field.', array('%permission' => 'edit views raw sql'));
    } // if

  } // options_form

  /**
   * Simple submit handler
   */
  function options_submit(&$form, &$form_state) {

    $this->options['raw_sql'] = $form_state['values']['options']['raw_sql'];

  } // options_submit

  /**
   * Provide a simple textfield for equality
   */
  function value_form(&$form, &$form_state) {
    // We have to make some choices when creating this as an exposed
    // filter form. For example, if the operator is locked and thus
    // not rendered, we can't render dependencies; instead we only
    // render the form items we need.

    if (!empty($form_state['exposed'])) {
      $identifier = $this->options['expose']['identifier'];

      $form['value'] = array(
        '#type' => 'textfield',
        '#title' => t('Value'),
        '#size' => 30,
        '#default_value' => $this->value,
      );

      if (!empty($form_state['exposed']) && !isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $this->value;
      }
    }

    if (!isset($form['value'])) {
      // Ensure there is something in the 'value'.
      $form['value'] = array(
        '#type' => 'value',
        '#value' => NULL
      );
    }
  }


} // views_handler_filter_views_raw_sql
