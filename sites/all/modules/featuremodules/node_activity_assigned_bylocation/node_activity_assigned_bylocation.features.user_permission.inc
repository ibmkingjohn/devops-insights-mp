<?php
/**
 * @file
 * node_activity_assigned_bylocation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function node_activity_assigned_bylocation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_act_assign_approve_attach'.
  $permissions['create field_act_assign_approve_attach'] = array(
    'name' => 'create field_act_assign_approve_attach',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_act_assign_entity'.
  $permissions['create field_act_assign_entity'] = array(
    'name' => 'create field_act_assign_entity',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_approve_assignment'.
  $permissions['create field_approve_assignment'] = array(
    'name' => 'create field_approve_assignment',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_attachment_status'.
  $permissions['create field_attachment_status'] = array(
    'name' => 'create field_attachment_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_completion_status'.
  $permissions['create field_completion_status'] = array(
    'name' => 'create field_completion_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_filtered'.
  $permissions['create field_filtered'] = array(
    'name' => 'create field_filtered',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_taxonomy_tag'.
  $permissions['create field_taxonomy_tag'] = array(
    'name' => 'create field_taxonomy_tag',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_uncensored_actassign_body'.
  $permissions['create field_uncensored_actassign_body'] = array(
    'name' => 'create field_uncensored_actassign_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_act_assign_approve_attach'.
  $permissions['edit field_act_assign_approve_attach'] = array(
    'name' => 'edit field_act_assign_approve_attach',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_act_assign_entity'.
  $permissions['edit field_act_assign_entity'] = array(
    'name' => 'edit field_act_assign_entity',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_approve_assignment'.
  $permissions['edit field_approve_assignment'] = array(
    'name' => 'edit field_approve_assignment',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_attachment_status'.
  $permissions['edit field_attachment_status'] = array(
    'name' => 'edit field_attachment_status',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_completion_status'.
  $permissions['edit field_completion_status'] = array(
    'name' => 'edit field_completion_status',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_filtered'.
  $permissions['edit field_filtered'] = array(
    'name' => 'edit field_filtered',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_taxonomy_tag'.
  $permissions['edit field_taxonomy_tag'] = array(
    'name' => 'edit field_taxonomy_tag',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_uncensored_actassign_body'.
  $permissions['edit field_uncensored_actassign_body'] = array(
    'name' => 'edit field_uncensored_actassign_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_act_assign_approve_attach'.
  $permissions['edit own field_act_assign_approve_attach'] = array(
    'name' => 'edit own field_act_assign_approve_attach',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_act_assign_entity'.
  $permissions['edit own field_act_assign_entity'] = array(
    'name' => 'edit own field_act_assign_entity',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_approve_assignment'.
  $permissions['edit own field_approve_assignment'] = array(
    'name' => 'edit own field_approve_assignment',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_attachment_status'.
  $permissions['edit own field_attachment_status'] = array(
    'name' => 'edit own field_attachment_status',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_completion_status'.
  $permissions['edit own field_completion_status'] = array(
    'name' => 'edit own field_completion_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_filtered'.
  $permissions['edit own field_filtered'] = array(
    'name' => 'edit own field_filtered',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_taxonomy_tag'.
  $permissions['edit own field_taxonomy_tag'] = array(
    'name' => 'edit own field_taxonomy_tag',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_uncensored_actassign_body'.
  $permissions['edit own field_uncensored_actassign_body'] = array(
    'name' => 'edit own field_uncensored_actassign_body',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_act_assign_approve_attach'.
  $permissions['view field_act_assign_approve_attach'] = array(
    'name' => 'view field_act_assign_approve_attach',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_act_assign_entity'.
  $permissions['view field_act_assign_entity'] = array(
    'name' => 'view field_act_assign_entity',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_approve_assignment'.
  $permissions['view field_approve_assignment'] = array(
    'name' => 'view field_approve_assignment',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_attachment_status'.
  $permissions['view field_attachment_status'] = array(
    'name' => 'view field_attachment_status',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_completion_status'.
  $permissions['view field_completion_status'] = array(
    'name' => 'view field_completion_status',
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

  // Exported permission: 'view field_filtered'.
  $permissions['view field_filtered'] = array(
    'name' => 'view field_filtered',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_taxonomy_tag'.
  $permissions['view field_taxonomy_tag'] = array(
    'name' => 'view field_taxonomy_tag',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_uncensored_actassign_body'.
  $permissions['view field_uncensored_actassign_body'] = array(
    'name' => 'view field_uncensored_actassign_body',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_act_assign_approve_attach'.
  $permissions['view own field_act_assign_approve_attach'] = array(
    'name' => 'view own field_act_assign_approve_attach',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_act_assign_entity'.
  $permissions['view own field_act_assign_entity'] = array(
    'name' => 'view own field_act_assign_entity',
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

  // Exported permission: 'view own field_approve_assignment'.
  $permissions['view own field_approve_assignment'] = array(
    'name' => 'view own field_approve_assignment',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_attachment_status'.
  $permissions['view own field_attachment_status'] = array(
    'name' => 'view own field_attachment_status',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_completion_status'.
  $permissions['view own field_completion_status'] = array(
    'name' => 'view own field_completion_status',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Mentor' => 'Mentor',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_filtered'.
  $permissions['view own field_filtered'] = array(
    'name' => 'view own field_filtered',
    'roles' => array(
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_taxonomy_tag'.
  $permissions['view own field_taxonomy_tag'] = array(
    'name' => 'view own field_taxonomy_tag',
    'roles' => array(
      'Group Admin' => 'Group Admin',
      'Staff Admin' => 'Staff Admin',
      'Subsite Admin' => 'Subsite Admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_uncensored_actassign_body'.
  $permissions['view own field_uncensored_actassign_body'] = array(
    'name' => 'view own field_uncensored_actassign_body',
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
