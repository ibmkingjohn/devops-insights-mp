<?php
/**
 * @file
 * mentormentee_matching.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mentormentee_matching_default_rules_configuration() {
  $items = array();
  $items['rules_create_match_manually'] = entity_import('rules_config', '{ "rules_create_match_manually" : {
      "LABEL" : "Create Match Manually",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "node_insert--matching" : { "bundle" : "matching" } },
      "DO" : [
        { "php_eval" : { "code" : "if (module_exists(\\u0027sm_users\\u0027)) {\\r\\n $mentee_array = $node-\\u003Efield_mentee_match[\\u0027und\\u0027];\\r\\nforeach($mentee_array as $mentee){\\r\\n  $mentee_uid = $mentee[\\u0027target_id\\u0027];\\r\\n  $mentor_uid =  $node-\\u003E field_mentor_match[\\u0027und\\u0027][0][\\u0027target_id\\u0027];\\r\\n  sm_users_assign_mentee_to_mentor($mentee_uid, $mentor_uid);\\r\\n}\\r\\n}" } },
        { "redirect" : { "url" : "node\\/add\\/matching" } },
        { "entity_delete" : { "data" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_make_mentor_match'] = entity_import('rules_config', '{ "rules_make_mentor_match" : {
      "LABEL" : "Make Mentor Match",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "user_relationships_rules" ],
      "USES VARIABLES" : {
        "matching_mentee" : { "label" : "Mentee User", "type" : "user" },
        "matching_mentor" : { "label" : "Matching User", "type" : "user" }
      },
      "ACTION SET" : [
        { "user_relationships_rules_action_create_relationship" : {
            "relationship_type" : "1",
            "requester" : [ "matching-mentee" ],
            "requestee" : [ "matching-mentor" ],
            "approve" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_mentee_mentor_match'] = entity_import('rules_config', '{ "rules_mentee_mentor_match" : {
      "LABEL" : "MenteeMentorMatch",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "USES VARIABLES" : {
        "match_mentees" : { "label" : "mentees", "type" : "list\\u003Cuser\\u003E" },
        "match_mentors" : { "label" : "mentors", "type" : "list\\u003Cuser\\u003E" }
      },
      "ACTION SET" : []
    }
  }');
  $items['rules_unmatch_users'] = entity_import('rules_config', '{ "rules_unmatch_users" : {
      "LABEL" : "Unmatch Users",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "mentee" : { "label" : "Mentee", "type" : "user" } },
      "ACTION SET" : [
        { "php_eval" : { "code" : "$num_deleted = db_delete(\\u0027user_relationships\\u0027)\\r\\n  -\\u003Econdition(\\u0027requester_id\\u0027, $mentee-\\u003Euid)\\r\\n  -\\u003Eexecute();" } }
      ]
    }
  }');
  return $items;
}
