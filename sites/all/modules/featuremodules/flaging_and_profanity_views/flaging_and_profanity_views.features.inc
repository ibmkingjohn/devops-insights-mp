<?php
/**
 * @file
 * flaging_and_profanity_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function flaging_and_profanity_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function flaging_and_profanity_views_flag_default_flags() {
  $flags = array();
  // Exported flag: "Flag this content reply as inappropriate".
  $flags['flag_reply_inappropriate'] = array(
    'entity_type' => 'node',
    'title' => 'Flag this content reply as inappropriate',
    'global' => 0,
    'types' => array(
      0 => 'activity_assignment_response',
      1 => 'lets_chat',
      2 => 'lets_chat_reply',
    ),
    'flag_short' => 'Flag as Inappropriate',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Republished by Admin',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'drupalgap' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to flag this content? The content will be removed from view and sent to an admininstrator.',
    'unflag_confirmation' => 'Are you sure you want to unflag this content?',
    'module' => 'flaging_and_profanity_views',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
