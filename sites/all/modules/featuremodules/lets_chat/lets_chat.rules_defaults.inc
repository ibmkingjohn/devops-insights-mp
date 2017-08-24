<?php
/**
 * @file
 * lets_chat.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lets_chat_default_rules_configuration() {
  $items = array();
  $items['node_activity_assigned_bylocation_reroute_lets_chat_reply'] = entity_import('rules_config', '{ "node_activity_assigned_bylocation_reroute_lets_chat_reply" : {
      "LABEL" : "Reroute Lets Chat Reply",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--lets_chat_reply" : { "bundle" : "lets_chat_reply" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_letschat_reference" } }
      ],
      "DO" : [ { "redirect" : { "url" : "[site:current-page:url]" } } ]
    }
  }');
  $items['rules_update_lets_chat_viewed_time_flag'] = entity_import('rules_config', '{ "rules_update_lets_chat_viewed_time_flag" : {
      "LABEL" : "Update Lets Chat Viewed Time Flag",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "node_view--lets_chat" : { "bundle" : "lets_chat" } },
      "DO" : [
        { "flag_unflagnode" : {
            "flag" : "flag_last_viewed_lets_chat",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : "0"
          }
        },
        { "flag_flagnode" : {
            "flag" : "flag_last_viewed_lets_chat",
            "node" : [ "node" ],
            "flagging_user" : [ "site:current-user" ],
            "permission_check" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
