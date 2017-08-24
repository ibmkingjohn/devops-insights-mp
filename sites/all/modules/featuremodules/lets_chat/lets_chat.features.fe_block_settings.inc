<?php
/**
 * @file
 * lets_chat.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lets_chat_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['formblock-lets_chat_reply'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'lets_chat_reply',
    'module' => 'formblock',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smarter',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
