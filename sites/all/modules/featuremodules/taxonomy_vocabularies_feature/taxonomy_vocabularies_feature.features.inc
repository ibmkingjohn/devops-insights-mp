<?php
/**
 * @file
 * taxonomy_vocabularies_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomy_vocabularies_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
