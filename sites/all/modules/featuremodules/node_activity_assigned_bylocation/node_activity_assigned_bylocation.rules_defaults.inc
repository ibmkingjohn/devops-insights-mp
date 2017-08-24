<?php
/**
 * @file
 * node_activity_assigned_bylocation.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function node_activity_assigned_bylocation_default_rules_configuration() {
  $items = array();
  $items['node_activity_assigned_bylocation_reset_assignment_status'] = entity_import('rules_config', '{ "node_activity_assigned_bylocation_reset_assignment_status" : {
      "LABEL" : "Reset Assignment Status",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "button_field", "php" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "activity_assignment" : "activity_assignment" } }
          }
        },
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_reset_status"
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_completion_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "entity:field-completion-status" ], "value" : "In Progress" } },
        { "drupal_message" : { "message" : "You have reset the status of\\r\\n\\u003C?php\\r\\nprint_r($entity-\\u003Efield_activity_entity_ref[\\u0027und\\u0027][\\u00270\\u0027][\\u0027entity\\u0027]-\\u003Etitle);\\r\\n?\\u003E" } },
        { "button_field_action_reload" : [] }
      ]
    }
  }');
  $items['rules_complete_assignment'] = entity_import('rules_config', '{ "rules_complete_assignment" : {
      "LABEL" : "Complete Assignment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "button_field", "php" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "activity_assignment" : "activity_assignment" } }
          }
        },
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_approve_assignment"
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_completion_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "entity:field-completion-status" ], "value" : "Complete" } },
        { "drupal_message" : { "message" : "You have completed\\r\\n\\u003C?php\\r\\nprint_r($entity-\\u003Efield_activity_entity_ref[\\u0027und\\u0027][\\u00270\\u0027][\\u0027entity\\u0027]-\\u003Etitle);\\r\\n?\\u003E" } },
        { "button_field_action_reload" : [] }
      ]
    }
  }');
  $items['rules_link_condition_start_activity_menteelink'] = entity_import('rules_config', '{ "rules_link_condition_start_activity_menteelink" : {
      "LABEL" : "Rules link: Start Activity Menteelink condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');
  $items['rules_link_condition_start_activity_mentorlink'] = entity_import('rules_config', '{ "rules_link_condition_start_activity_mentorlink" : {
      "LABEL" : "Rules link: Start Activity Mentorlink condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');
  $items['rules_link_set_start_activity_menteelink'] = entity_import('rules_config', '{ "rules_link_set_start_activity_menteelink" : {
      "LABEL" : "Rules link: Start Activity Menteelink rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : {
                "variable_usertext" : "Added variable user text",
                "variable_acttitle" : "Added variable title",
                "variable_actentityid" : "Added variable ID"
              },
              "entity_fetched" : { "entity_check_fetched" : "Fetched entity check" }
            },
            "IF" : [
              { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "activity_assigned_bylocation" : "activity_assigned_bylocation" } }
                }
              }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "\\u003C?php\\r\\n$parts = parse_url(token_replace(\\u0027[site:current-page:url]\\u0027, array(\\u0027node\\u0027 =\\u003E $site)));\\r\\n$path_parts= explode(\\u0027mentormentee\\/\\u0027, $parts[query]);\\t\\r\\n$usertext = $path_parts[1];\\r\\n$uservalue = user_load(($usertext));\\r\\nreturn $uservalue-\\u003Ename;\\r\\n?\\u003E"
                  },
                  "PROVIDE" : { "variable_added" : { "variable_usertext" : "Added variable user text" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "node:field-activity-reference:title" ] },
                  "PROVIDE" : { "variable_added" : { "variable_acttitle" : "Added variable title" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "node:field-activity-reference:nid" ] },
                  "PROVIDE" : { "variable_added" : { "variable_actentityid" : "Added variable ID" } }
                }
              },
              { "entity_query" : {
                  "USING" : {
                    "type" : "node",
                    "property" : "title",
                    "value" : "[variable-acttitle:value] by [site:current-user]",
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "entity_check_fetched" : "Fetched entity check" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is_empty" : { "data" : [ "entity-check-fetched" ] } },
                    "DO" : [
                      { "entity_create" : {
                          "USING" : {
                            "type" : "node",
                            "param_type" : "activity_assignment",
                            "param_title" : "[variable-acttitle:value] by [site:current-user]",
                            "param_author" : [ "site:current-user" ]
                          },
                          "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                        }
                      },
                      { "data_set" : {
                          "data" : [ "entity-created:field-activity-entity-ref" ],
                          "value" : [ "node:field-activity-reference" ]
                        }
                      },
                      { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
                      { "redirect" : { "url" : "[entity-created:url]?field_actassign_reference=[entity-created:nid]" } }
                    ]
                  },
                  { "ELSE" : [
                      { "redirect" : { "url" : "[entity-check-fetched:0:url]?field_actassign_reference=[entity-check-fetched:0:nid]" } }
                    ]
                  }
                ]
              }
            ],
            "LABEL" : "start activity mentee"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_start_activity_mentorlink'] = entity_import('rules_config', '{ "rules_link_set_start_activity_mentorlink" : {
      "LABEL" : "Rules link: Start Activity Mentorlink rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "rules_conditional" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : {
                "variable_usertext" : "Added variable user text",
                "variable_acttitle" : "Added variable title",
                "variable_actentityid" : "Added variable ID"
              },
              "entity_fetched" : { "entity_check_fetched" : "Fetched entity check" }
            },
            "IF" : [
              { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
              { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "activity_assigned_bylocation" : "activity_assigned_bylocation" } }
                }
              }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : {
                    "type" : "text",
                    "value" : "\\u003C?php\\r\\n$parts = parse_url(token_replace(\\u0027[site:current-page:url]\\u0027, array(\\u0027node\\u0027 =\\u003E $site)));\\r\\n$path_parts= explode(\\u0027mentormentee\\/\\u0027, $parts[query]);\\t\\r\\n$usertext = $path_parts[1];\\r\\n$uservalue = user_load(($usertext));\\r\\nreturn $uservalue-\\u003Ename;\\r\\n?\\u003E"
                  },
                  "PROVIDE" : { "variable_added" : { "variable_usertext" : "Added variable user text" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "text", "value" : [ "node:field-activity-reference:title" ] },
                  "PROVIDE" : { "variable_added" : { "variable_acttitle" : "Added variable title" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "integer", "value" : [ "node:field-activity-reference:nid" ] },
                  "PROVIDE" : { "variable_added" : { "variable_actentityid" : "Added variable ID" } }
                }
              },
              { "entity_query" : {
                  "USING" : {
                    "type" : "node",
                    "property" : "title",
                    "value" : "[variable-acttitle:value] by [variable-usertext:value]",
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "entity_check_fetched" : "Fetched entity check" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is_empty" : { "data" : [ "entity-check-fetched" ] } },
                    "DO" : [
                      { "redirect" : { "url" : "\\u003C?php\\r\\n$parts = parse_url(token_replace(\\u0027[site:current-page:url]\\u0027, array(\\u0027node\\u0027 =\\u003E $site)));\\r\\n$path_parts= explode(\\u0027mentormentee\\/\\u0027, $parts[query]);\\t\\r\\n$usertext = $path_parts[1];\\r\\n$menteeid =$usertext;\\r\\n\\/\\/ Create an Entity\\r\\nif(isset($menteeid)) {\\r\\n$mentee = user_load($menteeid);\\r\\n$entity1 = entity_create(\\u0027node\\u0027, array (\\u0027type\\u0027 =\\u003E \\u0027activity_assignment\\u0027));\\r\\n\\/\\/ Specify the author\\r\\n$entity1-\\u003Euid = $menteeid;\\r\\n\\/\\/ Create a Entity Wrapper of that new Entity\\r\\n$entity1 = entity_metadata_wrapper(\\u0027node\\u0027, $entity1);\\r\\n$entity1-\\u003Etitle = ($variable_acttitle . \\u0027 by \\u0027 . $mentee-\\u003Ename);\\r\\n$entity1-\\u003Efield_activity_entity_ref-\\u003Eset($variable_actentityid);\\r\\n$entity1-\\u003Esave();\\r\\n$nid = $entity1-\\u003Enid-\\u003Evalue();\\r\\necho (\\u0027node\\/\\u0027. $nid . \\u0027?field_actassign_reference=\\u0027 . $nid);\\r\\n    }\\r\\nelse {\\r\\n  drupal_set_message(\\u0027Activity Assignment creation failed. Please refresh your browser and click start Activity again.\\u0027);\\r\\necho(\\u0027\\/\\u0027);\\r\\n}\\r\\n?\\u003E" } }
                    ]
                  },
                  { "ELSE" : [
                      { "redirect" : { "url" : "[entity-check-fetched:0:url]?field_actassign_reference=[entity-check-fetched:0:nid]" } }
                    ]
                  }
                ]
              }
            ],
            "LABEL" : "start activity mentor"
          }
        }
      ]
    }
  }');
  $items['rules_reroute_actassign_response'] = entity_import('rules_config', '{ "rules_reroute_actassign_response" : {
      "LABEL" : "Reroute Activity Assignment response",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--activity_assignment_response" : { "bundle" : "activity_assignment_response" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_actassign_reference" } }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:current-page:url]" } } ]
    }
  }');
  $items['rules_start_activity_menteerule'] = entity_import('rules_config', '{ "rules_start_activity_menteerule" : {
      "LABEL" : "Start Activity Mentee Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "button_field", "rules_conditional" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "activity_assigned_bylocation" : "activity_assigned_bylocation" } }
          }
        },
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_start_activity"
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : [ "entity:field-activity-reference:title" ] },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "title",
              "value" : "[variable-added:value] by [site:current-user]",
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "entity_check_fetched" : "Fetched entity check" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "entity-check-fetched" ] } },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "node",
                      "param_type" : "activity_assignment",
                      "param_title" : "[variable-added:value] by [site:current-user]",
                      "param_author" : [ "site:current-user" ]
                    },
                    "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
                  }
                },
                { "data_set" : {
                    "data" : [ "entity-created:field-activity-entity-ref" ],
                    "value" : [ "entity:field-activity-reference" ]
                  }
                },
                { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
                { "redirect" : { "url" : "[entity-created:url]?field_actassign_reference=[entity-created:nid]" } }
              ]
            },
            { "ELSE" : [
                { "redirect" : { "url" : "[entity-check-fetched:0:url]?field_actassign_reference=[entity-check-fetched:0:nid]" } }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
