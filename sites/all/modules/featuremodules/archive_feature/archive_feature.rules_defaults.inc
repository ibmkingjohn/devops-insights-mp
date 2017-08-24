<?php
/**
 * @file
 * archive_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function archive_feature_default_rules_configuration() {
  $items = array();
  $items['rules_archive_content'] = entity_import('rules_config', '{ "rules_archive_content" : {
      "LABEL" : "Archive Content",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "ACTION SET" : []
    }
  }');
  return $items;
}
