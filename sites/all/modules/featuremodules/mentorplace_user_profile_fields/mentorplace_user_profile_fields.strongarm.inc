<?php
/**
 * @file
 * mentorplace_user_profile_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mentorplace_user_profile_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_fav_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_fav_subjects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_free_time_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_free_time_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_gender_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_gender_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_highest_education_degree_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_highest_education_degree_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentee_career_fields_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentee_career_fields_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_comp_size_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentor_comp_size_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_educational_degree_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentor_educational_degree_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_job_field_specialty_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentor_job_field_specialty_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_salary_range_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentor_salary_range_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_work_env_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mentor_work_env_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_user_account_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_user_account_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_user_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_user_type_pattern'] = $strongarm;

  return $export;
}
