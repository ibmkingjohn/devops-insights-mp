<?php
/**
 * @file
 * rules_components.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_components_default_rules_configuration() {
  $items = array();
  $items['rules_add_activity'] = entity_import('rules_config', '{ "rules_add_activity" : {
      "LABEL" : "Add An Activity",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "curricula" : { "label" : "Curricula", "type" : "node" },
        "title" : { "label" : "Title", "type" : "text" },
        "activity_objective" : { "label" : "Activity Objective", "type" : "text_formatted" },
        "activity_description" : { "label" : "Activity Description", "type" : "text_formatted" }
      },
      "ACTION SET" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "activity",
              "param_title" : [ "title" ],
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-curriculum-reference" ],
            "value" : [ "curricula" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-activity-description" ],
            "value" : [ "activity-description" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-activity-objective" ],
            "value" : [ "activity-objective" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:status" ], "value" : "1" } },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "drupal_message" : { "message" : "Curricula [curricula:title], Activity: [title:value]" } }
      ]
    }
  }');
  $items['rules_add_activity_assigned_bylocation'] = entity_import('rules_config', '{ "rules_add_activity_assigned_bylocation" : {
      "LABEL" : "Use this Curriculum",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "curricula" : { "label" : "Curricula", "type" : "node" },
        "location" : { "label" : "Select a Location or Class", "type" : "taxonomy_term" }
      },
      "ACTION SET" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_curriculum_reference",
              "value" : [ "curricula" ],
              "limit" : "1000"
            },
            "PROVIDE" : { "entity_fetched" : { "activity_entity_fetched" : "Fetched activity entity" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT php_eval" : { "code" : "if(count(sm_utilities_validate_curriculum_assignment($location-\\u003Etid, $curricula-\\u003Enid)) \\u003E 0){\\r\\nreturn TRUE;\\r\\n}else{\\r\\nreturn FALSE;\\r\\n}" } },
              "DO" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "activity-entity-fetched" ] },
                    "ITEM" : { "list_item_activity" : "Current list item activity" },
                    "DO" : [
                      { "entity_create" : {
                          "USING" : {
                            "type" : "node",
                            "param_type" : "activity_assigned_bylocation",
                            "param_title" : "Activity Assigned by Location",
                            "param_author" : [ "site:current-user" ]
                          },
                          "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entity-created:field-activity-reference" ],
                          "value" : [ "list-item-activity" ]
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entity-created:field-taxonomy-tag" ],
                          "value" : [ "location" ]
                        }
                      },
                      { "data_set" : { "data" : [ "entity-created:field-available-date" ], "value" : "-1 day" } },
                      { "data_set" : { "data" : [ "entity-created:status" ], "value" : "1" } },
                      { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
                      { "drupal_message" : { "message" : "Curricula: [curricula:title], Activity: [list-item-activity:title],  Location: [location:name] at [available-date:value]" } }
                    ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "drupal_message" : {
                    "message" : "Curriculum cannot be assigned to this location because it is already assigned to the following locations:\\r\\n\\u003Cul\\u003E\\r\\n\\u003C?php $locations = sm_utilities_validate_curriculum_assignment($location-\\u003Etid, $curricula-\\u003Enid);\\r\\n$loc_count = count($locations);\\r\\nfor($x = 0; $x \\u003C $loc_count; $x++){\\r\\n$loc_term = taxonomy_term_load($locations[$x]);\\r\\necho \\u0022\\u003Cli\\u003E\\u0022.$loc_term-\\u003Ename.\\u0022\\u003C\\/li\\u003E\\u0022;\\r\\n}\\r\\n?\\u003E\\r\\n\\u003C\\/ul\\u003E",
                    "type" : "error"
                  }
                },
                { "redirect" : { "url" : "curriculum\\/all" } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_assign_activity_to_location'] = entity_import('rules_config', '{ "rules_assign_activity_to_location" : {
      "LABEL" : "assign activity to location",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_insert--activity" : { "bundle" : "activity" } },
      "IF" : [
        { "php_eval" : { "code" : "if($_GET[\\u0027field_curriculum_reference\\u0027] != null \\u0026\\u0026 $_GET[\\u0027destination\\u0027] != null \\u0026\\u0026 $_GET[\\u0027field_taxonomy_tag\\u0027] != null){\\r\\nreturn true;\\r\\n}" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "activity_assigned_bylocation",
              "param_title" : "Activity Assigned by Location",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-activity-reference" ],
            "value" : [ "node" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-available-date" ], "value" : "now" } },
        { "data_set" : { "data" : [ "entity-created:status" ], "value" : "1" } },
        { "php_eval" : { "code" : "if(is_numeric($_GET[\\u0027field_taxonomy_tag\\u0027])){\\r\\n$entity_created-\\u003Efield_taxonomy_tag[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $_GET[\\u0027field_taxonomy_tag\\u0027];\\r\\n}\\r\\n\\/\\/die(print_r($entity_created));" } },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } },
        { "drupal_message" : { "message" : "Added activity to location" } }
      ]
    }
  }');
  $items['rules_nightly_session_wipe'] = entity_import('rules_config', '{ "rules_nightly_session_wipe" : {
      "LABEL" : "NIghtly Session Wipe",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "cron" : [] },
      "IF" : [
        { "php_eval" : { "code" : "if(date(\\u0022G\\u0022) == 0){\\r\\nreturn true;\\r\\n}\\r\\nreturn false;" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$num_deleted = db_delete(\\u0027sessions\\u0027)\\r\\n  -\\u003Eexecute();\\r\\n\\r\\nwatchdog(\\u0027Sessions Cleared\\u0027, $num_deleted.\\u0022 sessions ended\\u0022);" } }
      ]
    }
  }');
  $items['rules_redirect_after_assign_to_location'] = entity_import('rules_config', '{ "rules_redirect_after_assign_to_location" : {
      "LABEL" : "Redirect After Assign to Location",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--activity_assigned_bylocation" : { "bundle" : "activity_assigned_bylocation" } },
      "DO" : [ { "redirect" : { "url" : "curriculum\\/all" } } ]
    }
  }');
  $items['rules_send_email_message'] = entity_import('rules_config', '{ "rules_send_email_message" : {
      "LABEL" : "Send E-mail message",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "subject" : { "label" : "Subject", "type" : "text" },
        "message" : { "label" : "Message", "type" : "text" }
      },
      "ACTION SET" : [
        { "mail" : {
            "to" : [ "user:mail" ],
            "subject" : "[subject:value]",
            "message" : "[message:value]",
            "from" : [ "site:current-user:mail" ],
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "E-mail \\u0022[subject:value]\\u0022 has been sent to \\u0022[user:name]\\u0022 \\u0022[user:mail]\\u0022" } }
      ]
    }
  }');
  $items['rules_set_curriculum_on_activity_clone'] = entity_import('rules_config', '{ "rules_set_curriculum_on_activity_clone" : {
      "LABEL" : "Set Curriculum on Activity Clone",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules", "clone" ],
      "ON" : { "clone_node" : [] },
      "DO" : [
        { "php_eval" : { "code" : "global $user;\\r\\n$field_curriculum_reference = variable_get($user-\\u003Euid.\\u0022_curric\\u0022);\\r\\n$cloned_node-\\u003Efield_curriculum_reference[\\u0027und\\u0027][0][\\u0027target_id\\u0027] = $field_curriculum_reference; \\r\\nvariable_del($field_curriculum_reference);\\r\\n" } },
        { "entity_save" : { "data" : [ "cloned-node" ], "immediate" : 1 } },
        { "drupal_message" : {
            "message" : "Activity has been cloned to your Curriculum",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  $items['rules_set_user_location'] = entity_import('rules_config', '{ "rules_set_user_location" : {
      "LABEL" : "Set User Location",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "vbo_user" : { "label" : "User", "type" : "user" },
        "vbo_location" : { "label" : "Select a Location or Class", "type" : "taxonomy_term" }
      },
      "ACTION SET" : [
        { "data_set" : {
            "data" : [ "vbo-user:field-taxonomy-tag" ],
            "value" : [ "vbo_location" ]
          }
        }
      ]
    }
  }');
  return $items;
}
