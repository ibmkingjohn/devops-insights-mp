<?php
/**
 * @file
 * contact_us_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function contact_us_feature_taxonomy_default_vocabularies() {
  return array(
    'contact_us_category' => array(
      'name' => 'Contact Us Category',
      'machine_name' => 'contact_us_category',
      'description' => 'This will be the drop down list for users contacting site admin',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
