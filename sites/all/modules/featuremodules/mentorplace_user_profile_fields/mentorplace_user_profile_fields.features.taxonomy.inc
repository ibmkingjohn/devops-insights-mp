<?php
/**
 * @file
 * mentorplace_user_profile_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mentorplace_user_profile_fields_taxonomy_default_vocabularies() {
  return array(
    'fav_subjects' => array(
      'name' => 'Favorite Subjects',
      'machine_name' => 'fav_subjects',
      'description' => 'for user profile tagging',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'free_time' => array(
      'name' => 'Free Time',
      'machine_name' => 'free_time',
      'description' => 'List of free time options for user profile',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
    'gender' => array(
      'name' => 'Gender',
      'machine_name' => 'gender',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
    'highest_education_degree' => array(
      'name' => 'Highest Education Degree',
      'machine_name' => 'highest_education_degree',
      'description' => 'List of Degrees for user profile',
      'hierarchy' => 2,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
    'mentee_career_fields' => array(
      'name' => 'Mentee Career Fields',
      'machine_name' => 'mentee_career_fields',
      'description' => 'List of Careers for user profile',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 3,
    ),
    'mentor_comp_size' => array(
      'name' => 'Mentor Size of Company',
      'machine_name' => 'mentor_comp_size',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
    'mentor_educational_degree' => array(
      'name' => 'Mentor Educational Degree',
      'machine_name' => 'mentor_educational_degree',
      'description' => 'List of Degrees for Mentor user profile',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 5,
    ),
    'mentor_job_field_specialty' => array(
      'name' => 'Mentor Job Field / Specialty',
      'machine_name' => 'mentor_job_field_specialty',
      'description' => 'List of Job Field / Specialties for Mentor user profile',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 8,
    ),
    'mentor_salary_range' => array(
      'name' => 'Mentor Salary Range',
      'machine_name' => 'mentor_salary_range',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 9,
    ),
    'mentor_work_env' => array(
      'name' => 'Mentor Work Environment',
      'machine_name' => 'mentor_work_env',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
    'user_account_status' => array(
      'name' => 'User Account Status',
      'machine_name' => 'user_account_status',
      'description' => 'Status of user could be alum or banned',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
    'user_type' => array(
      'name' => 'User Type',
      'machine_name' => 'user_type',
      'description' => 'List of User Types for registration',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
  );
}
