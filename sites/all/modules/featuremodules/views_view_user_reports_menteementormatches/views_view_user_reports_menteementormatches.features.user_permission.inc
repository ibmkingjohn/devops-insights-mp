<?php
/**
 * @file
 * views_view_user_reports_menteementormatches.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function views_view_user_reports_menteementormatches_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_approve_match'.
  $permissions['create field_approve_match'] = array(
    'name' => 'create field_approve_match',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_approve_match'.
  $permissions['edit field_approve_match'] = array(
    'name' => 'edit field_approve_match',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_approve_match'.
  $permissions['edit own field_approve_match'] = array(
    'name' => 'edit own field_approve_match',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_approve_match'.
  $permissions['view field_approve_match'] = array(
    'name' => 'view field_approve_match',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_approve_match'.
  $permissions['view own field_approve_match'] = array(
    'name' => 'view own field_approve_match',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
