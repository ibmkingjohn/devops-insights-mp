<?php
/**
 * @file
 * node_activity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function node_activity_taxonomy_default_vocabularies() {
  return array(
    'grade' => array(
      'name' => 'Grade',
      'machine_name' => 'grade',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
    ),
    'mentee_age' => array(
      'name' => 'Mentee Age',
      'machine_name' => 'mentee_age',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
    ),
    'topic' => array(
      'name' => 'Topic',
      'machine_name' => 'topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
  );
}
