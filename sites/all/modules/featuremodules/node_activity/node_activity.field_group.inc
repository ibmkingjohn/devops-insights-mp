<?php
/**
 * @file
 * node_activity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function node_activity_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_act_details|node|activity|form';
  $field_group->group_name = 'group_act_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activity Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_activity_objective',
      1 => 'field_activity_description',
      2 => 'field_activity_attachments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-act-details field-group-div ',
        'required_fields' => 1,
        'id' => 'node_activity_form_group_act_details',
      ),
    ),
  );
  $field_groups['group_act_details|node|activity|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Details');

  return $field_groups;
}
