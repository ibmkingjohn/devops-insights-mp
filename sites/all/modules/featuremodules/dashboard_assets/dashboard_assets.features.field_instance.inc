<?php
/**
 * @file
 * dashboard_assets.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dashboard_assets_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-admintrainingmedia-field_admin_media'.
  $field_instances['node-admintrainingmedia-field_admin_media'] = array(
    'bundle' => 'admintrainingmedia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafront',
        'settings' => array(
          'preset' => 'admin_videos',
        ),
        'type' => 'mediafront_player',
        'weight' => 0,
      ),
      'drupalgap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_media',
    'label' => 'admin Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'adminmedia',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'mediafront' => array(
        'always_show_player' => 0,
        'custom' => '',
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'label_help_description' => '',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-admintrainingmedia-field_admin_thumbnail'.
  $field_instances['node-admintrainingmedia-field_admin_thumbnail'] = array(
    'bundle' => 'admintrainingmedia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'drupalgap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_thumbnail',
    'label' => 'Admin Thumbnail',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 33907,
      'file_directory' => 'adminmedia',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'mediafront' => array(
        'always_show_player' => 0,
        'custom' => '',
        'field_type' => 'image',
        'media_type' => 'media',
        'preview' => 'mp_thumb',
        'thumbnail' => 'mp_thumb',
      ),
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'label_help_description' => '',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Thumbnail');
  t('admin Media');

  return $field_instances;
}
