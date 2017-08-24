<?php
/**
 * @file
 * contact_us_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function contact_us_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_complete_task'.
  $permissions['create field_complete_task'] = array(
    'name' => 'create field_complete_task',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_complete_tasklist'.
  $permissions['create field_complete_tasklist'] = array(
    'name' => 'create field_complete_tasklist',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_us_type'.
  $permissions['create field_contact_us_type'] = array(
    'name' => 'create field_contact_us_type',
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

  // Exported permission: 'create field_contactus_email'.
  $permissions['create field_contactus_email'] = array(
    'name' => 'create field_contactus_email',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_complete_task'.
  $permissions['edit field_complete_task'] = array(
    'name' => 'edit field_complete_task',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_complete_tasklist'.
  $permissions['edit field_complete_tasklist'] = array(
    'name' => 'edit field_complete_tasklist',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_us_type'.
  $permissions['edit field_contact_us_type'] = array(
    'name' => 'edit field_contact_us_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contactus_email'.
  $permissions['edit field_contactus_email'] = array(
    'name' => 'edit field_contactus_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_complete_task'.
  $permissions['edit own field_complete_task'] = array(
    'name' => 'edit own field_complete_task',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_complete_tasklist'.
  $permissions['edit own field_complete_tasklist'] = array(
    'name' => 'edit own field_complete_tasklist',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_us_type'.
  $permissions['edit own field_contact_us_type'] = array(
    'name' => 'edit own field_contact_us_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contactus_email'.
  $permissions['edit own field_contactus_email'] = array(
    'name' => 'edit own field_contactus_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_complete_task'.
  $permissions['view field_complete_task'] = array(
    'name' => 'view field_complete_task',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_complete_tasklist'.
  $permissions['view field_complete_tasklist'] = array(
    'name' => 'view field_complete_tasklist',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_us_type'.
  $permissions['view field_contact_us_type'] = array(
    'name' => 'view field_contact_us_type',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contactus_email'.
  $permissions['view field_contactus_email'] = array(
    'name' => 'view field_contactus_email',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_complete_task'.
  $permissions['view own field_complete_task'] = array(
    'name' => 'view own field_complete_task',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_complete_tasklist'.
  $permissions['view own field_complete_tasklist'] = array(
    'name' => 'view own field_complete_tasklist',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_us_type'.
  $permissions['view own field_contact_us_type'] = array(
    'name' => 'view own field_contact_us_type',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contactus_email'.
  $permissions['view own field_contactus_email'] = array(
    'name' => 'view own field_contactus_email',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
