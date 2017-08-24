<?php
/**
 * @file
 * node_activity_assigned_bylocation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_activity_assigned_bylocation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function node_activity_assigned_bylocation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function node_activity_assigned_bylocation_node_info() {
  $items = array(
    'act_assignment_resource' => array(
      'name' => t('Activity Assignment Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'activity_assigned_bylocation' => array(
      'name' => t('Activity Assigned by Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'activity_assignment' => array(
      'name' => t('Activity Assignment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'activity_assignment_response' => array(
      'name' => t('Activity Assignment Response'),
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

/**
 * Implements hook_default_rules_link().
 */
function node_activity_assigned_bylocation_default_rules_link() {
  $items = array();
  $items['start_activity_menteelink'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Activity",
      "link_type" : "token",
      "bundles" : { "activity_assigned_bylocation" : "activity_assigned_bylocation" },
      "entity_link" : 0,
      "view_mode" : { "full" : "full" }
    },
    "name" : "start_activity_menteelink",
    "label" : "Start Activity Menteelink",
    "path" : "start_activity_menteelink",
    "entity_type" : "node"
  }');
  $items['start_activity_mentorlink'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Start Activity",
      "link_type" : "token",
      "bundles" : { "activity_assigned_bylocation" : "activity_assigned_bylocation" },
      "entity_link" : 0,
      "view_mode" : { "full" : "full" }
    },
    "name" : "start_activity_mentorlink",
    "label" : "Start Activity Mentorlink",
    "path" : "start_activity_mentorlink",
    "entity_type" : "node"
  }');
  return $items;
}
