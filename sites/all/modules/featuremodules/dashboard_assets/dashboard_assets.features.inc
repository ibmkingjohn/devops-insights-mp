<?php
/**
 * @file
 * dashboard_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dashboard_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dashboard_assets_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function dashboard_assets_mediafront_default_presets() {
  $items = array(
    'gridplayer' => array(
      'name' => 'gridplayer',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '',
        'swfplayer' => '/sites/all/modules/mediamodules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => '',
        'range' => array(
          'min' => 0,
          'max' => 0,
        ),
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'showController' => 1,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-logo-settings',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function dashboard_assets_mediafront_views_default_options() {
  $options = array(
    'admin_how_to_videos' => array(
      'field_admin_media' => array(
        'link_to_player' => 1,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'field_admin_thumbnail' => array(
        'link_to_player' => 1,
        'field_type' => 'image',
        'media_type' => 'media',
        'preview' => 'thumbnail',
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'mediafront_player' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'title' => array(
        'link_to_player' => 1,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'area' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'weight' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'draggableviews' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
    ),
    'how_to_videos' => array(
      'filename' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
      'rendered' => array(
        'link_to_player' => 0,
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
        'always_show_player' => 0,
      ),
    ),
  );
  return $options;
}

/**
 * Implements hook_node_info().
 */
function dashboard_assets_node_info() {
  $items = array(
    'admintrainingmedia' => array(
      'name' => t('admintrainingmedia'),
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
