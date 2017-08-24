<?php
/**
 * @file
 * flaging_and_profanity_views.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function flaging_and_profanity_views_default_rules_configuration() {
  $items = array();
  $items['rules_notify_admin_of_flagged_content'] = entity_import('rules_config', '{ "rules_notify_admin_of_flagged_content" : {
      "LABEL" : "Notify Admin of Flagged Content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php", "flag" ],
      "ON" : { "flag_flagged_flag_reply_inappropriate" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The [flagged-node:content-type] has been flagged. Your Administrator has been notified." } },
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_of_type" : {
                  "node" : [ "flagged-node" ],
                  "type" : { "value" : { "activity_assignment_response" : "activity_assignment_response" } }
                }
              },
              "DO" : [
                { "mail" : {
                    "to" : "\\u003C?php\\r\\n$pm_recipients =  sm_utilities_get_closest_admins();\\r\\nprint_r($pm_recipients[0]-\\u003Email);\\r\\n?\\u003E",
                    "subject" : "Content flagged by [flagged-node:flag-flag-reply-inappropriate-user]",
                    "message" : "Content flagged by [flagged-node:flag-flag-reply-inappropriate-user].  \\r\\n\\u003C?php echo(\\u0027View all flagged content at [site:url]reports\\/flagged-activity-responses\\u0027);?\\u003E",
                    "from" : "mentoring@mentorplace.net",
                    "language" : [ "" ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "mail" : {
                    "to" : "\\u003C?php\\r\\n$pm_recipients =  sm_utilities_get_closest_admins();\\r\\nprint_r($pm_recipients[0]-\\u003Email);\\r\\n?\\u003E",
                    "subject" : "Content flagged by [flagged-node:flag-flag-reply-inappropriate-user]",
                    "message" : "Content flagged by [flagged-node:flag-flag-reply-inappropriate-user].  \\r\\n\\u003C?php echo(\\u0027View all flagged content at [site:url]reports\\/flagged-chat\\u0027);?\\u003E",
                    "from" : "mentoring@mentorplace.net",
                    "language" : [ "" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
