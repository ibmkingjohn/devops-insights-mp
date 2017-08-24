<?php
/**
 * @file
 * node_activity_assigned_bylocation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function node_activity_assigned_bylocation_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_act_assign_curric|node|activity_assignment|form';
  $field_group->group_name = 'group_act_assign_curric';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity_assignment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Curriculum',
    'weight' => '6',
    'children' => array(
      0 => 'field_unit_tag',
      1 => 'field_topic_tag',
      2 => 'field_curriculum_tag',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-act-assign-curric field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_act_assign_curric|node|activity_assignment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Curriculum');

  return $field_groups;
}
