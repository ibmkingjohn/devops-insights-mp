<?php
/**
 * @file
 * mentorplace_user_profile_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mentorplace_user_profile_fields_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acct_info_tab|user|user|form';
  $field_group->group_name = 'group_acct_info_tab';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'Account Information',
    'weight' => '111',
    'children' => array(
      0 => 'field_taxonomy_tag',
      1 => 'field_user_acct_type',
      2 => 'field_first_name',
      3 => 'field_last_name',
      4 => 'field_user_acct_status',
      5 => 'field_gender',
      6 => 'field_match_limit',
      7 => 'account',
      8 => 'picture',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Account Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-acct-info-tab field-group-htab ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_acct_info_tab|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administrative|user|user|form';
  $field_group->group_name = 'group_administrative';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '7',
    'children' => array(
      0 => 'field_is_school_in_session',
      1 => 'field_bgc_complete',
      2 => 'field_preregistered',
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
        'classes' => 'group-administrative field-group-div ',
        'required_fields' => 1,
        'id' => 'user_user_form_group_administrative',
      ),
    ),
  );
  $field_groups['group_administrative|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|user|user|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_wrapper';
  $field_group->data = array(
    'label' => 'My Profile',
    'weight' => '110',
    'children' => array(
      0 => 'group_mentor_edu_bk',
      1 => 'group_mentor_mc',
      2 => 'group_mentor_am',
      3 => 'group_mentor_free',
      4 => 'group_mentee',
      5 => 'group_administrative',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'My Profile',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_basic_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentee|user|user|form';
  $field_group->group_name = 'group_mentee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'Mentee',
    'weight' => '2',
    'children' => array(
      0 => 'field_available',
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
        'classes' => 'group-mentee field-group-div ',
        'required_fields' => 1,
        'id' => 'user_user_form_group_mentee',
      ),
    ),
  );
  $field_groups['group_mentee|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentor_am|user|user|form';
  $field_group->group_name = 'group_mentor_am';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'About Me',
    'weight' => '3',
    'children' => array(
      0 => 'field_biography',
      1 => 'field_mentee_age',
      2 => 'field_mentee_career',
      3 => 'field_mentee_see_yourself_18',
      4 => 'field_mentee_degree',
      5 => 'field_school_subjects',
      6 => 'field_mentee_career_fields',
      7 => 'field_grade',
      8 => 'field_check_in',
      9 => 'field_vacation',
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
        'classes' => '',
        'required_fields' => 1,
        'id' => 'user_user_form_group_mentor_am',
      ),
    ),
  );
  $field_groups['group_mentor_am|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentor_edu_bk|user|user|form';
  $field_group->group_name = 'group_mentor_edu_bk';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'Educational Background',
    'weight' => '5',
    'children' => array(
      0 => 'field_edu_degree',
      1 => 'field_favorite_subjects_in_schoo',
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
        'classes' => '',
        'required_fields' => 1,
        'id' => 'user_user_form_group_mentor_edu_bk',
      ),
    ),
  );
  $field_groups['group_mentor_edu_bk|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentor_free|user|user|form';
  $field_group->group_name = 'group_mentor_free';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'In My Free Time',
    'weight' => '6',
    'children' => array(
      0 => 'field_free_time',
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
        'classes' => 'group-mentor-free field-group-div ',
        'required_fields' => 1,
        'id' => 'user_user_form_group_mentor_free',
      ),
    ),
  );
  $field_groups['group_mentor_free|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mentor_mc|user|user|form';
  $field_group->group_name = 'group_mentor_mc';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic_info';
  $field_group->data = array(
    'label' => 'My Career',
    'weight' => '4',
    'children' => array(
      0 => 'field_general_career_advice',
      1 => 'field_job_field_specialty',
      2 => 'field_my_job_title',
      3 => 'field_salary',
      4 => 'field_company_size',
      5 => 'field_work_env',
      6 => 'field_what_my_company_does',
      7 => 'field_what_i_do_in_a_typical_day',
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
        'classes' => '',
        'required_fields' => 1,
        'id' => 'user_user_form_group_mentor_mc',
      ),
    ),
  );
  $field_groups['group_mentor_mc|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_wrapper|user|user|form';
  $field_group->group_name = 'group_profile_wrapper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_acct_info_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile-wrapper field-group-htabs ',
      ),
    ),
  );
  $field_groups['group_profile_wrapper|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('Account Information');
  t('Administrative');
  t('Educational Background');
  t('In My Free Time');
  t('Mentee');
  t('My Career');
  t('My Profile');
  t('Profile Wrapper');

  return $field_groups;
}
