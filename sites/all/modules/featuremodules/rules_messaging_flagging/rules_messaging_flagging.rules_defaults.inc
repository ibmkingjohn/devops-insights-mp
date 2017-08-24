<?php
/**
 * @file
 * rules_messaging_flagging.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_messaging_flagging_default_rules_configuration() {
  $items = array();
  $items['rules_assign_preregistration'] = entity_import('rules_config', '{ "rules_assign_preregistration" : {
      "LABEL" : "Flag User as Preregistered",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : { "user_presave" : [] },
      "IF" : [
        { "php_eval" : { "code" : "$view_result1= views_get_view_result(\\u0027admin_subsite_settings\\u0027);\\r\\nforeach($view_result1 as $item){\\r\\n        $node = node_load($item-\\u003Enid);\\r\\n}\\r\\n$in_session_value1 = $node-\\u003Efield_school_in_session[\\u0027und\\u0027][0][\\u0027value\\u0027];\\r\\n\\r\\n\\r\\nif ( $in_session_value1 == \\u00270\\u0027) { return TRUE; } else { return FALSE; } " } },
        { "AND" : [
            { "data_is" : { "data" : [ "account:field-preregistered" ], "value" : "-1" } },
            { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
          ]
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:field-preregistered" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_display_additional_registration_message_to_mentor'] = entity_import('rules_config', '{ "rules_display_additional_registration_message_to_mentor" : {
      "LABEL" : "Display additional registration message to mentor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user admin" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for completing the first step to register as a mentor. Once we receive your background check results, you will receive an email containing your results and detailed next steps.  Typically, results take one week to complete.  Thank you for registering to become a mentor!" } }
      ]
    }
  }');
  $items['rules_let_s_chat_notify'] = entity_import('rules_config', '{ "rules_let_s_chat_notify" : {
      "LABEL" : "Let\\u0027s Chat Notify",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        },
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "lets_chat" : "lets_chat" } }
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "node:status" ], "value" : "1" } },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "5" : "5" } } } },
                      "DO" : [
                        { "mail" : {
                            "to" : "\\u003C?php $recipient = user_load($node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); \\r\\necho $recipient-\\u003Email;\\r\\n?\\u003E",
                            "subject" : "A  MentorPlace \\u0022Let\\u0027s Chat\\u0022 message has been added by your Mentor [node:author]",
                            "message" : "\\u003C?php \\/* $recipient = user_load($node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); ?\\u003E\\r\\nHi \\u003C?php echo $recipient-\\u003Ename; *\\/ ?\\u003E,\\r\\n\\r\\nYour Mentor [node:author] has sent you a Let\\u0027s Chat message. Click here to view and continue the conversation with your Mentor.\\r\\n\\r\\n[node:url]?field_letschat_reference=[node:nid]\\r\\n\\r\\nThis is an automatic reminder from the site MentorPlace. \\r\\n",
                            "language" : [ "" ]
                          }
                        }
                      ]
                    },
                    { "ELSE" : [
                        { "mail" : {
                            "to" : "\\u003C?php $matches = user_relationships_load(array(\\u0027user\\u0027 =\\u003E $node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]));\\r\\nif($matches){\\r\\n  foreach($matches as $match){ \\r\\n    $matched_user = user_load($match-\\u003Erequestee_id);\\r\\n    echo $matched_user-\\u003Email.\\u0022,\\u0022;\\r\\n  }\\r\\n}\\r\\n ?\\u003E",
                            "subject" : " A  MentorPlace \\u0022Let\\u0027s Chat\\u0022 message has been added by your Mentee [node:author]",
                            "message" : "\\u003C?php \\/* $recipient = user_load($node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); ?\\u003E\\r\\nHi \\u003C?php echo $recipient-\\u003Ename; *\\/ ?\\u003E,\\r\\n\\r\\nYour Mentee [node:author] has sent you a Let\\u0027s Chat message. Click here to view and continue the conversation with your Mentee.\\r\\n\\r\\n[node:url]?field_letschat_reference=[node:nid]\\r\\n\\r\\nThis is an automatic reminder from the site MentorPlace. \\r\\n",
                            "from" : [ "" ]
                          }
                        }
                      ]
                    }
                  ]
                }
              ]
            },
            { "ELSE" : [
                { "drupal_message" : { "message" : "Your message is currently in \\u0022draft\\u0022 status, and you can continue to work on your message.  When you are ready to send your message, please click \\u0022Send\\u0022 button." } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_let_s_chat_reply_notify'] = entity_import('rules_config', '{ "rules_let_s_chat_reply_notify" : {
      "LABEL" : "Let\\u0027s Chat Reply Notify",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "php" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        },
        { "entity_is_of_type" : { "entity" : [ "node" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "lets_chat_reply" : "lets_chat_reply" } }
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "node:field-letschat-reference:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "letschat_reference" : "Lets Chat Reference" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "5" : "5" } } } },
              "DO" : [
                { "mail" : {
                    "to" : "\\u003C?php $recipient = user_load($letschat_reference-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); \\r\\necho $recipient-\\u003Email;\\r\\n?\\u003E",
                    "subject" : "A  MentorPlace \\u0022Let\\u0027s Chat\\u0022 message has been added by your Mentor [node:author]",
                    "message" : "\\u003C?php \\/* $recipient = user_load($node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); ?\\u003E\\r\\nHi \\u003C?php echo $recipient-\\u003Ename; *\\/ ?\\u003E,\\r\\n\\r\\nYour Mentor [node:author] has sent you a Let\\u0027s Chat message. Click here to view and continue the conversation with your Mentor.\\r\\n\\r\\n[node:field-letschat-reference:url]?field_letschat_reference=[node:field-letschat-reference:nid]\\r\\n\\r\\nThis is an automatic reminder from the site MentorPlace. \\r\\n",
                    "language" : [ "" ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "mail" : {
                    "to" : "\\u003C?php $matches = user_relationships_load(array(\\u0027user\\u0027 =\\u003E $letschat_reference-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]));\\r\\nif($matches){\\r\\n  foreach($matches as $match){ \\r\\n    $matched_user = user_load($match-\\u003Erequestee_id);\\r\\n    echo $matched_user-\\u003Email.\\u0022,\\u0022;\\r\\n  }\\r\\n}\\r\\n ?\\u003E",
                    "subject" : "A  MentorPlace \\u0022Let\\u0027s Chat\\u0022 message has been added by your Mentee [node:author]",
                    "message" : "\\u003C?php \\/* $recipient = user_load($node-\\u003Efield_menteeauth[\\u0027und\\u0027][0][\\u0027value\\u0027]); ?\\u003E\\r\\nHi \\u003C?php echo $recipient-\\u003Ename; *\\/ ?\\u003E,\\r\\n\\r\\nYour Mentee [node:author] has sent you a Let\\u0027s Chat message. Click here to view and continue the conversation with your Mentee.\\r\\n\\r\\n[node:field-letschat-reference:url]?field_letschat_reference=[node:field-letschat-reference:nid]\\r\\n\\r\\nThis is an automatic reminder from the site MentorPlace. \\r\\n",
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
  $items['rules_mentor_request_approval_pending_message'] = entity_import('rules_config', '{ "rules_mentor_request_approval_pending_message" : {
      "LABEL" : "Mentor request approval pending message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "mentor_request_explanation" : "mentor_request_explanation" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Your mentor request is being reviewed by your group administrator and you will see the mentor on your list of mentors within a week if the request is approved.\\r\\n" } }
      ]
    }
  }');
  $items['rules_new_user_registered'] = entity_import('rules_config', '{ "rules_new_user_registered" : {
      "LABEL" : "Send_Admin_Email_Notification_New_user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user admin" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "You have registered for location [account:field-taxonomy-tag]" } }
      ]
    }
  }');
  $items['rules_notify_mentee_on_activity_reply'] = entity_import('rules_config', '{ "rules_notify_mentee_on_activity_reply" : {
      "LABEL" : "Notify Mentee on Activity Reply",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--activity_assignment_response" : { "bundle" : "activity_assignment_response" },
        "node_update--activity_assignment_response" : { "bundle" : "activity_assignment_response" }
      },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "5" : "5" } } } },
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-actassign-reference:author:mail]",
            "subject" : "A MentorPlace activity response has been added by your Mentor [node:author].",
            "message" : "It\\u0027s your turn!  Your Mentor  [node:author] has made a post to the activities and needs your feedback. Click here to view and respond to your Mentor.\\r\\n\\r\\n[node:field-actassign-reference:url]?field_actassign_reference=[node:field-actassign-reference:nid]\\r\\n\\r\\n\\u003Cdiv class=\\u0022auto-gen\\u0022\\u003EThis is an automatic reminder from the MentorPlace site.\\u003C\\/div\\u003E",
            "from" : "mentoring@mentorplace.net",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_mentor_on_activity_reply'] = entity_import('rules_config', '{ "rules_notify_mentor_on_activity_reply" : {
      "LABEL" : "Notify Mentor on Activity Reply",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : {
        "node_insert--activity_assignment_response" : { "bundle" : "activity_assignment_response" },
        "node_update--activity_assignment_response" : { "bundle" : "activity_assignment_response" }
      },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        },
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "6" : "6" } } } },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "node:author:uid" ] },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : "\\u003C?php\\r\\n$matches = user_relationships_load(array(\\u0027user\\u0027 =\\u003E$variable_added));\\r\\nif($matches){\\r\\n  foreach($matches as $match){ \\r\\n    $matched_user = user_load($match-\\u003Erequestee_id);\\r\\n    echo $matched_user-\\u003Email.\\u0022,\\u0022;\\r\\n  }\\r\\n}\\r\\n ?\\u003E",
            "subject" : "A MentorPlace activity response has been added by your Mentee [node:author].",
            "message" : "It\\u0027s your turn!  Your Mentee  [node:author] has made a post to the activities and needs your feedback. Click here to view and respond to your Mentee.\\r\\n\\r\\n[node:field-actassign-reference:url]?field_actassign_reference=[node:field-actassign-reference:nid]\\r\\n\\r\\n\\u003Cdiv class=\\u0022auto-gen\\u0022\\u003EThis is an automatic reminder from the MentorPlace site.\\u003C\\/div\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_reward_notify'] = entity_import('rules_config', '{ "rules_reward_notify" : {
      "LABEL" : "Reward Notify",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--endorsement" : { "bundle" : "endorsement" } },
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-endorsee-entity:mail" ],
            "subject" : "New award from [node:author] on MentorPlace",
            "message" : "Congratulations, you have just received an award from [node:author]. \\u003Cbr \\/\\u003E\\r\\nBadge: [node:field-endorsement-badge] \\u003Cbr \\/\\u003E\\r\\nReward message: [node:field-endorsement-message]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
