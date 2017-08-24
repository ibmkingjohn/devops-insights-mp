<?php
/**
 * @file
 * node_curriculum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_curriculum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function node_curriculum_node_info() {
  $items = array(
    'curriculum' => array(
      'name' => t('Curriculum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'master_curriculum' => array(
      'name' => t('Master Curriculum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
