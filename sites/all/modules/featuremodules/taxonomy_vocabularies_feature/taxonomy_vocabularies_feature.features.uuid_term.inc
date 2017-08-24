<?php
/**
 * @file
 * taxonomy_vocabularies_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function taxonomy_vocabularies_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sports',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '23e25d00-016e-48d4-a17e-89a322df084f',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Nutrition',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '389f2dd8-ea29-417f-82c3-8feea18f79c1',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'English Language Arts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '445ad274-6fad-4bed-af2a-e7f82708f171',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Careers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '57bf48ab-fe4f-47bc-8cdc-5b285bcf159a',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Engineering',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '64b86192-2623-4be8-99be-d8ca22e11053',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Social Studies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '6fc18c6c-d636-44b7-9c31-b9fc4f6084c7',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'a2818ad6-dfb4-4427-a933-27c5a98fc53e',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Math',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'a6d74d9c-6f4e-472b-8f6f-542469cd56b3',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Science',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'd53436a1-338d-495c-99e0-1b4106cc5785',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  $terms[] = array(
    'name' => 'Computer Science',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'dd983068-44f7-4774-a6bc-f88f2ae5b54d',
    'vocabulary_machine_name' => 'activity_subjects',
  );
  return $terms;
}
