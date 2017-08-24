<?php
/**
 * @file
 * taxonomy_vocabularies_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_vocabularies_feature_taxonomy_default_vocabularies() {
  return array(
    'activity_subjects' => array(
      'name' => 'Activity Subjects',
      'machine_name' => 'activity_subjects',
      'description' => 'This is the list of values to tag Activities with',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
