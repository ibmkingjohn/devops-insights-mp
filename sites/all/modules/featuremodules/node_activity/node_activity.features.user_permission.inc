<?php
/**
 * @file
 * node_activity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function node_activity_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_mparchive'.
  $permissions['create field_mparchive'] = array(
    'name' => 'create field_mparchive',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_mparchive'.
  $permissions['edit field_mparchive'] = array(
    'name' => 'edit field_mparchive',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_mparchive'.
  $permissions['edit own field_mparchive'] = array(
    'name' => 'edit own field_mparchive',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_mparchive'.
  $permissions['view field_mparchive'] = array(
    'name' => 'view field_mparchive',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_mparchive'.
  $permissions['view own field_mparchive'] = array(
    'name' => 'view own field_mparchive',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
