<?php
/**
 * @file
 * rules_user_functions.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_user_functions_default_rules_configuration() {
  $items = array();
  $items['rules_approve_requested_match'] = entity_import('rules_config', '{ "rules_approve_requested_match" : {
      "LABEL" : "Approve Requested Match",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "button_field", "rules", "php" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_approve_match"
          }
        },
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "if (module_exists(\\u0027sm_users\\u0027)) {\\r\\n  $mentee_uid = $entity-\\u003Euid;\\r\\n  $mentor_uid =  $entity-\\u003Efield_mentor_reference[\\u0027und\\u0027][0][\\u0027uid\\u0027];\\r\\n  sm_users_assign_mentee_to_mentor($mentee_uid, $mentor_uid);\\r\\n\\r\\n  \\/\\/ set up variables for private messages and emails\\r\\n  $author = user_load(1);  \\/\\/ admin is the author of all automatically generated message\\r\\n  $mentee = user_load($mentee_uid); \\/\\/ the mentee object\\r\\n  $mentor = user_load($mentor_uid);  \\/\\/ the mentor object\\r\\n  $from = \\u0027admin@bigbluementoring.org\\u0027;\\r\\n  $my_module = \\u0027match_approval_rule\\u0027;\\r\\n  $my_mail_token = microtime();\\r\\n\\r\\n  \\/\\/ private message to mentee\\r\\n  $subject = t(\\u0027Your requested match to mentor\\u0027) . \\u0027 \\u0027 . $mentor-\\u003Ename . \\u0027 \\u0027 . t(\\u0027has been approved\\u0027) . \\u0027.\\u0027;\\r\\n  $body =   t(\\u0027Your requested match to mentor\\u0027) . \\u0027 \\u0027 . $mentor-\\u003Ename . \\u0027 \\u0027 . t(\\u0027has been approved\\u0027) . \\u0027. \\u0027 . t(\\u0027Navigate to your dashboard to view your new mentor!\\u0027);\\r\\n  $pm_recipients = array();\\r\\n  $pm_recipients[] = $mentee;\\r\\n  privatemsg_new_thread($pm_recipients, $subject, $body, array(\\u0027author\\u0027 =\\u003E $author,\\u0027timestamp\\u0027 =\\u003E time()));\\r\\n  \\/\\/ private message to mentor\\r\\n  $subject = t(\\u0027New mentee notification\\u0027) . \\u0027.\\u0027;\\r\\n  $body =   t(\\u0027The mentee\\u0027) . \\u0027 \\u0027 . $mentee-\\u003Ename . \\u0027 \\u0027 . t(\\u0027has requested you as a mentor and the request has been approved by your administrator. Visit your dashboard to view your new mentee!\\u0027);\\r\\n  $pm_recipients = array();\\r\\n  $pm_recipients[] = $mentor;\\r\\n  privatemsg_new_thread($pm_recipients, $subject, $body, array(\\u0027author\\u0027 =\\u003E $author,\\u0027timestamp\\u0027 =\\u003E time()));\\r\\n}" } },
        { "node_unpublish" : { "node" : [ "entity" ] } },
        { "button_field_action_reload" : [] }
      ]
    }
  }');
  $items['rules_assign_user_role_group_admin'] = entity_import('rules_config', '{ "rules_assign_user_role_group_admin" : {
      "LABEL" : "Assign User Role Group Admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "23" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_assign_user_role_mentee'] = entity_import('rules_config', '{ "rules_assign_user_role_mentee" : {
      "LABEL" : "Assign User Role Mentee",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "24" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_assign_user_role_mentor'] = entity_import('rules_config', '{ "rules_assign_user_role_mentor" : {
      "LABEL" : "Assign User Role Mentor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "25" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_assign_user_role_staff_admin'] = entity_import('rules_config', '{ "rules_assign_user_role_staff_admin" : {
      "LABEL" : "Assign User Role Staff Admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "3948" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
      ]
    }
  }');
  $items['rules_assign_user_role_subsite_admin'] = entity_import('rules_config', '{ "rules_assign_user_role_subsite_admin" : {
      "LABEL" : "Assign User Role Subsite Admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "22" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_create_partnership'] = entity_import('rules_config', '{ "rules_create_partnership" : {
      "LABEL" : "Create partnership",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "button_field", "php", "rules" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_add_partner"
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "global $user;\\r\\n$var_label = \\u0027mpuid_\\u0027. $user-\\u003Euid; \\r\\n$uid1 = variable_get($var_label); \\/\\/ This var is set by the rule \\u0022Set uid variable\\u0022\\r\\nvariable_del($var_label);\\r\\n$uid2 = $entity-\\u003Euid;\\r\\nif ((is_numeric($uid1)) \\u0026\\u0026 (is_numeric($uid2)) \\u0026\\u0026 ($uid1\\u003E0) \\u0026\\u0026 ($uid2 \\u003E 0)) {\\r\\n  sm_users_assign_mentee_to_mentor($uid1, $uid2);\\r\\n}\\r\\n" } },
        { "button_field_action_reload" : [] }
      ]
    }
  }');
  $items['rules_custom_page_redirect'] = entity_import('rules_config', '{ "rules_custom_page_redirect" : {
      "LABEL" : "Code of Conduct Update Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "operation" : "OR"
          }
        },
        { "data_is" : { "data" : [ "account:field-code-of-conduct" ], "value" : 0 } }
      ],
      "DO" : [ { "redirect" : { "url" : "content\\/code-conduct-update" } } ]
    }
  }');
  $items['rules_my_status_field_blank_rule'] = entity_import('rules_config', '{ "rules_my_status_field_blank_rule" : {
      "LABEL" : "My Status field Blank Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "user_update" : [], "user_view" : [] },
      "IF" : [
        { "data_is_empty" : { "data" : [ "site:current-user:field-check-in" ] } },
        { "AND" : [] },
        { "php_eval" : { "code" : "if(strpos($_SERVER[\\u0027HTTP_REFERER\\u0027], \\u0022user\\/reset\\u0022) === FALSE){\\r\\nreturn TRUE;\\r\\n}else{\\r\\nreturn FALSE;\\r\\n}" } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "site:current-user:field-check-in" ],
            "value" : "Share an update. What are you working on?"
          }
        }
      ]
    }
  }');
  $items['rules_set_code_of_conduct_for_mentee'] = entity_import('rules_config', '{ "rules_set_code_of_conduct_for_mentee" : {
      "LABEL" : "Set Code of Conduct for Mentee",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "webform_rules" ],
      "ON" : { "webform_rules_submit" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "site:current-user" ], "type" : "user" } },
        { "entity_has_field" : { "entity" : [ "user" ], "field" : "field_code_of_conduct" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "[user:uid] just submitted webform", "repeat" : 0 } },
        { "php_eval" : { "code" : "$account = user_load($user-\\u003Euid); \\/\\/ Loading account\\r\\n$edit = array(\\r\\n  \\u0027field_code_of_conduct\\u0027 =\\u003E array(\\r\\n    \\u0027und\\u0027 =\\u003E array(\\r\\n      0 =\\u003E array(\\r\\n        \\u0027value\\u0027 =\\u003E \\u00271\\u0027,\\r\\n      ),\\r\\n    ),\\r\\n  ),\\r\\n);\\r\\nuser_save($account, $edit);" } }
      ]
    }
  }');
  $items['rules_set_new_mentor_to_blocked'] = entity_import('rules_config', '{ "rules_set_new_mentor_to_blocked" : {
      "LABEL" : "Set new Mentor to blocked",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "25" } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "account:status" ], "value" : "1" } }
      ],
      "DO" : [ { "data_set" : { "data" : [ "account:status" ], "value" : "0" } } ]
    }
  }');
  $items['rules_set_new_user_by_ga_to_active'] = entity_import('rules_config', '{ "rules_set_new_user_by_ga_to_active" : {
      "LABEL" : "Set New User by GA to Active",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "account" ], "field" : "field_user_acct_status" } },
        { "NOT data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "25" } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "account:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:field-user-acct-status" ], "value" : "3923" } }
      ]
    }
  }');
  $items['rules_user_is_awaiting_approval'] = entity_import('rules_config', '{ "rules_user_is_awaiting_approval" : {
      "LABEL" : "User is awaiting approval",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-status" ], "value" : "3961" } },
        { "AND" : [] },
        { "NOT user_is_blocked" : { "account" : [ "account" ] } }
      ],
      "DO" : [ { "user_block" : { "account" : [ "account" ] } } ]
    }
  }');
  $items['rules_user_is_no_longer_active'] = entity_import('rules_config', '{ "rules_user_is_no_longer_active" : {
      "LABEL" : "User is no longer active",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-status" ], "value" : "3938" } },
        { "AND" : [] },
        { "NOT user_is_blocked" : { "account" : [ "account" ] } }
      ],
      "DO" : [ { "user_block" : { "account" : [ "account" ] } } ]
    }
  }');
  $items['rules_user_is_set_to_active'] = entity_import('rules_config', '{ "rules_user_is_set_to_active" : {
      "LABEL" : "User is set to active",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-status" ], "value" : "3923" } },
        { "AND" : [] },
        { "user_is_blocked" : { "account" : [ "account" ] } }
      ],
      "DO" : [ { "user_unblock" : { "account" : [ "account" ] } } ]
    }
  }');
  $items['rules_user_is_set_to_alumni_status'] = entity_import('rules_config', '{ "rules_user_is_set_to_alumni_status" : {
      "LABEL" : "User is set to alumni status",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:field-user-acct-status" ], "value" : "3924" } },
        { "AND" : [] },
        { "user_is_blocked" : { "account" : [ "account" ] } }
      ],
      "DO" : [ { "user_unblock" : { "account" : [ "account" ] } } ]
    }
  }');
  $items['rules_users_view_own_profile_only'] = entity_import('rules_config', '{ "rules_users_view_own_profile_only" : {
      "LABEL" : "Users View Own Profile Only",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "user_view" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "6" : "6" } },
            "operation" : "OR"
          }
        },
        { "AND" : [] },
        { "NOT php_eval" : { "code" : "$uid = [site:current-user:uid];\\r\\n$account = [account:uid];\\r\\n$result = db_query(\\u0027SELECT r.rid FROM {user_relationships} r WHERE r.requester_id = :uid AND r.requestee_id = :account\\u0027, array(\\u0027:uid\\u0027 =\\u003E $uid, \\u0027:account\\u0027 =\\u003E $account));\\r\\nif($result){\\r\\n  foreach($result as $row){\\r\\n     if($row-\\u003Erid != NULL){\\r\\n      return TRUE;\\r\\n     }\\r\\n  }\\r\\n}\\r\\nreturn FALSE;" } },
        { "AND" : [] },
        { "NOT data_is" : { "data" : [ "site:current-user:uid" ], "value" : [ "account:uid" ] } }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
  return $items;
}
