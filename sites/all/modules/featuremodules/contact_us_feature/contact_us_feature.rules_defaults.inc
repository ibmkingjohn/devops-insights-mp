<?php
/**
 * @file
 * contact_us_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function contact_us_feature_default_rules_configuration() {
  $items = array();
  $items['rules_complete_contact_us'] = entity_import('rules_config', '{ "rules_complete_contact_us" : {
      "LABEL" : "Complete Contact Us",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "button_field" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "custom_contact_us" : "custom_contact_us" } }
          }
        },
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_complete_task"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "entity:field-complete-tasklist" ], "value" : "2" } },
        { "button_field_action_reload" : [] }
      ]
    }
  }');
  $items['rules_contact_us_group_admin'] = entity_import('rules_config', '{ "rules_contact_us_group_admin" : {
      "LABEL" : "Contact Us Group Admin",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "custom_contact_us" : "custom_contact_us" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "node:author:uid" ], "value" : "0" } },
              "DO" : [
                { "mail" : {
                    "to" : "jwking@us.ibm.com,bjbachel@us.ibm.com,gracesuh@us.ibm.com",
                    "subject" : "[site:name] Contact Us:  [node:field-contact-us-type:name]",
                    "message" : "[node:field-contact-us-summary:value]\\r\\n\\r\\nLink to message:\\r\\n[node:url]",
                    "from" : [ "node:field-contactus-email" ],
                    "language" : [ "" ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "mail" : {
                    "to" : "bjbachel@us.ibm.com, jwking@us.ibm.com, gracesuh@us.ibm.com\\r\\n\\r\\n\\u003C?php\\r\\n\\/** old ****  \\r\\nglobal $user;\\r\\n$user_data = user_load($user-\\u003Euid);\\r\\n$filter_string = sm_utilities_build_userlocation_filter_string($user_data);\\r\\n$admins =  sm_users_get_subsite_admins($filter_string);\\r\\nforeach($admins as $admin){\\r\\n       $recipients[] = $admin-\\u003Email;\\r\\n}\\r\\necho(implode(\\u0022,\\u0022, $recipients));\\r\\n*\\/\\r\\n?\\u003E",
                    "subject" : "[site:name] Contact Us:  [node:field-contact-us-type:name]",
                    "message" : "[node:field-contact-us-summary:value]\\r\\n\\r\\nLink to message:\\r\\n[node:url]",
                    "from" : [ "node:author:mail" ],
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "redirect" : { "url" : "[site:url]" } }
      ]
    }
  }');
  $items['rules_contact_us_reply'] = entity_import('rules_config', '{ "rules_contact_us_reply" : {
      "LABEL" : "Contact Us Reply",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "ON" : { "node_insert--contact_us_reply" : { "bundle" : "contact_us_reply" } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:field-contact-us:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "entity-fetched:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "fetched_author" : "Fetched author" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "fetched-author:uid" ], "value" : "0" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "node_is_of_type" : {
                          "node" : [ "entity-fetched" ],
                          "type" : { "value" : { "custom_contact_us" : "custom_contact_us" } }
                        }
                      },
                      "DO" : [
                        { "mail" : {
                            "to" : [ "entity-fetched:field-contactus-email" ],
                            "subject" : "RE: [entity-fetched:field-contact-us-subject] ",
                            "message" : [ "node:body:value" ],
                            "from" : "\\u003C?php \\r\\nglobal $user;\\r\\necho $user-\\u003Email; \\r\\n?\\u003E",
                            "language" : [ "" ]
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            { "ELSE" : [
                { "mail" : {
                    "to" : [ "fetched-author:mail" ],
                    "subject" : "RE: [entity-fetched:field-contact-us-subject] ",
                    "message" : [ "node:body:value" ],
                    "from" : "\\u003C?php \\r\\nglobal $user;\\r\\necho $user-\\u003Email; \\r\\n?\\u003E",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        },
        { "php_eval" : { "code" : "\\u003C?php\\r\\n\\/* set Contact Us status to \\u0022responded\\u0022 *\\/\\r\\n$entity_fetched-\\u003Efield_complete_tasklist[\\u0027und\\u0027][0][\\u0027value\\u0027] = 1;\\r\\nnode_save($entity_fetched);\\r\\n?\\u003E" } },
        { "redirect" : { "url" : "users\\/mgrcontactus" } }
      ]
    }
  }');
  $items['rules_contact_us_reply_button'] = entity_import('rules_config', '{ "rules_contact_us_reply_button" : {
      "LABEL" : "Contact us reply button",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "button_field", "php" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "entity" ],
            "type" : { "value" : { "custom_contact_us" : "custom_contact_us" } }
          }
        },
        { "button_field_compare_button" : { "clicked_field" : [ "field" ], "comparison_field_name" : "field_reply" } }
      ],
      "DO" : [
        { "redirect" : { "url" : "node\\/add\\/contact-us-reply?field_contact_us=\\u003C?php echo $entity-\\u003Enid; ?\\u003E" } }
      ]
    }
  }');
  return $items;
}
