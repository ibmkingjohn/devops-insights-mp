<?php
/**
 * @file
 * all_blocks_exp_feature.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function all_blocks_exp_feature_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 10,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -40,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -38,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -56,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -55,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -41,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 163,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 172,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 173,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 177,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 184,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 185,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 187,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 188,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 189,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 190,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 192,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 193,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 194,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 195,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 197,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 198,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 199,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 200,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 202,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 203,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 204,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 205,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 212,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 234,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 235,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 236,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 237,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 238,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 239,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 240,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 241,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 242,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 243,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 244,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 245,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 246,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 247,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 248,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 249,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 250,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 251,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 252,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 253,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 254,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 255,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 256,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 257,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 258,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 259,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 260,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 261,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 262,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 263,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 264,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 268,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 269,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 270,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 271,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 272,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 273,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 277,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 278,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 279,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 286,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 287,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 288,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 292,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 293,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 294,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 298,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 299,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 300,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 301,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 302,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 303,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 304,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 305,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 306,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 307,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 308,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 309,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 319,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 320,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 321,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 328,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 329,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 330,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 331,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 332,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 333,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 334,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 335,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 336,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -44,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 337,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 338,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 339,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 340,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 341,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 342,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 343,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 344,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 345,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 346,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 347,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 348,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 24,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 349,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 350,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 387,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 388,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 407,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 408,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 409,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 410,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 411,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 412,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 413,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 414,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 418,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 421,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 422,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 423,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 424,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 426,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -54,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 427,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 428,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 429,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 430,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 431,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 432,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 433,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 434,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 435,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 436,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 437,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 438,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 439,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 440,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -53,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 441,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 443,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 444,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -55,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 445,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -54,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 447,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 448,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 449,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 450,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -50,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 451,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 452,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 453,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 24,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 474,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 475,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 477,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 478,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 481,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 485,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 486,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -43,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 487,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -30,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 488,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -27,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 489,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 490,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 491,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 492,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 495,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 496,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 497,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 498,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 499,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 500,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 501,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 502,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 503,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 504,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 505,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 506,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 507,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 508,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 509,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 510,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 511,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 512,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 513,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 514,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 515,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 516,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 517,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 518,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 519,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 520,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -28,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 521,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 522,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 523,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 524,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 525,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 526,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 527,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 528,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 529,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 530,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 531,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 532,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 533,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 534,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 535,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 536,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 537,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 538,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 539,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => -51,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 540,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 543,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 544,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 545,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 546,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 548,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -54,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 549,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 550,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 551,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 552,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 553,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 554,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 555,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 556,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 557,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 558,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 559,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 560,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 561,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 562,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -53,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 563,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 565,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 566,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -55,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 567,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -54,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 569,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 570,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 571,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 572,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -50,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 573,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 574,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 575,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 24,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 596,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 597,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 599,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 600,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 603,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 607,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 608,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -43,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 609,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -30,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 610,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -27,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 611,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 612,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 613,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 614,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 617,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 618,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 619,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 620,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 621,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 622,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 623,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 624,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 625,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 626,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 627,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 628,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 629,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 630,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 631,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 632,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 633,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 634,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 635,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 636,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 637,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 638,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 639,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 640,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 641,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 642,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -28,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 643,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 644,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 645,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 646,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 647,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 648,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 649,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 650,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 651,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 652,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 653,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 654,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 655,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 656,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 657,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 658,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 659,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 660,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 661,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => -51,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 662,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 665,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'k12',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 666,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'k12',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 667,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'k12',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 668,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 670,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -54,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 671,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 672,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 673,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 674,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 675,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'k12',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 676,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 677,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 678,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 679,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 680,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 681,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 682,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 683,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 684,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -53,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 685,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 687,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 688,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -55,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 689,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -54,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 691,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 692,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 693,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 694,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -50,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 695,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 696,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 697,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'k12',
  'status' => 1,
  'weight' => 24,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 718,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 719,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 721,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 722,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 725,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 729,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 730,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -43,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 731,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -30,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 732,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -27,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 733,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 734,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 735,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 736,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 739,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 740,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 741,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 742,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 743,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 744,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 745,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 746,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 747,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 748,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 749,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 750,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 751,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 752,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 753,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 754,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 755,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 756,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 757,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 758,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 759,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 760,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 761,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 762,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 763,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 764,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -28,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 765,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 766,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 767,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 768,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 769,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 770,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 771,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 772,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 773,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 774,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 775,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 776,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'k12',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 777,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 778,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 779,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'k12',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 780,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 781,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 782,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 783,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'k12',
  'status' => 0,
  'weight' => -51,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 784,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 787,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 788,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 789,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 790,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 792,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -54,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 793,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 794,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 795,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 796,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 797,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 798,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 799,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 800,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 801,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 802,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 803,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 804,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 805,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 806,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -53,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 807,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 809,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 810,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -55,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 811,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -54,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 813,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 814,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 815,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 816,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -50,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 817,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 818,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 819,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 24,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 840,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 841,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 843,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 844,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 847,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 851,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 852,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -43,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 853,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -30,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 854,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -27,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 855,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 856,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 857,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 858,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 861,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 862,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 863,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 864,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 865,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 866,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 867,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 868,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 869,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 870,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 871,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 872,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 873,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 874,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 875,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 876,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 877,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 878,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 879,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 880,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 881,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 882,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 883,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 884,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 885,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 886,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -28,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 887,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 888,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 889,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 890,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 891,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 892,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 893,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 894,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 895,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 896,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 897,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 898,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 899,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 900,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 901,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 902,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 903,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 904,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 905,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => -51,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 906,
  'module' => 'apachesolr_search',
  'delta' => 'sort',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 909,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'ying',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 910,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'ying',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Relationship Limit Reached',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 911,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'ying',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'custom-dashboard',
  'title' => 'My Messages',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 912,
  'module' => 'blog',
  'delta' => 'recent',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 914,
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -54,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 915,
  'module' => 'custom_block',
  'delta' => 'ContactAllGroupAdmin',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -42,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'messages/all
messages/list
messages/inbox
messages/sent
messages',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 916,
  'module' => 'custom_block',
  'delta' => 'ContactAllMentor',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 917,
  'module' => 'facetapi',
  'delta' => '',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 918,
  'module' => 'facetapi',
  'delta' => '6VXR0dDjJeEch7WNvP6102SOcUGh1uhe',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -33,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 919,
  'module' => 'facetapi',
  'delta' => '8o8kdtP8CKjahDIu1Wy5LGxnDHg3ZYnT',
  'theme' => 'ying',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'apachesolruser',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 920,
  'module' => 'facetapi',
  'delta' => 'eGE2yQ1f9Ijy2QS0W8d6RlE4P8HFCx59',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -32,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 921,
  'module' => 'facetapi',
  'delta' => 'F6SXBEh3af14RUhIwl29vE1KH0OQdVB1',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -33,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 922,
  'module' => 'facetapi',
  'delta' => 'lyyyTQZmDqHX6b30Dx4mzfY6gEOR5Y0j',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -35,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 923,
  'module' => 'facetapi',
  'delta' => 'NjamMRlUSiv6J1uYtpZ6KmDlsOuSofFX',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -34,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 924,
  'module' => 'facetapi',
  'delta' => 'OYTU34DK8EzwX9fmV0yobXG6gQTDzmgp',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -30,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 925,
  'module' => 'facetapi',
  'delta' => 's8VYFeeyd38s600sqNjFD9dmfgbXe2R2',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -31,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users
gamentors
gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 926,
  'module' => 'facetapi',
  'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 927,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -36,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 928,
  'module' => 'forum',
  'delta' => 'active',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -53,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 929,
  'module' => 'forum',
  'delta' => 'new',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 931,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 932,
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -55,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 933,
  'module' => 'menu',
  'delta' => 'menu-content-management',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -54,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 935,
  'module' => 'menu',
  'delta' => 'menu-forums',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forums/*
forum',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 936,
  'module' => 'menu',
  'delta' => 'menu-group-admin',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 937,
  'module' => 'menu',
  'delta' => 'menu-menu-registration',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 938,
  'module' => 'menu',
  'delta' => 'menu-reports',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -50,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 939,
  'module' => 'menu',
  'delta' => 'menu-site-admin',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 940,
  'module' => 'menu',
  'delta' => 'menu-taxonomy-management',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 941,
  'module' => 'menu',
  'delta' => 'menu-users',
  'theme' => 'ying',
  'status' => 1,
  'weight' => 24,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 962,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 963,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 965,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-menu',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 966,
  'module' => 'privatemsg',
  'delta' => 'privatemsg-new',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 969,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 973,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 974,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -43,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 975,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -30,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 976,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -27,
  'region' => 'navigation',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'content/mentee-survey-start-program',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 977,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 978,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>
mentee-dashboard
activity/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 979,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 980,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 983,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 984,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 985,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 986,
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 987,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 988,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-them_to_you',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 989,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-1-you_to_them',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 990,
  'module' => 'user_relationship_blocks',
  'delta' => 'my-all',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 991,
  'module' => 'user_relationship_blocks',
  'delta' => 'pending',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 992,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 993,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 994,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 995,
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'code-conduct',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 996,
  'module' => 'views',
  'delta' => '-exp-jwk_search_api_users-page',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -34,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'jwk-search-api-users',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 997,
  'module' => 'views',
  'delta' => '1481cfbf090f4db7fcd26d2d2080fdeb',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -39,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 998,
  'module' => 'views',
  'delta' => '24e28f30e55ee3e162b2e3b585300247',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress
mentee-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 999,
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -52,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor for This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1000,
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -48,
  'region' => -1,
  'custom' => 0,
  'visibility' => 2,
  'pages' => '<?php
  if ((arg(0)==\'user\') || (arg(0)==\'users\')) {
    if (module_exists(\'sm_users\')) {
      $uid=sm_users_get_uid_from_profile_page();
      $role=sm_users_get_user_role($uid);
      if ($role==\'mentee\') {
          if (sm_users_is_mentee_relationship_limit_reached($uid)==FALSE) {
             return TRUE;
         }
      }
    }
  }
  return FALSE;
?>',
  'title' => 'Choose a Mentor For This Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1001,
  'module' => 'views',
  'delta' => '33313354944e843e061aee20e37fb4f8',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -41,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1002,
  'module' => 'views',
  'delta' => '3809e11e419972ab90aac4bbc02b49bd',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -37,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1003,
  'module' => 'views',
  'delta' => '3d0698b7b777109a148ac0b5d8fb8b35',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -43,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1004,
  'module' => 'views',
  'delta' => '42e444a63ac6d5ea96dbe276a95f3e9a',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1005,
  'module' => 'views',
  'delta' => '5bc5c387a7d993431f94fc01639775c2',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1006,
  'module' => 'views',
  'delta' => '5ccbaaf5f955b62d9cae0308418e4047',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -42,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1007,
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -23,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1008,
  'module' => 'views',
  'delta' => '603421a5fbacc89cc2aee49702dd47e5',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -28,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menntee-my-progress',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1009,
  'module' => 'views',
  'delta' => '61fd46a90d915e6822870fe11cef58f6',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentors',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1010,
  'module' => 'views',
  'delta' => '9018b10b39a362944029d071584ebc3b',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -24,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1011,
  'module' => 'views',
  'delta' => '9730158baec0423dc96361cfa9170d2b',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -35,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'menteementorselect',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1012,
  'module' => 'views',
  'delta' => '97d31f0a4a7834b392a42fc125ee3baf',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -36,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'gamentees',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1013,
  'module' => 'views',
  'delta' => 'a4ef22701f9842a52ded5cae2dd4cb10',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1014,
  'module' => 'views',
  'delta' => 'ab72c9b4a04c60c8b5936e991bef7275',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1015,
  'module' => 'views',
  'delta' => 'b16812e4dd67d921fac3af769303c9e6',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1016,
  'module' => 'views',
  'delta' => 'bc2a384bdee3b5b778fdc12a126d5c04',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1017,
  'module' => 'views',
  'delta' => 'bd6ddcb16b159fa49ffdd6179d6ed728',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -44,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1018,
  'module' => 'views',
  'delta' => 'birthdays-block',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1019,
  'module' => 'views',
  'delta' => 'c84f7376ecfa0f81866e5f1e0f7ba40f',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -38,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1020,
  'module' => 'views',
  'delta' => 'cc972a343a464b1d06fa24cb9460c79c',
  'theme' => 'ying',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'mentor-my-progress
mentor-dashboard',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1021,
  'module' => 'views',
  'delta' => 'ce4188644d5ebea5e9a54691d744010e',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1022,
  'module' => 'views',
  'delta' => 'dcd0759e33917b36397600cc4f12d32d',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -40,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1023,
  'module' => 'views',
  'delta' => 'f8a181a6cdd05a01ef48ce3ab94b69a1',
  'theme' => 'ying',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1024,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1025,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1026,
  'module' => 'views',
  'delta' => 'jwk_user_tree_views-block_1',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1027,
  'module' => 'views',
  'delta' => 'subsite_users-assignment_block',
  'theme' => 'ying',
  'status' => 0,
  'weight' => -51,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1028,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1029,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1030,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1031,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1032,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1033,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1034,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1035,
  'module' => 'views',
  'delta' => '25a70a0ecc40416cfd0c06dffeda44c6',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1060,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1061,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1062,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1063,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1064,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1065,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1066,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -38,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1067,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'locationtreesourcecode',
  'title' => 'userlocationcode',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1068,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1069,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1070,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1071,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1072,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1073,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1074,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1075,
  'module' => 'calendar',
  'delta' => 'calendar_legend',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1076,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1077,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1078,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1079,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1080,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1081,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1082,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1083,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1084,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1085,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1086,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1087,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1088,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1089,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1090,
  'module' => 'views',
  'delta' => 'event_calendar-calevent_block',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1091,
  'module' => 'views',
  'delta' => '19073768508101259d519bcb677861a2',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1092,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1093,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1094,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1095,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1096,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1097,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1098,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -45,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1099,
  'module' => 'custom_search_blocks',
  'delta' => 1,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'my-forums
forums/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1100,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1101,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1102,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1103,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1104,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1105,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1106,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1107,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1108,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1109,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1110,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1111,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1112,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1113,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1114,
  'module' => 'custom_block',
  'delta' => 'GetSendPrivateMsg',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1115,
  'module' => 'custom_block',
  'delta' => 'MymenteeMentorblock',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1116,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1117,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1118,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1119,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1120,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1121,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1122,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1123,
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1124,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1125,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1126,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1127,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1128,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1129,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1130,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1131,
  'module' => 'autologout',
  'delta' => 'info',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 1136,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1141,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1146,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1151,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1156,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1161,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1166,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1171,
  'module' => 'time_tracker_timer',
  'delta' => 'time_tracker_active_timers',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1296,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1301,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1306,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1311,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1316,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1321,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1326,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1331,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'k12',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1336,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1341,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1346,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1351,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1356,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1361,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -40,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1366,
  'module' => 'accordion_menu',
  'delta' => 1,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1371,
  'module' => 'accordion_menu',
  'delta' => 2,
  'theme' => 'ying',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1376,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'accenture',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1381,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1386,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1391,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1396,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1401,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1406,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'etrade',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1411,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1416,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1421,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'k12',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1426,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1431,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1436,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'nyse',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1441,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1446,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1451,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1456,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1461,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1466,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -39,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1471,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1476,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -36,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1481,
  'module' => 'accordion_menu',
  'delta' => 3,
  'theme' => 'ying',
  'status' => 1,
  'weight' => 0,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1486,
  'module' => 'accordion_menu',
  'delta' => 4,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'curriculum/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1491,
  'module' => 'accordion_menu',
  'delta' => 5,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1492,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1493,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1494,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1495,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1496,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1497,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1498,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1499,
  'module' => 'menu',
  'delta' => 'menu-curriculum',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1621,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1626,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1631,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1636,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1641,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1646,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1651,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -41,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1656,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'forum/
forum/*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1657,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1658,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1659,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1660,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1661,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1662,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1663,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1664,
  'module' => 'menu',
  'delta' => 'menu-curriculum-admin',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1706,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1711,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1716,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1721,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1726,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1731,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1736,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1741,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1746,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1751,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1756,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1761,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1766,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1771,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1776,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1781,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1786,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1791,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1796,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1801,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1806,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1811,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1816,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1821,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1826,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1831,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'accenture',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1836,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1841,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'etrade',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1846,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'k12',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1851,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'nyse',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1856,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1861,
  'module' => 'menu',
  'delta' => 'menu-new-content-management',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1866,
  'module' => 'views',
  'delta' => '132395c021ab475f8e2df45563fed410',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1871,
  'module' => 'views',
  'delta' => '132395c021ab475f8e2df45563fed410',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1876,
  'module' => 'views',
  'delta' => '132395c021ab475f8e2df45563fed410',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1881,
  'module' => 'views',
  'delta' => '132395c021ab475f8e2df45563fed410',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1886,
  'module' => 'views',
  'delta' => '818d212196a9ced980ccd8c6229ddad4',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1891,
  'module' => 'views',
  'delta' => 'b0419717ab3496313b9f08441d07d919',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1896,
  'module' => 'views',
  'delta' => '818d212196a9ced980ccd8c6229ddad4',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1901,
  'module' => 'views',
  'delta' => 'b0419717ab3496313b9f08441d07d919',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1906,
  'module' => 'views',
  'delta' => '818d212196a9ced980ccd8c6229ddad4',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1911,
  'module' => 'views',
  'delta' => 'b0419717ab3496313b9f08441d07d919',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1916,
  'module' => 'views',
  'delta' => '818d212196a9ced980ccd8c6229ddad4',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1921,
  'module' => 'views',
  'delta' => 'b0419717ab3496313b9f08441d07d919',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1926,
  'module' => 'views',
  'delta' => '9e09813d5eda27148885979c4a3271ed',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1931,
  'module' => 'views',
  'delta' => '9e09813d5eda27148885979c4a3271ed',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1936,
  'module' => 'views',
  'delta' => '9e09813d5eda27148885979c4a3271ed',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1941,
  'module' => 'views',
  'delta' => '9e09813d5eda27148885979c4a3271ed',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1946,
  'module' => 'views',
  'delta' => '0b10235c226a8297d668af55d0f387eb',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1951,
  'module' => 'views',
  'delta' => '0b10235c226a8297d668af55d0f387eb',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1956,
  'module' => 'views',
  'delta' => '0b10235c226a8297d668af55d0f387eb',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1961,
  'module' => 'views',
  'delta' => '0b10235c226a8297d668af55d0f387eb',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1966,
  'module' => 'menu',
  'delta' => 'menu-testviewmenu',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -47,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1971,
  'module' => 'menu',
  'delta' => 'menu-testviewmenu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1976,
  'module' => 'menu',
  'delta' => 'menu-testviewmenu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1981,
  'module' => 'menu',
  'delta' => 'menu-testviewmenu',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1986,
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1991,
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 1996,
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2001,
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2006,
  'module' => 'views',
  'delta' => '73d4344d2ea482a2e3d09e4e4c680642',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2011,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2016,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2021,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2026,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2031,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/add/matching*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2036,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/add/matching*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2041,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -39,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/add/matching*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2046,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/add/matching*',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2071,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2076,
  'module' => 'formblock',
  'delta' => 'contact_site',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2081,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2086,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2091,
  'module' => 'formblock',
  'delta' => 'contact_site',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2096,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2101,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2106,
  'module' => 'formblock',
  'delta' => 'contact_site',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2111,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2116,
  'module' => 'formblock',
  'delta' => 'user_register',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2121,
  'module' => 'formblock',
  'delta' => 'contact_site',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2126,
  'module' => 'formblock',
  'delta' => 'user_password_request',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2131,
  'module' => 'formblock',
  'delta' => 'activity_assignment_response',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2136,
  'module' => 'formblock',
  'delta' => 'activity_assignment_response',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2141,
  'module' => 'formblock',
  'delta' => 'activity_assignment_response',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2146,
  'module' => 'formblock',
  'delta' => 'activity_assignment_response',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2151,
  'module' => 'formblock',
  'delta' => 'lets_chat_reply',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2156,
  'module' => 'formblock',
  'delta' => 'lets_chat_reply',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2161,
  'module' => 'formblock',
  'delta' => 'lets_chat_reply',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2166,
  'module' => 'formblock',
  'delta' => 'lets_chat_reply',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2171,
  'module' => 'menu',
  'delta' => 'menu-masquerade',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2176,
  'module' => 'menu',
  'delta' => 'menu-masquerade',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2181,
  'module' => 'menu',
  'delta' => 'menu-masquerade',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2186,
  'module' => 'menu',
  'delta' => 'menu-masquerade',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2211,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How to use MentorPlace Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2216,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How to use MentorPlace Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2221,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How to use MentorPlace Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2226,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How to use MentorPlace Mentee',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2231,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How To Use MentorPlace Mentor',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2236,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How To Use MentorPlace Mentor',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2241,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How To Use MentorPlace Mentor',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2246,
  'module' => 'block',
  'delta' => 31,
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'How To Use MentorPlace Mentor',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2251,
  'module' => 'views',
  'delta' => '66d052236ba2749d5170d98d4a1dbc66',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2256,
  'module' => 'views',
  'delta' => '66d052236ba2749d5170d98d4a1dbc66',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2261,
  'module' => 'views',
  'delta' => '66d052236ba2749d5170d98d4a1dbc66',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2266,
  'module' => 'views',
  'delta' => '66d052236ba2749d5170d98d4a1dbc66',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2271,
  'module' => 'views',
  'delta' => 'd316c2460ebe3a9ad9a3cecf62424576',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2276,
  'module' => 'views',
  'delta' => 'd316c2460ebe3a9ad9a3cecf62424576',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2281,
  'module' => 'views',
  'delta' => 'd316c2460ebe3a9ad9a3cecf62424576',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2286,
  'module' => 'views',
  'delta' => 'd316c2460ebe3a9ad9a3cecf62424576',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2291,
  'module' => 'menu',
  'delta' => 'menu-matching-menu',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => -37,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'create_match
auto_match
unmatch',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2296,
  'module' => 'menu',
  'delta' => 'menu-matching-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'create_match
auto_match
unmatch',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2301,
  'module' => 'menu',
  'delta' => 'menu-matching-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'create_match
auto_match
unmatch',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2306,
  'module' => 'menu',
  'delta' => 'menu-matching-menu',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'create_match
auto_match
unmatch',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2311,
  'module' => 'views',
  'delta' => '5477bf19c846e6a789436efa0d91c6e6',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2316,
  'module' => 'views',
  'delta' => '5477bf19c846e6a789436efa0d91c6e6',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2321,
  'module' => 'views',
  'delta' => '5477bf19c846e6a789436efa0d91c6e6',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2326,
  'module' => 'views',
  'delta' => '5477bf19c846e6a789436efa0d91c6e6',
  'theme' => 'ying',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2327,
  'module' => 'masquerade',
  'delta' => 'masquerade',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2328,
  'module' => 'masquerade',
  'delta' => 'masquerade',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2329,
  'module' => 'masquerade',
  'delta' => 'masquerade',
  'theme' => 'smarter',
  'status' => 1,
  'weight' => -42,
  'region' => 'highlighted',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2330,
  'module' => 'views',
  'delta' => '9066e0da4edc6e845298d56010a9c108',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2331,
  'module' => 'views',
  'delta' => '9066e0da4edc6e845298d56010a9c108',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2332,
  'module' => 'views',
  'delta' => '9066e0da4edc6e845298d56010a9c108',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2336,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_left',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2337,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_right',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2338,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_left',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2339,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_right',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2340,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_left',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2341,
  'module' => 'sm_panels',
  'delta' => 'admin_panel_right',
  'theme' => 'smarter',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '<?php
$url1 = \'<div class="logo"><a href="http://ibm.com" target="_blank"><img src="\'.url(\'sites/all/themes/smarter/images/blank.gif\').\'" alt="logo_powered_ibm" /></a></div>\';
print t($url1);
?> 
<div id="footer-links">
 <div class="links-wrapper">
   <ul class="links inline">
 <li class="first"><a href="/privacy" target="_blank">Privacy Policy</a></li>
     <li >&copy; Copyright 2013</li>
  <li ><a href="/terms" target="_blank">Terms of Use</a></li>
  <li class="last"><a href="/codeofconduct" target="_blank">Code of Conduct</a></li>
   </ul>
 </div>
</div>
<?php
$url2 = \'<div class="logo2"><a href="http://ibm.com" target="_blank"><img src="\'.url(\'sites/all/themes/smarter/images/logo_powered_ibm.png\').\'" alt="logo_powered_ibm" width="111" height="70" /></a></div>\';
print t($url2);
?>
<div class="clear"></div>',
  'info' => 'Smarter Mentoring footer',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '<?php
   print t(\'This mentee has reached the maximum number of mentors. To assign a new mentor to this mentee, first unassign an existing mentor.\');
?>',
  'info' => 'Message that a user\'s relationship limit has been reached',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '     <?php print views_embed_view(\'users_private_messages\',\'privatemsg_dashboard\'); ?>',
  'info' => 'My Messages Block',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '<?php
global $user;
$user_data = user_load($user->uid);

//Get location ID from field_taxonomy_tag
$dataID = $user_data->field_taxonomy_tag[\'und\'];

foreach($dataID as $termid) {
$childresults = sm_curriculum_taxonomy_get_children_all($termid[tid], $vid = 3);
$ttotal = count($childresults);
$output2 .= \'+\';
$output2 .= $termid[tid];

foreach($childresults as $grandchildresults) {
$output2 .= \'+\';
$output2 .= $grandchildresults->tid;

}

}

echo \'<pre>\';
print_r($output2);
echo \'</pre>\'; 
?>',
  'info' => 'userlocationcode',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '<?php 
global $base_url;
$menu_object = menu_get_object();
$forum_name = $menu_object-> taxonomy_forums[\'und\'][0][\'taxonomy_term\']->name;
$patterns = array("/[^a-zA-Z0-9 -]/", "/ /");
$replacements = array("", "-");
$forum_url = strtolower(preg_replace($patterns, $replacements, $forum_name));  
echo \'<a href="\'.$base_url."/forums/".$forum_url.\'" class="back-to-forum-link">Back to forum: \'.$forum_name.\'</a>\';
?>',
  'info' => 'Puts Forum name at top of topic',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '<?php
global $user;
print("<p>Welcome " .l($user->name, "user/{$GLOBALS[\'user\']->uid}"). "!  This is your MentorPlace Dashboard.  From here, you can communicate with your student mentee(s) on curriculum you have been assigned, or you can chat with your student about topics of your choice.</p>");
?>
',
  'info' => 'welcome page for mentors',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '<a href="/node/add/matching/<?php echo arg(3);?>/Male">Male</a> <a href="/node/add/matching/<?php echo arg(3);?>/Female">Female</a> ',
  'info' => 'Male/Female filter',
  'format' => 'php_code',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '<p><mediawrapper data="">
<video class="media-element file-full" controls="controls" data-fid="32776" data-media-element="1" height="385" width="640"><source src="http://mentorplacedev.prod.acquia-sites.com/sites/default/files/menteetraining.mp4" type="video/mp4" /></video>
</mediawrapper></p>
',
  'info' => 'Mentee How to use MentorPlace',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 31,
  'body' => '<p><mediawrapper data="">
<video class="media-element file-full" controls="controls" data-fid="32781" data-media-element="1" height="385" width="640"><source src="http://mentorplacedev.prod.acquia-sites.com/sites/default/files/mentortraining.mp4" type="video/mp4" /></video>
</mediawrapper></p>
',
  'info' => 'Mentor How to use mentorplace',
  'format' => 'full_html',
);
  $export['block_node_type'][] = array(
  'module' => 'block',
  'delta' => 11,
  'type' => 'forum',
);
  $export['block_node_type'][] = array(
  'module' => 'block',
  'delta' => 9,
  'type' => 'forum',
);
  $export['block_node_type'][] = array(
  'module' => 'views',
  'delta' => '5def1edd32d96c42ac7aa5e57172402e',
  'type' => 'activity_assignment',
);
  $export['block_role'][] = array(
  'module' => 'accordion_menu',
  'delta' => 1,
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'accordion_menu',
  'delta' => 3,
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'accordion_menu',
  'delta' => 3,
  'rid' => 4,
);
  $export['block_role'][] = array(
  'module' => 'accordion_menu',
  'delta' => 3,
  'rid' => 7,
);
  $export['block_role'][] = array(
  'module' => 'accordion_menu',
  'delta' => 3,
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'block',
  'delta' => 16,
  'rid' => 5,
);
  $export['block_role'][] = array(
  'module' => 'block',
  'delta' => 2,
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'block',
  'delta' => 2,
  'rid' => 4,
);
  $export['block_role'][] = array(
  'module' => 'block',
  'delta' => 26,
  'rid' => 6,
);
  $export['block_role'][] = array(
  'module' => 'block',
  'delta' => 31,
  'rid' => 5,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'activitiesComplete',
  'rid' => 6,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'rid' => 1,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'rid' => 4,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'rid' => 7,
);
  $export['block_role'][] = array(
  'module' => 'custom_block',
  'delta' => 'taxonomytreeview',
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'masquerade',
  'delta' => 'masquerade',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'masquerade',
  'delta' => 'masquerade',
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'rid' => 4,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'rid' => 7,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-admin-main-menu',
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-forums',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-forums',
  'rid' => 7,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-forums',
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'rid' => 5,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-mentormenteematchtabs',
  'rid' => 6,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-testviewmenu',
  'rid' => 5,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-users',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-users',
  'rid' => 4,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-users',
  'rid' => 7,
);
  $export['block_role'][] = array(
  'module' => 'menu',
  'delta' => 'menu-users',
  'rid' => 8,
);
  $export['block_role'][] = array(
  'module' => 'system',
  'delta' => 'main-menu',
  'rid' => 5,
);
  $export['block_role'][] = array(
  'module' => 'system',
  'delta' => 'main-menu',
  'rid' => 6,
);
  $export['block_role'][] = array(
  'module' => 'system',
  'delta' => 'navigation',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'user_relationship_blocks',
  'delta' => 'actions',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-them_to_you',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'user_relationship_blocks',
  'delta' => 'user-1-you_to_them',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'user_relationship_blocks',
  'delta' => 'user-all',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'views',
  'delta' => '2e591758574b3e9434552ea1af1f0cd8',
  'rid' => 3,
);
  $export['block_role'][] = array(
  'module' => 'views',
  'delta' => '31ca149416e094c6b4eef7d43925ec23',
  'rid' => 4,
);
return $export;
}
