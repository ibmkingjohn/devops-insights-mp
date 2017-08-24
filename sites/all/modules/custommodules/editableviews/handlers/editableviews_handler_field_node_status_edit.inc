<?php

/**
 * Field handler for node status editable field.
 */
class editableviews_handler_field_node_status_edit extends views_handler_field_boolean {

  /**
   * Boolean to indicate to the style plugin that this field is editable.
   *
   * We do this here rather than just check the class parentage to allow field
   * handlers to provide form elements for non-FieldAPI entity properties.
   */
  public $editable = TRUE;

  function option_definition() {
    $options = parent::option_definition();

    $this->field_alias = 'status';

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

  }

  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->real_field = 'status';

  }

  /**
   * Return the name of the entity property this handler controls.
   */
  function field_name() {
    return 'status';
  }

  /**
   * Return the edit form for the field.
   */
  function edit_form($entity_type, $entity, &$element, &$form_state) {
    // Just do the same thing as node_content_form().
    $element['status'] = array(
      '#type' => 'checkbox',
      '#title' => t('Published'),
      // The title might not be set in the case where we're on a non-required
      // relationship with empty data.
      '#default_value' => isset($entity->status) ? $entity->status : '0',
    );
  }

  /**
   * Handle the form validation for this field's form element.
   */
  function edit_form_validate() {
    // Nothing to do.
  }

  /**
   * Handle the form submission for this field's form element.
   */
  function edit_form_submit($entity_type, $entity, &$element, &$form_state) {
    $parents = $element['#parents'];
    $parents[] = 'status';

    // Get the value out of the form state.
    $value = drupal_array_get_nested_value($form_state['values'], $parents);

    // Set it on the node.
    $entity->status = $value;
  }

}
