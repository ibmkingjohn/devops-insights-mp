<?php
/**
 * @file
 * node_endorsement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_endorsement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function node_endorsement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function node_endorsement_node_info() {
  $items = array(
    'endorsement' => array(
      'name' => t('Send Reward'),
      'base' => 'node_content',
      'description' => t('User endorsement'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
