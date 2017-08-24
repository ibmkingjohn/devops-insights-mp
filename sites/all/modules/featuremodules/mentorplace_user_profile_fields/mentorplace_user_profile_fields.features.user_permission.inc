<?php
/**
 * @file
 * mentorplace_user_profile_fields.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mentorplace_user_profile_fields_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_activate_mentor'.
  $permissions['create field_activate_mentor'] = array(
    'name' => 'create field_activate_mentor',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_activate_user'.
  $permissions['create field_activate_user'] = array(
    'name' => 'create field_activate_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bgc_complete'.
  $permissions['create field_bgc_complete'] = array(
    'name' => 'create field_bgc_complete',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_biography_uncensored'.
  $permissions['create field_biography_uncensored'] = array(
    'name' => 'create field_biography_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_career_advice_uncensored'.
  $permissions['create field_career_advice_uncensored'] = array(
    'name' => 'create field_career_advice_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_code_of_conduct'.
  $permissions['create field_code_of_conduct'] = array(
    'name' => 'create field_code_of_conduct',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_company_does_uncensored'.
  $permissions['create field_company_does_uncensored'] = array(
    'name' => 'create field_company_does_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_first_name_uncensored'.
  $permissions['create field_first_name_uncensored'] = array(
    'name' => 'create field_first_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_gender'.
  $permissions['create field_gender'] = array(
    'name' => 'create field_gender',
    'roles' => array(
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_grade'.
  $permissions['create field_grade'] = array(
    'name' => 'create field_grade',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_job_title_uncensored'.
  $permissions['create field_job_title_uncensored'] = array(
    'name' => 'create field_job_title_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_name_uncensored'.
  $permissions['create field_last_name_uncensored'] = array(
    'name' => 'create field_last_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_match_limit'.
  $permissions['create field_match_limit'] = array(
    'name' => 'create field_match_limit',
    'roles' => array(
      'Mentor' => 'Mentor',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_mentee_age'.
  $permissions['create field_mentee_age'] = array(
    'name' => 'create field_mentee_age',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_mentee_career_uncensored'.
  $permissions['create field_mentee_career_uncensored'] = array(
    'name' => 'create field_mentee_career_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_mentee_see_yourself_18_unc'.
  $permissions['create field_mentee_see_yourself_18_unc'] = array(
    'name' => 'create field_mentee_see_yourself_18_unc',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reject_user'.
  $permissions['create field_reject_user'] = array(
    'name' => 'create field_reject_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_school_subjects'.
  $permissions['create field_school_subjects'] = array(
    'name' => 'create field_school_subjects',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_typical_day_uncensored'.
  $permissions['create field_typical_day_uncensored'] = array(
    'name' => 'create field_typical_day_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user_acct_status'.
  $permissions['create field_user_acct_status'] = array(
    'name' => 'create field_user_acct_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user_status_uncensored'.
  $permissions['create field_user_status_uncensored'] = array(
    'name' => 'create field_user_status_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vacation'.
  $permissions['create field_vacation'] = array(
    'name' => 'create field_vacation',
    'roles' => array(
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activate_mentor'.
  $permissions['edit field_activate_mentor'] = array(
    'name' => 'edit field_activate_mentor',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_activate_user'.
  $permissions['edit field_activate_user'] = array(
    'name' => 'edit field_activate_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bgc_complete'.
  $permissions['edit field_bgc_complete'] = array(
    'name' => 'edit field_bgc_complete',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_biography_uncensored'.
  $permissions['edit field_biography_uncensored'] = array(
    'name' => 'edit field_biography_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_career_advice_uncensored'.
  $permissions['edit field_career_advice_uncensored'] = array(
    'name' => 'edit field_career_advice_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_code_of_conduct'.
  $permissions['edit field_code_of_conduct'] = array(
    'name' => 'edit field_code_of_conduct',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_company_does_uncensored'.
  $permissions['edit field_company_does_uncensored'] = array(
    'name' => 'edit field_company_does_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_first_name_uncensored'.
  $permissions['edit field_first_name_uncensored'] = array(
    'name' => 'edit field_first_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gender'.
  $permissions['edit field_gender'] = array(
    'name' => 'edit field_gender',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_grade'.
  $permissions['edit field_grade'] = array(
    'name' => 'edit field_grade',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_job_title_uncensored'.
  $permissions['edit field_job_title_uncensored'] = array(
    'name' => 'edit field_job_title_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_name_uncensored'.
  $permissions['edit field_last_name_uncensored'] = array(
    'name' => 'edit field_last_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_match_limit'.
  $permissions['edit field_match_limit'] = array(
    'name' => 'edit field_match_limit',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mentee_age'.
  $permissions['edit field_mentee_age'] = array(
    'name' => 'edit field_mentee_age',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mentee_career_uncensored'.
  $permissions['edit field_mentee_career_uncensored'] = array(
    'name' => 'edit field_mentee_career_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mentee_see_yourself_18_unc'.
  $permissions['edit field_mentee_see_yourself_18_unc'] = array(
    'name' => 'edit field_mentee_see_yourself_18_unc',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reject_user'.
  $permissions['edit field_reject_user'] = array(
    'name' => 'edit field_reject_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_school_subjects'.
  $permissions['edit field_school_subjects'] = array(
    'name' => 'edit field_school_subjects',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_typical_day_uncensored'.
  $permissions['edit field_typical_day_uncensored'] = array(
    'name' => 'edit field_typical_day_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_acct_status'.
  $permissions['edit field_user_acct_status'] = array(
    'name' => 'edit field_user_acct_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_status_uncensored'.
  $permissions['edit field_user_status_uncensored'] = array(
    'name' => 'edit field_user_status_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vacation'.
  $permissions['edit field_vacation'] = array(
    'name' => 'edit field_vacation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activate_mentor'.
  $permissions['edit own field_activate_mentor'] = array(
    'name' => 'edit own field_activate_mentor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_activate_user'.
  $permissions['edit own field_activate_user'] = array(
    'name' => 'edit own field_activate_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bgc_complete'.
  $permissions['edit own field_bgc_complete'] = array(
    'name' => 'edit own field_bgc_complete',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_biography_uncensored'.
  $permissions['edit own field_biography_uncensored'] = array(
    'name' => 'edit own field_biography_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_career_advice_uncensored'.
  $permissions['edit own field_career_advice_uncensored'] = array(
    'name' => 'edit own field_career_advice_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_code_of_conduct'.
  $permissions['edit own field_code_of_conduct'] = array(
    'name' => 'edit own field_code_of_conduct',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_company_does_uncensored'.
  $permissions['edit own field_company_does_uncensored'] = array(
    'name' => 'edit own field_company_does_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_first_name_uncensored'.
  $permissions['edit own field_first_name_uncensored'] = array(
    'name' => 'edit own field_first_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gender'.
  $permissions['edit own field_gender'] = array(
    'name' => 'edit own field_gender',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_grade'.
  $permissions['edit own field_grade'] = array(
    'name' => 'edit own field_grade',
    'roles' => array(
      'Mentee' => 'Mentee',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_job_title_uncensored'.
  $permissions['edit own field_job_title_uncensored'] = array(
    'name' => 'edit own field_job_title_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_name_uncensored'.
  $permissions['edit own field_last_name_uncensored'] = array(
    'name' => 'edit own field_last_name_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_match_limit'.
  $permissions['edit own field_match_limit'] = array(
    'name' => 'edit own field_match_limit',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mentee_age'.
  $permissions['edit own field_mentee_age'] = array(
    'name' => 'edit own field_mentee_age',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mentee_career_uncensored'.
  $permissions['edit own field_mentee_career_uncensored'] = array(
    'name' => 'edit own field_mentee_career_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mentee_see_yourself_18_unc'.
  $permissions['edit own field_mentee_see_yourself_18_unc'] = array(
    'name' => 'edit own field_mentee_see_yourself_18_unc',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reject_user'.
  $permissions['edit own field_reject_user'] = array(
    'name' => 'edit own field_reject_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_school_subjects'.
  $permissions['edit own field_school_subjects'] = array(
    'name' => 'edit own field_school_subjects',
    'roles' => array(
      'Mentee' => 'Mentee',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_typical_day_uncensored'.
  $permissions['edit own field_typical_day_uncensored'] = array(
    'name' => 'edit own field_typical_day_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_acct_status'.
  $permissions['edit own field_user_acct_status'] = array(
    'name' => 'edit own field_user_acct_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_status_uncensored'.
  $permissions['edit own field_user_status_uncensored'] = array(
    'name' => 'edit own field_user_status_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vacation'.
  $permissions['edit own field_vacation'] = array(
    'name' => 'edit own field_vacation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activate_mentor'.
  $permissions['view field_activate_mentor'] = array(
    'name' => 'view field_activate_mentor',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_activate_user'.
  $permissions['view field_activate_user'] = array(
    'name' => 'view field_activate_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bgc_complete'.
  $permissions['view field_bgc_complete'] = array(
    'name' => 'view field_bgc_complete',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_biography_uncensored'.
  $permissions['view field_biography_uncensored'] = array(
    'name' => 'view field_biography_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_career_advice_uncensored'.
  $permissions['view field_career_advice_uncensored'] = array(
    'name' => 'view field_career_advice_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_code_of_conduct'.
  $permissions['view field_code_of_conduct'] = array(
    'name' => 'view field_code_of_conduct',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_company_does_uncensored'.
  $permissions['view field_company_does_uncensored'] = array(
    'name' => 'view field_company_does_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_first_name_uncensored'.
  $permissions['view field_first_name_uncensored'] = array(
    'name' => 'view field_first_name_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gender'.
  $permissions['view field_gender'] = array(
    'name' => 'view field_gender',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_grade'.
  $permissions['view field_grade'] = array(
    'name' => 'view field_grade',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_job_title_uncensored'.
  $permissions['view field_job_title_uncensored'] = array(
    'name' => 'view field_job_title_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_name_uncensored'.
  $permissions['view field_last_name_uncensored'] = array(
    'name' => 'view field_last_name_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_match_limit'.
  $permissions['view field_match_limit'] = array(
    'name' => 'view field_match_limit',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mentee_age'.
  $permissions['view field_mentee_age'] = array(
    'name' => 'view field_mentee_age',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mentee_career_uncensored'.
  $permissions['view field_mentee_career_uncensored'] = array(
    'name' => 'view field_mentee_career_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mentee_see_yourself_18_unc'.
  $permissions['view field_mentee_see_yourself_18_unc'] = array(
    'name' => 'view field_mentee_see_yourself_18_unc',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reject_user'.
  $permissions['view field_reject_user'] = array(
    'name' => 'view field_reject_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_school_subjects'.
  $permissions['view field_school_subjects'] = array(
    'name' => 'view field_school_subjects',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_typical_day_uncensored'.
  $permissions['view field_typical_day_uncensored'] = array(
    'name' => 'view field_typical_day_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_acct_status'.
  $permissions['view field_user_acct_status'] = array(
    'name' => 'view field_user_acct_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_status_uncensored'.
  $permissions['view field_user_status_uncensored'] = array(
    'name' => 'view field_user_status_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vacation'.
  $permissions['view field_vacation'] = array(
    'name' => 'view field_vacation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activate_mentor'.
  $permissions['view own field_activate_mentor'] = array(
    'name' => 'view own field_activate_mentor',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_activate_user'.
  $permissions['view own field_activate_user'] = array(
    'name' => 'view own field_activate_user',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bgc_complete'.
  $permissions['view own field_bgc_complete'] = array(
    'name' => 'view own field_bgc_complete',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_biography_uncensored'.
  $permissions['view own field_biography_uncensored'] = array(
    'name' => 'view own field_biography_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_career_advice_uncensored'.
  $permissions['view own field_career_advice_uncensored'] = array(
    'name' => 'view own field_career_advice_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_code_of_conduct'.
  $permissions['view own field_code_of_conduct'] = array(
    'name' => 'view own field_code_of_conduct',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_company_does_uncensored'.
  $permissions['view own field_company_does_uncensored'] = array(
    'name' => 'view own field_company_does_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_first_name_uncensored'.
  $permissions['view own field_first_name_uncensored'] = array(
    'name' => 'view own field_first_name_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gender'.
  $permissions['view own field_gender'] = array(
    'name' => 'view own field_gender',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_grade'.
  $permissions['view own field_grade'] = array(
    'name' => 'view own field_grade',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_job_title_uncensored'.
  $permissions['view own field_job_title_uncensored'] = array(
    'name' => 'view own field_job_title_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_name_uncensored'.
  $permissions['view own field_last_name_uncensored'] = array(
    'name' => 'view own field_last_name_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_match_limit'.
  $permissions['view own field_match_limit'] = array(
    'name' => 'view own field_match_limit',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mentee_age'.
  $permissions['view own field_mentee_age'] = array(
    'name' => 'view own field_mentee_age',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mentee_career_uncensored'.
  $permissions['view own field_mentee_career_uncensored'] = array(
    'name' => 'view own field_mentee_career_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mentee_see_yourself_18_unc'.
  $permissions['view own field_mentee_see_yourself_18_unc'] = array(
    'name' => 'view own field_mentee_see_yourself_18_unc',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reject_user'.
  $permissions['view own field_reject_user'] = array(
    'name' => 'view own field_reject_user',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_school_subjects'.
  $permissions['view own field_school_subjects'] = array(
    'name' => 'view own field_school_subjects',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentee' => 'Mentee',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_typical_day_uncensored'.
  $permissions['view own field_typical_day_uncensored'] = array(
    'name' => 'view own field_typical_day_uncensored',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_acct_status'.
  $permissions['view own field_user_acct_status'] = array(
    'name' => 'view own field_user_acct_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_status_uncensored'.
  $permissions['view own field_user_status_uncensored'] = array(
    'name' => 'view own field_user_status_uncensored',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vacation'.
  $permissions['view own field_vacation'] = array(
    'name' => 'view own field_vacation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
