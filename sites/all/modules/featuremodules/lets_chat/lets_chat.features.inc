<?php
/**
 * @file
 * lets_chat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lets_chat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lets_chat_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function lets_chat_flag_default_flags() {
  $flags = array();
  // Exported flag: "Flag Last Viewed Lets Chat".
  $flags['flag_last_viewed_lets_chat'] = array(
    'entity_type' => 'node',
    'title' => 'Flag Last Viewed Lets Chat',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Flag this item',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'drupalgap' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'lets_chat',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function lets_chat_node_info() {
  $items = array(
    'lets_chat' => array(
      'name' => t('Lets Chat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'lets_chat_reply' => array(
      'name' => t('Lets Chat Reply'),
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
