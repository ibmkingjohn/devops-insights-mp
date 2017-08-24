<?php
/**
 * @file
 * node_activity_assigned_bylocation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function node_activity_assigned_bylocation_taxonomy_default_vocabularies() {
  return array(
    'activity_recognition' => array(
      'name' => 'Activity Recognition',
      'machine_name' => 'activity_recognition',
      'description' => 'Activity Recognition',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'attachment_status' => array(
      'name' => 'Attachment Status',
      'machine_name' => 'attachment_status',
      'description' => 'This is be a list of states and attachment can have',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'user_hierarchy' => array(
      'name' => 'Location/Class',
      'machine_name' => 'user_hierarchy',
      'description' => 'User Hierarchy',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
  );
}
