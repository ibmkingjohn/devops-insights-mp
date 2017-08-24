<?php
/**
 * @file
 * dashboard_assets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dashboard_assets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_how_to_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin How To Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin How To Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: MediaFront Player */
  $handler->display->display_options['header']['mediafront_player']['id'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['table'] = 'views';
  $handler->display->display_options['header']['mediafront_player']['field'] = 'mediafront_player';
  $handler->display->display_options['header']['mediafront_player']['mediafront_preset'] = 'gridplayer';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><center><strong>Click on Thumbnail or Title to play video</strong></center></p>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    1 => 0,
    2 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Field: Content: Admin Thumbnail */
  $handler->display->display_options['fields']['field_admin_thumbnail']['id'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['table'] = 'field_data_field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['field'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_admin_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: admin Media */
  $handler->display->display_options['fields']['field_admin_media']['id'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['table'] = 'field_data_field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['field'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['label'] = '';
  $handler->display->display_options['fields']['field_admin_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_admin_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_media']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_admin_media']['settings'] = array(
    'preset' => 'adminvids',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin_how_to_videos:admin_videos_sort_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admintrainingmedia' => 'admintrainingmedia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Admin How to grid Page */
  $handler = $view->new_display('page', 'Admin How to grid Page', 'admin_howto_page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Admin Thumbnail */
  $handler->display->display_options['fields']['field_admin_thumbnail']['id'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['table'] = 'field_data_field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['field'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_admin_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: admin Media */
  $handler->display->display_options['fields']['field_admin_media']['id'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['table'] = 'field_data_field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['field'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['label'] = '';
  $handler->display->display_options['fields']['field_admin_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_admin_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_media']['settings'] = array(
    'preset' => 'gridplayer',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['path'] = 'admin-how-to-videos';

  /* Display: Admin How to Playlist */
  $handler = $view->new_display('page', 'Admin How to Playlist', 'admin_howto_playlist_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'mediaplayer';
  $handler->display->display_options['style_options']['mediafront_preset'] = 'admin_videos';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Admin Thumbnail */
  $handler->display->display_options['fields']['field_admin_thumbnail']['id'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['table'] = 'field_data_field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['field'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_admin_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: admin Media */
  $handler->display->display_options['fields']['field_admin_media']['id'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['table'] = 'field_data_field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['field'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['label'] = '';
  $handler->display->display_options['fields']['field_admin_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_admin_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_media']['settings'] = array(
    'file_view_mode' => 'teaser',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['path'] = 'admin-how-to-videosplaylist';

  /* Display: Admin Video Sort Page */
  $handler = $view->new_display('page', 'Admin Video Sort Page', 'admin_videos_sort_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_admin_thumbnail' => 'field_admin_thumbnail',
    'field_admin_media' => 'field_admin_media',
    'title' => 'title',
    'weight' => 'weight',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_admin_thumbnail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_admin_media' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Admin Thumbnail */
  $handler->display->display_options['fields']['field_admin_thumbnail']['id'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['table'] = 'field_data_field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['field'] = 'field_admin_thumbnail';
  $handler->display->display_options['fields']['field_admin_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_admin_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: admin Media */
  $handler->display->display_options['fields']['field_admin_media']['id'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['table'] = 'field_data_field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['field'] = 'field_admin_media';
  $handler->display->display_options['fields']['field_admin_media']['label'] = '';
  $handler->display->display_options['fields']['field_admin_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_admin_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_admin_media']['type'] = 'mediafront_player';
  $handler->display->display_options['fields']['field_admin_media']['settings'] = array(
    'preset' => 'adminvids',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'grid-player';
  $export['admin_how_to_videos'] = $view;

  $view = new view();
  $view->name = 'dashboard_activities_views';
  $view->description = 'All pages for Activity and Actvitity Assignment Content Types';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard Activities Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Work on Curriculum';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['id'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['field'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['label'] = 'Activity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'privatemsg_years';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  /* Filter criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['filters']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['filters']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['filters']['field_available_date_value']['field'] = 'field_available_date_value';
  $handler->display->display_options['filters']['field_available_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_available_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';

  /* Display: Mentee Actvitiy Dash */
  $handler = $view->new_display('page', 'Mentee Actvitiy Dash', 'menteeactvitiesdash__page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'nothing' => 'nothing',
    'field_start_activity' => 'field_start_activity',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_activity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities available at this time';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['id'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['field'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['label'] = 'Activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Entity id */
  $handler->display->display_options['fields']['field_activity_reference']['id'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['ui_name'] = 'Entity id';
  $handler->display->display_options['fields']['field_activity_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Activity Label */
  $handler->display->display_options['fields']['field_activity_reference_1']['id'] = 'field_activity_reference_1';
  $handler->display->display_options['fields']['field_activity_reference_1']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference_1']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference_1']['ui_name'] = 'Activity Label';
  $handler->display->display_options['fields']['field_activity_reference_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: custom status */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'custom status';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
 global $user;
    $mentee = $user->uid;
$testid = $data->field_field_activity_reference[0][\'raw\'][\'entity\']->vid;
  $view_user_activities = views_get_view(\'mentee_activities\'); 
  if (($view_user_activities==NULL) || (!is_object($view_user_activities))) {
    return NULL; // do nothing
  }
  $view_user_activities->set_display(\'user_activities_list_mentee\'); // set the display
  $args = array($mentee,$testid); 
  $view_user_activities->set_arguments($args);
  $view_user_activities->execute();
  $activity_array = $view_user_activities->result;
 foreach ($activity_array as $activity) {
$actstatus = $activity->field_field_completion_status[\'0\'][\'raw\'][\'value\'];
if ($actstatus ==\'Complete\') {
echo(\'<span class="status_complete" title="Complete">&nbsp;</span>\');
}
else {
echo (\'<span class="status_inprogress" title="In Progress">&nbsp;</span>\');
}
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Start Activity Menteelink */
  $handler->display->display_options['fields']['start_activity_menteelink']['id'] = 'start_activity_menteelink';
  $handler->display->display_options['fields']['start_activity_menteelink']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['start_activity_menteelink']['field'] = 'start_activity_menteelink';
  $handler->display->display_options['fields']['start_activity_menteelink']['label'] = 'Activity';
  $handler->display->display_options['fields']['start_activity_menteelink']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['start_activity_menteelink']['alter']['text'] = '[field_activity_reference_1] ';
  $handler->display->display_options['fields']['start_activity_menteelink']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Last Reply Summary(from tpl) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Last Reply Summary(from tpl)';
  $handler->display->display_options['fields']['title_1']['label'] = 'Last Reply Preview';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Curriculum (field_curriculum_reference) */
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['id'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['field'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['relationship'] = 'field_activity_reference_target_id';
  /* Sort criterion: Content: Activity Order (field_activity_order) */
  $handler->display->display_options['sorts']['field_activity_order_value']['id'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['sorts']['field_activity_order_value']['field'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
return sm_utilities_build_userlocation_filter_string($user_data);';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'activitymenteedash';

  /* Display: Mentor Actvities By Mentee Dash */
  $handler = $view->new_display('page', 'Mentor Actvities By Mentee Dash', 'mentoractbymenteedash_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    8 => '8',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'nothing' => 'nothing',
    'field_start_activity' => 'field_start_activity',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_activity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities available at this time';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['id'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['field'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['label'] = 'Activity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Activity Ent ID */
  $handler->display->display_options['fields']['field_activity_reference']['id'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['ui_name'] = 'Activity Ent ID';
  $handler->display->display_options['fields']['field_activity_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Activity label */
  $handler->display->display_options['fields']['field_activity_reference_1']['id'] = 'field_activity_reference_1';
  $handler->display->display_options['fields']['field_activity_reference_1']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference_1']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference_1']['ui_name'] = 'Activity label';
  $handler->display->display_options['fields']['field_activity_reference_1']['label'] = '';
  $handler->display->display_options['fields']['field_activity_reference_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_reference_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: custom status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'custom status';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
    $mentee = arg(1);
$testid = $data->field_field_activity_reference[0][\'raw\'][\'entity\']->vid;
  $view_user_activities = views_get_view(\'mentee_activities\'); 
  if (($view_user_activities==NULL) || (!is_object($view_user_activities))) {
    return NULL; // do nothing
  }
  $view_user_activities->set_display(\'user_activities_list_mentee\'); // set the display
  $args = array($mentee,$testid); 
  $view_user_activities->set_arguments($args);
  $view_user_activities->execute();
  $activity_array = $view_user_activities->result;
  foreach ($activity_array as $activity) {
$actstatus = $activity->field_field_completion_status[\'0\'][\'raw\'][\'value\'];
if ($actstatus ==\'Complete\') {
echo(\'<span class="status_complete" title="Complete">&nbsp;</span>\');
}
else {
echo (\'<span class="status_inprogress" title="In Progress">&nbsp;</span>\');
}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Start Activity Mentorlink */
  $handler->display->display_options['fields']['start_activity_mentorlink']['id'] = 'start_activity_mentorlink';
  $handler->display->display_options['fields']['start_activity_mentorlink']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['start_activity_mentorlink']['field'] = 'start_activity_mentorlink';
  $handler->display->display_options['fields']['start_activity_mentorlink']['label'] = 'Activity';
  $handler->display->display_options['fields']['start_activity_mentorlink']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['start_activity_mentorlink']['alter']['text'] = '[field_activity_reference_1]';
  $handler->display->display_options['fields']['start_activity_mentorlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['start_activity_mentorlink']['rules_link'] = array(
    'rules_link_parameters' => '[field_activity_reference]',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Last Reply Summary(from tpl) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Last Reply Summary(from tpl)';
  $handler->display->display_options['fields']['title_1']['label'] = 'Last Reply Preview';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Curriculum (field_curriculum_reference) */
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['id'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['field'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['sorts']['field_curriculum_reference_target_id']['relationship'] = 'field_activity_reference_target_id';
  /* Sort criterion: Content: Activity Order (field_activity_order) */
  $handler->display->display_options['sorts']['field_activity_order_value']['id'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['sorts']['field_activity_order_value']['field'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = '$url = $_SERVER["REQUEST_URI"];
$url_path = parse_url($url, PHP_URL_PATH);
$basename = pathinfo($url_path, PATHINFO_BASENAME);
$user_data = user_load($basename);
return sm_utilities_build_userlocation_filter_string($user_data);';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'mentoractivitymenteedash';
  $export['dashboard_activities_views'] = $view;

  $view = new view();
  $view->name = 'dashboard_endorsement_choices';
  $view->description = 'Pages and blocks for the Endorsement Content type';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dashboard Endorsement Choices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Endorsement Choices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_term_icon' => 'field_term_icon',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term Icon */
  $handler->display->display_options['fields']['field_term_icon']['id'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['table'] = 'field_data_field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['field'] = 'field_term_icon';
  $handler->display->display_options['fields']['field_term_icon']['label'] = '';
  $handler->display->display_options['fields']['field_term_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_endorsements' => 'user_endorsements',
  );

  /* Display: Endorsement Choices */
  $handler = $view->new_display('page', 'Endorsement Choices', 'endorsement_choices1');
  $handler->display->display_options['display_description'] = 'Endorsement Choices';
  $handler->display->display_options['path'] = 'endorsement-choices1';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'endorsement_choices_entityreference1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_term_icon' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Endorsement Tally */
  $handler = $view->new_display('block', 'Endorsement Tally', 'endorsement_tally1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Endorsement Tally';
  $handler->display->display_options['display_description'] = 'Endorsement Tally';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Reward';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Endorsement Count */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Endorsement Count';
  $handler->display->display_options['fields']['php_1']['label'] = 'Count';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorsecount = 0;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorsecount = \'<span class="award_participation">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorsecount = \'<span class="award_leadership">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorsecount = \'<span class="award_communication">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorsecount = \'<span class="award_teamwork">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorsecount = \'<span class="award_thinking">\' . count( $endorseview->result ) . \'</span>\';
break;
}
echo ($endorsecount);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';

  /* Display: Endorsement Tally Sent */
  $handler = $view->new_display('block', 'Endorsement Tally Sent', 'endorsementsent_tally1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Endorsement Tally Sent';
  $handler->display->display_options['display_description'] = 'Endorsement Tally';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Reward';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Endorsement Count */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Endorsement Count';
  $handler->display->display_options['fields']['php_1']['label'] = 'Sent';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorsecount = 0;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorsecount = \'<span class="award_participation">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorsecount = \'<span class="award_leadership">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorsecount = \'<span class="award_communication">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorsecount = \'<span class="award_teamwork">\' . count( $endorseview->result ) . \'</span>\';
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorsecount = \'<span class="award_thinking">\' . count( $endorseview->result ) . \'</span>\';
break;
}
echo ($endorsecount);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';

  /* Display: Rewards Mentee Dash */
  $handler = $view->new_display('page', 'Rewards Mentee Dash', 'rewardmentee_dash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Rewards';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>You have earned the following rewards from your mentor! To read the reward comments from your mentor, click on the notepad icon.</p>';
  $handler->display->display_options['header']['area_text_custom']['roles'] = array(
    1 => 0,
    2 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Reward';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Rewards Received';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorsecount = NULL;
$endorseviewcount =0;
$endorselink =NULL;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_participation">\' . $endorseviewcount . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_participation">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseawesome?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_leadership">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_leadership">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsedl?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_communication">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_communication">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseec?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_teamwork">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_teamwork">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsegt?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_thinking">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_thinking">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
	$endorselink = (\'<a class="colorbox-node" href ="/endorseit?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\');
	}
break;
}
echo ($endorsecount);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Reward Comments';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorsecount = NULL;
$endorseviewcount =0;
$endorselink =NULL;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_participation">\' . $endorseviewcount . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_participation">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseawesome?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_leadership">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_leadership">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsedl?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_communication">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_communication">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseec?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_teamwork">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_teamwork">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsegt?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_thinking">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_thinking">&nbsp;</span>\';
}
if(!$endorseviewcount == 0){
	$endorselink = (\'<a class="colorbox-node" href ="/endorseit?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\');
	}
break;
}
echo ($endorselink);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'rewardsmenteedash';

  /* Display: Rewards Mentor by Mentee */
  $handler = $view->new_display('page', 'Rewards Mentor by Mentee', 'rewardmentormentee_dash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Send a Reward!';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Send Reward */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Send Reward';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php

$addurl = url(\'node/add/endorsement/?field_endorsee_entity=\'.arg(1), array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
echo(\'<div class = "sendrewardtxt">\');
echo(t(\'Sending your mentee a virtual reward can inspire their ongoing participation. Just click on "Send a Reward!"  Your student can receive multiple rewards in the same category.     \'));
echo(\'</div><p></p>\');
echo l(\'Send Reward\', $addurlfull, 
array(
\'attributes\' => array(\'class\' => array(\'button\')),
\'query\' => array($destination)));
echo(\'<p></p>\');
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Reward';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Rewards Sent';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorseview->set_arguments(array(arg(1)));
$endorsecount = NULL;
$endorseviewcount =0;
$endorselink =NULL;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_participation">&nbsp;</span>\';
}
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_leadership">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_leadership">&nbsp;</span>\';
}
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_communication">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_communication">&nbsp;</span>\';
}
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_teamwork">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_teamwork">&nbsp;</span>\';
}
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
//$endorsecount = \'<span class="award_thinking">\' . count( $endorseview->result ) . \'</span>\';
$endorseview = $endorseview->result;
foreach($endorseview  as $eresults){
	$endorsecount .= \'<span class="award_thinking">&nbsp;</span>\';
}
break;
}
echo ($endorsecount);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Reward Comments';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$endorsename = $row->name;
$endorseview = views_get_view( \'endorsement_list\' );
$endorseview->set_arguments(array(arg(1)));
$endorsecount = NULL;
$endorseviewcount =0;
$endorselink =NULL;
switch ($endorsename)
    {
      case "Awesome Participation" :
$endorseview->execute( \'ap_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseawesome/\'.arg(1).\'?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Demonstrated Leadership" :
$endorseview->execute( \'dl_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsedl/\'.arg(1).\'?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Effective Communication" :
$endorseview->execute( \'ec_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorseec/\'.arg(1).\'?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Great Teamwork" :
$endorseview->execute( \'gt_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
if(!$endorseviewcount == 0){
$endorselink = \'<a class="colorbox-node" href ="/endorsegt/\'.arg(1).\'?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\';
}
break;
        case "Innovative Thinking" :
$endorseview->execute( \'it_endorsement_page\' );
$endorseviewcount = count( $endorseview->result );
if(!$endorseviewcount == 0){
	$endorselink = (\'<a class="colorbox-node" href ="/endorseit/\'.arg(1).\'?width=600&height=600&iframe=true"><span class="awardlink">&nbsp;</span></a>\');
	}
break;
}
echo ($endorselink);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'rewardsmentorbymentee';
  $export['dashboard_endorsement_choices'] = $view;

  $view = new view();
  $view->name = 'dashboard_user_relationships_browser';
  $view->description = 'Shows someone\'s related users';
  $view->tag = '';
  $view->base_table = 'user_relationships';
  $view->human_name = 'Dashboard user_relationships_browser';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'plural_name' => 'plural_name',
    'picture' => 'picture',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'plural_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_selection';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_selection';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User relationships: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Matched';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'requester_id';
  /* Contextual filter: User relationships: Requester user */
  $handler->display->display_options['arguments']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requester_id']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['requester_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['requester_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requester_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['validate']['type'] = 'numeric';
  /* Filter criterion: User relationships: Relationship status */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['value'] = '1';
  $handler->display->display_options['filters']['approved']['group'] = '0';
  $handler->display->display_options['filters']['approved']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
    3924 => '3924',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_acct_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';

  /* Display: Mentee Mentors Dash */
  $handler = $view->new_display('page', 'Mentee Mentors Dash', 'menteementor_dash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Mentor';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: My Status */
  $handler->display->display_options['fields']['field_check_in']['id'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['table'] = 'field_data_field_check_in';
  $handler->display->display_options['fields']['field_check_in']['field'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_check_in']['label'] = '';
  $handler->display->display_options['fields']['field_check_in']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_selection';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_selection';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login']['exclude'] = TRUE;
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requester user */
  $handler->display->display_options['arguments']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requester_id']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requester_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requester_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requester_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['requester_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User relationships: Relationship status */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['value'] = '1';
  $handler->display->display_options['filters']['approved']['group'] = '0';
  $handler->display->display_options['filters']['approved']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
    3924 => '3924',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_user_acct_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';
  $handler->display->display_options['path'] = 'menteementordash';

  /* Display: Mentor Mentee Dash */
  $handler = $view->new_display('page', 'Mentor Mentee Dash', 'mentormentee_dash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Communicate with your mentees';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'uid_1' => 'uid_1',
    'name' => 'name',
    'field_user_acct_status' => 'field_user_acct_status',
    'picture' => 'picture',
    'php' => 'php',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_acct_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: intro text */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'intro text';
  $handler->display->display_options['header']['php']['php_output'] = '<p>Your mentees are listed below.  To communcate with one of your mentees, please click their username..</p>
';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[picture]
[name]';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Account Status */
  $handler->display->display_options['fields']['field_user_acct_status']['id'] = 'field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['field'] = 'field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_user_acct_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = 'My Mentees';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '<div class="mentor_dash_av">
<a href="mentormentee/[uid]">[picture]</a>
<br />
<a href="mentormentee/[uid]">[name]</a>
</div>';
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_selection';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_selection';
  /* Field: Most Recent Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Most Recent Activity';
  $handler->display->display_options['fields']['php']['label'] = 'Most Recent Activity';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$activity_reply_view = views_get_view( \'mentee_activities\' );
$activity_reply_view->set_arguments(array($row->uid_1.",".$row->uid));
$activity_reply_view->execute( \'activityreplybyuser_page\' );
$results = $activity_reply_view->result;
foreach($results as $result){
if($result){
$created = $result->_field_data[\'nid\'][\'entity\']->created;
$title = $result->field_field_activity_entity_ref[0][\'raw\'][\'entity\']->title;
$node_id = $result->field_field_actassign_reference[0][\'raw\'][\'target_id\'];
$url = url(\'node/\'. $node_id).\'?field_actassign_reference=\'.$node_id; 
print \'<span class="recent_activity_title">\'.$result->users_node_name.\': \'.date("m/d/Y", $created).\'</span><br/> <a href="\'.$url.\'">\'.$title.\'</a><br/>\';
$body = $result->_field_data[\'nid\'][\'entity\']->field_actassign_body[\'und\'][0][\'value\'];
$body = preg_replace(\'~\\[\\[\\{(.*)\\}\\]\\]~\', "[media]", $body);
$body = strip_tags($body);
		$limit = 150;
		$break = " ";
		$pad = "...";
		if(strlen($body) <= $limit){
			echo $body;	
		}else if(($breakpoint = strpos($body, $break, $limit)) !== false) {
			if($breakpoint < strlen($body) - 1) {
			  $body = substr($body, 0, $breakpoint) . $pad;
			  echo $body;
			}
	    }
}
if(!$result->nid){
	echo "There are no activity replies at this time.";
}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Most Recent Chat';
  $handler->display->display_options['fields']['view']['view'] = 'dashboard_lets_chat';
  $handler->display->display_options['fields']['view']['display'] = 'lcbymentee_mentordashboard_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requestee user */
  $handler->display->display_options['arguments']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requestee_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requestee_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requestee_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'mentormenteedash';

  /* Display: Mentor Mentee Menu */
  $handler = $view->new_display('page', 'Mentor Mentee Menu', 'mentormentee_menu_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Mentees';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: My Status */
  $handler->display->display_options['fields']['field_check_in']['id'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['table'] = 'field_data_field_check_in';
  $handler->display->display_options['fields']['field_check_in']['field'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_check_in']['label'] = '';
  $handler->display->display_options['fields']['field_check_in']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_selection';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_selection';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = '[uid]';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requestee user */
  $handler->display->display_options['arguments']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requestee_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requestee_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requestee_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'mentormenteemenu';
  $export['dashboard_user_relationships_browser'] = $view;

  $view = new view();
  $view->name = 'endorsement_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Endorsement Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Endorsement Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'name',
    'field_endorsement_message' => 'field_endorsement_message',
    'created' => 'field_endorsement_message',
    'title' => 'title',
    'field_endorsement_badge' => 'field_endorsement_badge',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_endorsement_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_endorsement_badge' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'thumbnail';
  /* Field: Content: Send a Reward message! */
  $handler->display->display_options['fields']['field_endorsement_message']['id'] = 'field_endorsement_message';
  $handler->display->display_options['fields']['field_endorsement_message']['table'] = 'field_data_field_endorsement_message';
  $handler->display->display_options['fields']['field_endorsement_message']['field'] = 'field_endorsement_message';
  $handler->display->display_options['fields']['field_endorsement_message']['label'] = '';
  $handler->display->display_options['fields']['field_endorsement_message']['element_label_colon'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'uid';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<p>Posted On: [created]</p>';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Reward Badge */
  $handler->display->display_options['fields']['field_endorsement_badge']['id'] = 'field_endorsement_badge';
  $handler->display->display_options['fields']['field_endorsement_badge']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['fields']['field_endorsement_badge']['field'] = 'field_endorsement_badge';
  $handler->display->display_options['fields']['field_endorsement_badge']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_endorsement_badge']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3933';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['shs_enabled'] = 0;

  /* Display: Mentee Awesome */
  $handler = $view->new_display('page', 'Mentee Awesome', 'endorse_dashawesome_mentee_page');
  $handler->display->display_options['path'] = 'endorseawesome';

  /* Display: Mentee Demonstrated Leadership */
  $handler = $view->new_display('page', 'Mentee Demonstrated Leadership', 'endorse_dashdl_mentee_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3935';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['shs_enabled'] = 0;
  $handler->display->display_options['path'] = 'endorsedl';

  /* Display: Mentee Effective Communication */
  $handler = $view->new_display('page', 'Mentee Effective Communication', 'endorse_dashec_mentee_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3937';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['shs_enabled'] = 0;
  $handler->display->display_options['path'] = 'endorseec';

  /* Display: Mentee Great Teamwork */
  $handler = $view->new_display('page', 'Mentee Great Teamwork', 'endorse_dashgt_mentee_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3936';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['shs_enabled'] = 0;
  $handler->display->display_options['path'] = 'endorsegt';

  /* Display: Mentee Innovative Thinking */
  $handler = $view->new_display('page', 'Mentee Innovative Thinking', 'endorse_dashit_mentee_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3934';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['shs_enabled'] = 0;
  $handler->display->display_options['path'] = 'endorseit';
  $export['endorsement_dashboard'] = $view;

  $view = new view();
  $view->name = 'how_to_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'How to Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How to Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'filename' => 'filename',
    'link' => 'link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'filename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = 'How To Video';
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['value'] = 'mentortraining.mp4';

  /* Display: How to Video */
  $handler = $view->new_display('page', 'How to Video', 'how_to_video_page');
  $handler->display->display_options['path'] = 'how-to-videos';

  /* Display: Mentee How To */
  $handler = $view->new_display('block', 'Mentee How To', 'mentee_how_to_block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['value'] = 'menteetraining.mp4';
  $handler->display->display_options['block_description'] = 'Mentee How To';

  /* Display: Mentor How To */
  $handler = $view->new_display('block', 'Mentor How To', 'mentor_how_to_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How to Videos mentor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = 'How To Video';
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  $handler->display->display_options['block_description'] = 'Mentor How To';
  $export['how_to_videos'] = $view;

  $view = new view();
  $view->name = 'user_relationships_browser_json';
  $view->description = 'Shows someone\'s related users';
  $view->tag = '';
  $view->base_table = 'user_relationships';
  $view->human_name = 'user_relationships_browser json';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'plural_name' => 'plural_name',
    'picture' => 'picture',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'plural_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'avatar_selection';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'avatar_selection';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User relationships: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Matched';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'requester_id';
  /* Contextual filter: User relationships: Requester user */
  $handler->display->display_options['arguments']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requester_id']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requester_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requester_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requester_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['requester_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['validate']['type'] = 'numeric';
  /* Filter criterion: User relationships: Relationship status */
  $handler->display->display_options['filters']['approved']['id'] = 'approved';
  $handler->display->display_options['filters']['approved']['table'] = 'user_relationships';
  $handler->display->display_options['filters']['approved']['field'] = 'approved';
  $handler->display->display_options['filters']['approved']['value'] = '1';
  $handler->display->display_options['filters']['approved']['group'] = '0';
  $handler->display->display_options['filters']['approved']['expose']['operator'] = FALSE;

  /* Display: mentee list json  */
  $handler = $view->new_display('page', 'mentee list json ', 'mentee_list_json');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Communicate with your mentees';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '[picture]
[name]';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'mentormentee/[uid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = 'current_avatar';
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: My Status */
  $handler->display->display_options['fields']['field_check_in']['id'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['table'] = 'field_data_field_check_in';
  $handler->display->display_options['fields']['field_check_in']['field'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_check_in']['label'] = 'my_status';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'total_conversations';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {field_data_field_menteeauth} AS menteeauth LEFT JOIN {node} n ON n.nid = menteeauth.entity_id WHERE field_menteeauth_value = users_user_relationships_1_uid AND n.status = 1 )';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'total_mentor_unread';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'global $user;

$results = db_query("(SELECT SUM(mentor_unread) AS total_mentor_unread FROM (SELECT node1.nid AS nid, users_node.uid AS users_node_uid, \'node\' AS field_data_field_menteeauth_node_entity_type, (SELECT count(1) FROM {field_data_field_letschat_reference} ref LEFT JOIN {flagging} r ON r.entity_id = ref.field_letschat_reference_target_id LEFT JOIN {node} n ON n.nid = ref.entity_id WHERE r.fid = (SELECT fid FROM {flag} f WHERE f.name = \'flag_last_viewed_lets_chat\' LIMIT 1) AND r.uid != \'".$row->uid."\' AND ref.field_letschat_reference_target_id = node1.nid AND n.created > r.timestamp AND n.type = \'lets_chat_reply\' AND n.status = 1 LIMIT 1) AS mentor_unread
FROM 
{node} node1
LEFT JOIN {users} users_node ON node1.uid = users_node.uid
INNER JOIN {field_data_field_filtered} field_data_field_filtered ON node1.nid = field_data_field_filtered.entity_id AND field_data_field_filtered.entity_type = \'node\'
LEFT JOIN {field_data_field_menteeauth} field_data_field_menteeauth ON node1.nid = field_data_field_menteeauth.entity_id AND field_data_field_menteeauth.entity_type = \'node\'
LEFT JOIN {flagging} flagging_node_1 ON node1.nid = flagging_node_1.entity_id AND flagging_node_1.fid = (SELECT fid FROM flag fi WHERE fi.name = \'flag_reply_inappropriate\' LIMIT 1)
WHERE ( ((field_data_field_menteeauth.field_menteeauth_value = \'".$row->uid."\')) AND (flagging_node_1.uid IS NULL ) AND (((node1.type IN  (\'lets_chat\')) AND (field_data_field_filtered.field_filtered_value = \'no\') AND (node1.status = \'1\'))))) AS query2)");
$q1 = array();
foreach($results as $result){
 $q1[] = $result->total_mentor_unread;
}

/*return $q1[0];*/

$results2 = db_query("SELECT count(1) AS new_unread FROM {node} n 
LEFT JOIN {field_data_field_menteeauth} field_data_field_menteeauth ON n.nid = field_data_field_menteeauth.entity_id AND field_data_field_menteeauth.entity_type = \'node\'
LEFT JOIN {flagging} flagging_node_1 ON n.nid = flagging_node_1.entity_id 
AND flagging_node_1.fid = (SELECT fid FROM flag fi WHERE fi.name = \'flag_reply_inappropriate\' LIMIT 1) 
WHERE (flagging_node_1.uid IS NULL ) 
AND (field_data_field_menteeauth.field_menteeauth_value = \'".$row->uid."\')
AND type = \'lets_chat\' 
AND n.nid NOT IN (SELECT n.nid FROM {flagging} f LEFT JOIN {flag} fl ON fl.fid = f.fid LEFT JOIN {node} n ON n.nid = f.entity_id WHERE fl.name = \'flag_last_viewed_lets_chat\' AND f.uid = ".$user->uid." ) AND (n.status = \'1\')");

foreach($results2 as $result2){
 return $q1[0] + $result2->new_unread;
} ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_1']['label'] = 'requestee';
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requestee user */
  $handler->display->display_options['arguments']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requestee_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requestee_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requestee_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'mentee-list-json';
  $export['user_relationships_browser_json'] = $view;

  return $export;
}
