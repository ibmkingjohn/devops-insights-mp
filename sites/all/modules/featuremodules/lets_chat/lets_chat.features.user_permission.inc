<?php
/**
 * @file
 * lets_chat.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lets_chat_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_created_time'.
  $permissions['create field_created_time'] = array(
    'name' => 'create field_created_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_is_flagged'.
  $permissions['create field_is_flagged'] = array(
    'name' => 'create field_is_flagged',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_mentee_read_time'.
  $permissions['create field_last_mentee_read_time'] = array(
    'name' => 'create field_last_mentee_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_mentor_read_time'.
  $permissions['create field_last_mentor_read_time'] = array(
    'name' => 'create field_last_mentor_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_uncensored_conversation'.
  $permissions['create field_uncensored_conversation'] = array(
    'name' => 'create field_uncensored_conversation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_uncensored_letschat_body'.
  $permissions['create field_uncensored_letschat_body'] = array(
    'name' => 'create field_uncensored_letschat_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_uncensored_title_field'.
  $permissions['create field_uncensored_title_field'] = array(
    'name' => 'create field_uncensored_title_field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_created_time'.
  $permissions['edit field_created_time'] = array(
    'name' => 'edit field_created_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_is_flagged'.
  $permissions['edit field_is_flagged'] = array(
    'name' => 'edit field_is_flagged',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_mentee_read_time'.
  $permissions['edit field_last_mentee_read_time'] = array(
    'name' => 'edit field_last_mentee_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_mentor_read_time'.
  $permissions['edit field_last_mentor_read_time'] = array(
    'name' => 'edit field_last_mentor_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_uncensored_conversation'.
  $permissions['edit field_uncensored_conversation'] = array(
    'name' => 'edit field_uncensored_conversation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_uncensored_letschat_body'.
  $permissions['edit field_uncensored_letschat_body'] = array(
    'name' => 'edit field_uncensored_letschat_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_uncensored_title_field'.
  $permissions['edit field_uncensored_title_field'] = array(
    'name' => 'edit field_uncensored_title_field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_created_time'.
  $permissions['edit own field_created_time'] = array(
    'name' => 'edit own field_created_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_is_flagged'.
  $permissions['edit own field_is_flagged'] = array(
    'name' => 'edit own field_is_flagged',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_mentee_read_time'.
  $permissions['edit own field_last_mentee_read_time'] = array(
    'name' => 'edit own field_last_mentee_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_mentor_read_time'.
  $permissions['edit own field_last_mentor_read_time'] = array(
    'name' => 'edit own field_last_mentor_read_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_uncensored_conversation'.
  $permissions['edit own field_uncensored_conversation'] = array(
    'name' => 'edit own field_uncensored_conversation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_uncensored_letschat_body'.
  $permissions['edit own field_uncensored_letschat_body'] = array(
    'name' => 'edit own field_uncensored_letschat_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_uncensored_title_field'.
  $permissions['edit own field_uncensored_title_field'] = array(
    'name' => 'edit own field_uncensored_title_field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_created_time'.
  $permissions['view field_created_time'] = array(
    'name' => 'view field_created_time',
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

  // Exported permission: 'view field_is_flagged'.
  $permissions['view field_is_flagged'] = array(
    'name' => 'view field_is_flagged',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_mentee_read_time'.
  $permissions['view field_last_mentee_read_time'] = array(
    'name' => 'view field_last_mentee_read_time',
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

  // Exported permission: 'view field_last_mentor_read_time'.
  $permissions['view field_last_mentor_read_time'] = array(
    'name' => 'view field_last_mentor_read_time',
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

  // Exported permission: 'view field_uncensored_conversation'.
  $permissions['view field_uncensored_conversation'] = array(
    'name' => 'view field_uncensored_conversation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_uncensored_letschat_body'.
  $permissions['view field_uncensored_letschat_body'] = array(
    'name' => 'view field_uncensored_letschat_body',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_uncensored_title_field'.
  $permissions['view field_uncensored_title_field'] = array(
    'name' => 'view field_uncensored_title_field',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_created_time'.
  $permissions['view own field_created_time'] = array(
    'name' => 'view own field_created_time',
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

  // Exported permission: 'view own field_is_flagged'.
  $permissions['view own field_is_flagged'] = array(
    'name' => 'view own field_is_flagged',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_mentee_read_time'.
  $permissions['view own field_last_mentee_read_time'] = array(
    'name' => 'view own field_last_mentee_read_time',
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

  // Exported permission: 'view own field_last_mentor_read_time'.
  $permissions['view own field_last_mentor_read_time'] = array(
    'name' => 'view own field_last_mentor_read_time',
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

  // Exported permission: 'view own field_uncensored_conversation'.
  $permissions['view own field_uncensored_conversation'] = array(
    'name' => 'view own field_uncensored_conversation',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_uncensored_letschat_body'.
  $permissions['view own field_uncensored_letschat_body'] = array(
    'name' => 'view own field_uncensored_letschat_body',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_uncensored_title_field'.
  $permissions['view own field_uncensored_title_field'] = array(
    'name' => 'view own field_uncensored_title_field',
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
