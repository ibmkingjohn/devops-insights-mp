<?php
/**
 * @file
 * admin_user_views.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function admin_user_views_default_rules_configuration() {
  $items = array();
  $items['rules_update_user_role'] = entity_import('rules_config', '{ "rules_update_user_role" : {
      "LABEL" : "Update User Role",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "8" : "8" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "23" } },
              "DO" : [
                { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "4" : "4" } } } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "24" } },
              "DO" : [
                { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "6" : "6" } } } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "25" } },
              "DO" : [
                { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "5" : "5" } } } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "22" } },
              "DO" : [
                { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "7" : "7" } } } }
              ]
            },
            {
              "ELSE IF" : { "data_is" : { "data" : [ "account:field-user-acct-type" ], "value" : "3948" } },
              "DO" : [
                { "data_set" : { "data" : [ "account:roles" ], "value" : { "value" : { "8" : "8" } } } }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
