<?php
/**
 * @file
 * views_view_user_reports_menteementormatches.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function views_view_user_reports_menteementormatches_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function views_view_user_reports_menteementormatches_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function views_view_user_reports_menteementormatches_node_info() {
  $items = array(
    'mentor_request_explanation' => array(
      'name' => t('Mentor Request Explanation'),
      'base' => 'node_content',
      'description' => t('Mentor Request Explanation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mentor_request_rejection' => array(
      'name' => t('Mentor Request Rejection'),
      'base' => 'node_content',
      'description' => t('Mentor Request Rejection'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter mentor request rejection explanation here'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
