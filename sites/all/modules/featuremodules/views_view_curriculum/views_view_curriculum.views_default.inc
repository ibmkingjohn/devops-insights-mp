<?php
/**
 * @file
 * views_view_curriculum.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_curriculum_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'curriculum';
  $view->description = 'Curriculum Views: All Curriculum, My Curriculum';
  $view->tag = 'curriculum';
  $view->base_table = 'node';
  $view->human_name = 'Curriculum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Curriculum';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'nothing_1' => 'title',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
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
    'nothing_1' => array(
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
    'changed' => array(
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
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/all"class="active">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/assigned">Assigned Curriculum</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]/node/add/curriculum?destination=[current-page:url:path]" class="button">Add a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_activity' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_add_activity_assigned_bylocation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p>These are the scheduled program Activities available to mentors and mentees within the school curriculum. These Activities typically have an availability date. If the availability date is today or has passed, then the Activity is accessible by mentees and mentors.</p>
<iframe src=[site:url]curriculum/activity/[nid]" height="30" width="98%" frameborder="0" onload="resizeIframe(this)"></iframe>';
  $handler->display->display_options['fields']['nothing_1']['alter']['skipxss'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['roles'] = array(
    1 => 0,
    2 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Curricula Old */
  $handler = $view->new_display('page', 'Curricula Old', 'curriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula Old';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['path'] = 'curriculum/allold';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Curricula */
  $handler = $view->new_display('page', 'My Curricula', 'mycurricula_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Curricula';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Curricula';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no Curricula you create.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'curriculum/createdbymy';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Curricula';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: set activity curriculum */
  $handler = $view->new_display('page', 'set activity curriculum', 'act_curriculum_set_page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'nid' => 'nid',
    'title' => 'title',
    'name' => 'name',
    'field_curriculum_reference' => 'field_curriculum_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_curriculum_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity::field_curriculum_reference' => 'activity::field_curriculum_reference',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/activityset';

  /* Display: Curricula */
  $handler = $view->new_display('page', 'Curricula', 'curricula_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Below is a list of all Curricula on the site.</p>  Once you are ready to choose a Curriculum for a location, Click on the "Use this Curriculum" button within the Curriculum detail section</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="all"class="active">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="activities-assigned-by-location">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>
<p>';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Use This Curriculum';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'curricula-vbo';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_class'] = 'hidden';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_activity_assigned_bylocation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(\'nid\', $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'activites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author Username';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {users} users_node ON n.uid = users_node.uid
LEFT JOIN {field_data_field_curriculum_reference} field_data_field_curriculum_reference ON n.nid = field_data_field_curriculum_reference.entity_id AND (field_data_field_curriculum_reference.entity_type = \'node\' AND field_data_field_curriculum_reference.deleted = \'0\')
WHERE (( (field_data_field_curriculum_reference.field_curriculum_reference_target_id = node.nid ) )AND(( (n.type IN  (\'activity\')) AND (n.status = \'1\') )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/all_old';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Curricula */
  $handler = $view->new_display('page', 'My Curricula', 'curriculabyme_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Curricula';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global text Add Curriculum */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Global text Add Curriculum';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>This page list all Curricula created by you.</p><p>You can create more by clicking the "Add a Curriculum" button or choose an existing Activity by clicking "Choose An Existing Activity" button.  If you need to edit any activities, expand the Curriculum and click the "edit" link in the table next to the activity.</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="curriculum_filtered">All Curricula</a></li>
 <li><a href="createdbyme" class="active">My Curricula</a></li>
<li><a href="activities-assigned-by-location">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>
<p><a href="[site:url]node/add/curriculum?destination=[current-page:url:path]" class="button">Create a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Curriculum Title/Description';
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Is Curriculum Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'UnPublish Curriculum';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publish Curriculum';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global text Create an Activity */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global text Create an Activity';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '</br><a href="[site:url]node/add/activity?destination=[current-page:url:path]&field_curriculum_reference=[nid]" class="button">Create An Activity</a>';
  $handler->display->display_options['fields']['nothing']['alter']['skipxss'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_class'] = 'add-activity-btn';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['roles'] = array(
    1 => 0,
    2 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Field: Global Text Choose an Activity */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global Text Choose an Activity';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</br><a href="[site:url]curriculum/adminactivities?destination=[current-page:url:path]&field_curriculum_reference=[nid]" class="button">Choose An Existing Activity</a>';
  $handler->display->display_options['fields']['nothing_1']['alter']['skipxss'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['roles'] = array(
    1 => 0,
    2 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Field: My Activities View Embed */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'My Activities View Embed';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'curric-activities';
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'myactivites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author Username';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/createdbyme';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Curricula */
  $handler = $view->new_display('page', 'My Curricula', 'assignedactcurriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Assigned Curricula';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]/node/add/curriculum?destination=[current-page:url:path]" class="button">Add a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/alljwk">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme" class="active">My Curricula</a></li>
<li><a href="../curriculum/assigned">Assigned Curriculum</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'assigned_curriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'curriculum/createdbymeassigned';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer Curricula */
  $handler = $view->new_display('page', 'Administer Curricula', 'staffadminadminister_curricula_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Administer Curricula';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/all">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/activities-assigned-by-location">Manage Assigned Curriculum by Location</a></li>
<li><a href="../curriculum/managecurricula" class="active">Manage Curricula</a></li>

  </ul>
  <div class="clear"></div>
</div>';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]/node/add/curriculum?destination=[current-page:url:path]" class="button">Add a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_master_curriculum']['id'] = 'field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['field'] = 'field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_master_curriculum']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit This Curriculum';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Is Curriculum Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'UnPublish Curriculum';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publish Curriculum';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(nid, $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'myactivites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/managecurricula';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Curricula Selection */
  $handler = $view->new_display('page', 'My Curricula Selection', 'curricula_selection');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Curricula Selection';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>This page list all Curricula created by you.</p><p>You can create more by clicking the "Add a Curriculum" button.  If you need to edit any activities, expand the Curriculum and click the "edit" link in the table next to the activity.</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="all">All Curricula</a></li>
 <li><a href="createdbyme" class="active">My Curricula</a></li>
<li><a href="activities-assigned-by-location">Manage Assigned Curriculum by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]/node/add/curriculum?destination=[current-page:url:path]" class="button">Add a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/createdbyme_select';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Master Curricula */
  $handler = $view->new_display('page', 'Master Curricula', 'master_curriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'lite';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global Text Tab Menu */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Global Text Tab Menu';
  $handler->display->display_options['header']['area']['content'] = '<p>Below is a list of all Curricula on the site.</p>  <p>Once you are ready to choose a Curriculum for a location, Click on the "Use this Curriculum" button within the Curriculum detail section.
</br><strong>Please note:</strong> If you need to add an activity to a Curriculum that has already been assigned to a location, click on the "Manage Assigned Curriculum by Location" tab and find the location where you want to add the activity. Use the "Add Activity" button at the top of the page, create the activity, and select Save. This will add the new activity to the location as well as to the Curriculum.</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="all"class="active">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="activities-assigned-by-location">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>
<p>';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum';
  $handler->display->display_options['fields']['view']['display'] = 'curriculum_new_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_curriculum' => 'master_curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Curricula New */
  $handler = $view->new_display('page', 'Curricula New', 'curriculum_new_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula New';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Use This Curriculum';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'curricula-vbo';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_class'] = 'hidden';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_activity_assigned_bylocation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(\'nid\', $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'activites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author:';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Categories (field_master_curriculum) */
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['id'] = 'field_master_curriculum_target_id';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['field'] = 'field_master_curriculum_target_id';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {users} users_node ON n.uid = users_node.uid
LEFT JOIN {field_data_field_curriculum_reference} field_data_field_curriculum_reference ON n.nid = field_data_field_curriculum_reference.entity_id AND (field_data_field_curriculum_reference.entity_type = \'node\' AND field_data_field_curriculum_reference.deleted = \'0\')
WHERE (( (field_data_field_curriculum_reference.field_curriculum_reference_target_id = node.nid ) )AND(( (n.type IN  (\'activity\')) AND (n.status = \'1\') )))) > 0';
  $handler->display->display_options['path'] = 'curriculum-new/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Curriculum Categories */
  $handler = $view->new_display('page', 'Curriculum Categories', 'curriculum_categories_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula Categories';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
    'edit_node' => 'edit_node',
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
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
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
    'changed' => array(
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
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'master_curriculum' => 'master_curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/curriculumcategory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum Categories';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-curriculum';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Administer Curricula JWK */
  $handler = $view->new_display('page', 'Administer Curricula JWK', 'staffadminadminister_curriculajwk_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Administer Curricula JWK';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/all">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/activities-assigned-by-location">Manage Assigned Curriculum by Location</a></li>
<li><a href="../curriculum/managecurricula" class="active">Manage Curricula</a></li>

  </ul>
  <div class="clear"></div>
</div>';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add Curriculum';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]/node/add/curriculum?destination=[current-page:url:path]" class="button">Add a Curriculum</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['roles'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    4 => '4',
    1 => 0,
    2 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_master_curriculum']['id'] = 'field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['field'] = 'field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_master_curriculum']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit This Curriculum';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Curriculum';
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Is Curriculum Published';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publishcontent']['unpublish'] = 'UnPublish Curriculum';
  $handler->display->display_options['fields']['publishcontent']['publish'] = 'Publish Curriculum';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(nid, $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'myactivites_bycurriculumjwk_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'curriculum/managecurriculajwk';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Curricula Filtered */
  $handler = $view->new_display('page', 'Curricula Filtered', 'curricula_filtered_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Curricula';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select any Category and click on Apply to see Curricula';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Once you are ready to choose a Curriculum for a location, Click on the "Use this Curriculum" button within the Curriculum detail section.
</br><strong>Please note:</strong> If you need to add an activity to a Curriculum that has already been assigned to a location, click on the "Manage Assigned Curriculum by Location" tab and find the location where you want to add the activity. Use the "Add Activity" button at the top of the page, create the activity, and select Save. This will add the new activity to the location as well as to the Curriculum.</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="filtered"class="active">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="activities-assigned-by-location">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>
<p>';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Use This Curriculum';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'curricula-vbo';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_class'] = 'hidden';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_activity_assigned_bylocation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(\'nid\', $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'activites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Categories (editable) */
  $handler->display->display_options['fields']['field_master_curriculum_editable']['id'] = 'field_master_curriculum_editable';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['field'] = 'field_master_curriculum_editable';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_master_curriculum_editable']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_master_curriculum_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_master_curriculum_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Categories (field_master_curriculum) */
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['id'] = 'field_master_curriculum_target_id';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['field'] = 'field_master_curriculum_target_id';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_master_curriculum_target_id']['validate_options']['types'] = array(
    'master_curriculum' => 'master_curriculum',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {users} users_node ON n.uid = users_node.uid
LEFT JOIN {field_data_field_curriculum_reference} field_data_field_curriculum_reference ON n.nid = field_data_field_curriculum_reference.entity_id AND (field_data_field_curriculum_reference.entity_type = \'node\' AND field_data_field_curriculum_reference.deleted = \'0\')
WHERE (( (field_data_field_curriculum_reference.field_curriculum_reference_target_id = node.nid ) )AND(( (n.type IN  (\'activity\')) AND (n.status = \'1\') )))) > 0';
  /* Filter criterion: Categories (field_master_curriculum) (selective) */
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['id'] = 'field_master_curriculum_target_id_selective';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['field'] = 'field_master_curriculum_target_id_selective';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['ui_name'] = 'Categories (field_master_curriculum) (selective)';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['expose']['label'] = 'Curriculum Categories ';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['expose']['identifier'] = 'field_master_curriculum_target_id_selective';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['selective_display_field'] = 'field_master_curriculum_editable';
  $handler->display->display_options['filters']['field_master_curriculum_target_id_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'curriculum/filtered';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Curricula I Created  */
  $handler = $view->new_display('page', 'Curricula I Created ', 'curricula_my_created');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curricula I Created';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_curriculum_description' => 'field_curriculum_description',
    'nid' => 'nid',
    'php' => 'php',
    'view' => 'view',
    'created' => 'created',
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have not created a curriculum.
<a href="/node/add/curriculum?destination=curriculum/createdbyme" class="button">Create a curriculum</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['roles'] = array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Use This Curriculum';
  $handler->display->display_options['fields']['views_bulk_operations']['element_class'] = 'curricula-vbo';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_class'] = 'hidden';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_activity_assigned_bylocation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Curriculum Description */
  $handler->display->display_options['fields']['field_curriculum_description']['id'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['table'] = 'field_data_field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['field'] = 'field_curriculum_description';
  $handler->display->display_options['fields']['field_curriculum_description']['element_wrapper_class'] = 'all-curricula-desc';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Add Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Add Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
$entityfieldid  = $view->render_field(\'nid\', $view->row_index);
  $url = "node/add/activity/";
  echo "<br>";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,drupal_get_destination())
  	));
 echo "<br>";
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_activity';
  $handler->display->display_options['fields']['view']['display'] = 'activites_bycurriculum_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Categories (editable) */
  $handler->display->display_options['fields']['field_master_curriculum_editable']['id'] = 'field_master_curriculum_editable';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['table'] = 'field_data_field_master_curriculum';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['field'] = 'field_master_curriculum_editable';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_master_curriculum_editable']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_master_curriculum_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_master_curriculum_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_master_curriculum_editable']['suppress_description'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {users} users_node ON n.uid = users_node.uid
LEFT JOIN {field_data_field_curriculum_reference} field_data_field_curriculum_reference ON n.nid = field_data_field_curriculum_reference.entity_id AND (field_data_field_curriculum_reference.entity_type = \'node\' AND field_data_field_curriculum_reference.deleted = \'0\')
WHERE (( (field_data_field_curriculum_reference.field_curriculum_reference_target_id = node.nid ) )AND(( (n.type IN  (\'activity\')) AND (n.status = \'1\') )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/my_created';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Curriculum';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['curriculum'] = $view;

  $view = new view();
  $view->name = 'curriculum_activity';
  $view->description = 'Curriculum Views: Activities by Curricula';
  $view->tag = 'curriculum';
  $view->base_table = 'node';
  $view->human_name = 'Activities by Curricula';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities by Curricula';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_curriculum_reference' => 'field_curriculum_reference',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'field_activity_age' => 'field_activity_age',
    'field_activity_grade' => 'field_activity_grade',
    'field_topic_tag' => 'field_topic_tag',
    'field_subject' => 'field_subject',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_curriculum_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_age' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_grade' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic_tag' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Activities';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities for this Curricula.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Draggableviews: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Activity Order (field_activity_order) */
  $handler->display->display_options['sorts']['field_activity_order_value']['id'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['sorts']['field_activity_order_value']['field'] = 'field_activity_order_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Curriculum (field_curriculum_reference) */
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['id'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['field'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Activities by Curriculum */
  $handler = $view->new_display('page', 'Activities by Curriculum', 'curriculumactivity_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['path'] = 'curriculum/activity';

  /* Display: Activities by Curriculum Jwk */
  $handler = $view->new_display('page', 'Activities by Curriculum Jwk', 'activites_bycurriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '3600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'activity' => 'activity',
      'activity_assigned_bylocation' => 0,
      'activity_assignment' => 0,
      'act_assignment_resource' => 0,
      'article' => 0,
      'page' => 0,
      'blog' => 0,
      'calendar_event' => 0,
      'code_of_conduct' => 0,
      'custom_contact_us' => 0,
      'curriculum' => 0,
      'customdashboard' => 0,
      'endorsement' => 0,
      'faq' => 0,
      'forum' => 0,
      'mentor_request_explanation' => 0,
      'mentor_request_rejection' => 0,
      'panel' => 0,
      'subsite_settings' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'votingapi' => array(
      'tag:vote' => 0,
      'function:count' => 0,
      'function:average' => 0,
      'function:sum' => 0,
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'curriculum/activityjwk';

  /* Display: All Activities */
  $handler = $view->new_display('page', 'All Activities', 'chooseactivity_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_activity_age_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_activity_grade_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_topic_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_subject_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'field_topic_tag_1' => 'field_topic_tag_1',
    'field_subject' => 'field_subject',
    'field_curriculum_reference' => 'field_curriculum_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic_tag_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_curriculum_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Add Activity to Curriculum',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity::field_curriculum_reference' => 'activity::field_curriculum_reference',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Topic Tag */
  $handler->display->display_options['fields']['field_topic_tag_1']['id'] = 'field_topic_tag_1';
  $handler->display->display_options['fields']['field_topic_tag_1']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag_1']['field'] = 'field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic_tag_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_tag_1']['settings'] = array(
    'linked' => 0,
  );
  $handler->display->display_options['fields']['field_topic_tag_1']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Age (field_activity_age) */
  $handler->display->display_options['filters']['field_activity_age_tid']['id'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['table'] = 'field_data_field_activity_age';
  $handler->display->display_options['filters']['field_activity_age_tid']['field'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator_id'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['identifier'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_age_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_age_tid']['vocabulary'] = 'mentee_age';
  /* Filter criterion: Content: Grade (field_activity_grade) */
  $handler->display->display_options['filters']['field_activity_grade_tid']['id'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['table'] = 'field_data_field_activity_grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['field'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_grade_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator_id'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['identifier'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_grade_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_grade_tid']['vocabulary'] = 'grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Topic Tag (field_topic_tag) */
  $handler->display->display_options['filters']['field_topic_tag_tid']['id'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['filters']['field_topic_tag_tid']['field'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_topic_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator_id'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['identifier'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tag_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tag_tid']['use_chosen'] = 'chosen';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_subject_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'activity_subjects';
  $handler->display->display_options['filters']['field_subject_tid']['use_chosen'] = 'always';
  $handler->display->display_options['path'] = 'curriculum/chooseactivity';

  /* Display: Activities List */
  $handler = $view->new_display('page', 'Activities List', 'admin_pic_activities_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Activities';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_activity_age_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_activity_grade_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_topic_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_curriculum_reference' => 'field_curriculum_reference',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'field_activity_age' => 'field_activity_age',
    'field_activity_grade' => 'field_activity_grade',
    'field_topic_tag' => 'field_topic_tag',
    'field_subject' => 'field_subject',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_curriculum_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_age' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_grade' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic_tag' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::clone_action_clone' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Add To Curriculum',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_activity_age']['id'] = 'field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['table'] = 'field_data_field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['field'] = 'field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_activity_age']['delta_offset'] = '0';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_activity_grade']['id'] = 'field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['table'] = 'field_data_field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['field'] = 'field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_activity_grade']['delta_offset'] = '0';
  /* Field: Content: Topic Tag */
  $handler->display->display_options['fields']['field_topic_tag']['id'] = 'field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['field'] = 'field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_tag']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Age (field_activity_age) */
  $handler->display->display_options['filters']['field_activity_age_tid']['id'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['table'] = 'field_data_field_activity_age';
  $handler->display->display_options['filters']['field_activity_age_tid']['field'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_activity_age_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator_id'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['identifier'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_age_tid']['vocabulary'] = 'mentee_age';
  $handler->display->display_options['filters']['field_activity_age_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Grade (field_activity_grade) */
  $handler->display->display_options['filters']['field_activity_grade_tid']['id'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['table'] = 'field_data_field_activity_grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['field'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_activity_grade_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_grade_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator_id'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['identifier'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_grade_tid']['vocabulary'] = 'grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Topic Tag (field_topic_tag) */
  $handler->display->display_options['filters']['field_topic_tag_tid']['id'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['filters']['field_topic_tag_tid']['field'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_topic_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_topic_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator_id'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['label'] = 'Topic Tag';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['identifier'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tag_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tag_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'activity_subjects';
  $handler->display->display_options['filters']['field_subject_tid']['use_chosen'] = 'always';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '5612',
    1 => '5545',
    2 => '5614',
    3 => '6127',
    4 => '6168',
  );
  $handler->display->display_options['path'] = 'curriculum/adminactivities';

  /* Display: Manage Activities */
  $handler = $view->new_display('page', 'Manage Activities', 'manage_activities_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Activities';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_activity_age_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_activity_grade_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_topic_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Modify Activity Tags',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity::field_topic_tag' => 'activity::field_topic_tag',
          'activity::field_activity_age' => 'activity::field_activity_age',
          'activity::field_activity_grade' => 'activity::field_activity_grade',
          'activity::field_activity_order' => 'activity::field_activity_order',
          'activity::field_curriculum_reference' => 'activity::field_curriculum_reference',
          'activity::field_subject' => 'activity::field_subject',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_activity_age']['id'] = 'field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['table'] = 'field_data_field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['field'] = 'field_activity_age';
  $handler->display->display_options['fields']['field_activity_age']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_activity_age']['delta_offset'] = '0';
  /* Field: Content: Grade */
  $handler->display->display_options['fields']['field_activity_grade']['id'] = 'field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['table'] = 'field_data_field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['field'] = 'field_activity_grade';
  $handler->display->display_options['fields']['field_activity_grade']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_activity_grade']['delta_offset'] = '0';
  /* Field: Content: Topic Tag */
  $handler->display->display_options['fields']['field_topic_tag']['id'] = 'field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['field'] = 'field_topic_tag';
  $handler->display->display_options['fields']['field_topic_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic_tag']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Age (field_activity_age) */
  $handler->display->display_options['filters']['field_activity_age_tid']['id'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['table'] = 'field_data_field_activity_age';
  $handler->display->display_options['filters']['field_activity_age_tid']['field'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_activity_age_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_age_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator_id'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['label'] = 'Age';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['operator'] = 'field_activity_age_tid_op';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['identifier'] = 'field_activity_age_tid';
  $handler->display->display_options['filters']['field_activity_age_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_age_tid']['vocabulary'] = 'mentee_age';
  $handler->display->display_options['filters']['field_activity_age_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Grade (field_activity_grade) */
  $handler->display->display_options['filters']['field_activity_grade_tid']['id'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['table'] = 'field_data_field_activity_grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['field'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_activity_grade_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_activity_grade_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator_id'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['operator'] = 'field_activity_grade_tid_op';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['identifier'] = 'field_activity_grade_tid';
  $handler->display->display_options['filters']['field_activity_grade_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_activity_grade_tid']['vocabulary'] = 'grade';
  $handler->display->display_options['filters']['field_activity_grade_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Topic Tag (field_topic_tag) */
  $handler->display->display_options['filters']['field_topic_tag_tid']['id'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['table'] = 'field_data_field_topic_tag';
  $handler->display->display_options['filters']['field_topic_tag_tid']['field'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_topic_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_topic_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator_id'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['label'] = 'Topic Tag';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['operator'] = 'field_topic_tag_tid_op';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['identifier'] = 'field_topic_tag_tid';
  $handler->display->display_options['filters']['field_topic_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tag_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tag_tid']['use_chosen'] = 'always';
  /* Filter criterion: Content: Subject (field_subject) */
  $handler->display->display_options['filters']['field_subject_tid']['id'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['table'] = 'field_data_field_subject';
  $handler->display->display_options['filters']['field_subject_tid']['field'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator_id'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['operator'] = 'field_subject_tid_op';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['identifier'] = 'field_subject_tid';
  $handler->display->display_options['filters']['field_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_subject_tid']['vocabulary'] = 'activity_subjects';
  $handler->display->display_options['filters']['field_subject_tid']['use_chosen'] = 'always';
  $handler->display->display_options['path'] = 'curriculum/manageactvities';

  /* Display: My Activities by Curriculum sort */
  $handler = $view->new_display('page', 'My Activities by Curriculum sort', 'myactivites_bycurriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Activities';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'draggableviews' => 'draggableviews',
    'field_activity_order' => 'field_activity_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_activity_order:field_activity_order_value',
  );
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'curriculum/myactivities';

  /* Display: My Activities by Curriculum JWK */
  $handler = $view->new_display('page', 'My Activities by Curriculum JWK', 'myactivites_bycurriculumjwk_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Activities JWK';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'draggableviews' => 'draggableviews',
    'field_activity_order' => 'field_activity_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '90%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_activity_order:field_activity_order_value',
  );
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'curriculum/myactivitiesjwk';
  $export['curriculum_activity'] = $view;

  $view = new view();
  $view->name = 'curriculum_assigned';
  $view->description = 'Curriculum Views: Assigned Curriculum';
  $view->tag = 'curriculum';
  $view->base_table = 'node';
  $view->human_name = 'Assigned Curriculum';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assigned Curriculum';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_taxonomy_tag' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['id'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['field'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_activity_reference_target_id']['label'] = 'field_activity_reference';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_curriculum_reference_target_id']['id'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['relationships']['field_curriculum_reference_target_id']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['relationships']['field_curriculum_reference_target_id']['field'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['relationships']['field_curriculum_reference_target_id']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['relationships']['field_curriculum_reference_target_id']['label'] = 'field_curriculum_reference';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Ativity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Activity Order (field_activity_order) */
  $handler->display->display_options['sorts']['field_activity_order_value']['id'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['sorts']['field_activity_order_value']['field'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['relationship'] = 'field_activity_reference_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['expose']['label'] = 'Location/Class (field_taxonomy_tag)';
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';

  /* Display: Assigned Curriculum */
  $handler = $view->new_display('page', 'Assigned Curriculum', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mangage Assigned Curriculum by Locations';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/alljwk">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/assigned"class="active">Assigned Curriculum</a></li>
<li><a href="../curriculum/manageassigned">Manage Assigned Curriculum</a></li>
<li><a href="../curriculum/activities-assigned-by-location">Assigned Curriculum by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  $handler->display->display_options['path'] = 'curriculum/assigned';

  /* Display: My Assigned Curriculum */
  $handler = $view->new_display('page', 'My Assigned Curriculum', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Assigned Curriculum';
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
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'curriculum/myassigned';

  /* Display: Assigned Curriculum jwk */
  $handler = $view->new_display('page', 'Assigned Curriculum jwk', 'assigned_curriculum_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_taxonomy_tag' => array(
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Ativity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['type'] = 'editable';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: mparchive */
  $handler->display->display_options['fields']['field_mparchive']['id'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['field'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'curriculum_assigned:assignedbylocation_test_page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['expose']['label'] = 'Location/Class (field_taxonomy_tag)';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'curriculum/assignedjwk';

  /* Display: Assigned Curriculum */
  $handler = $view->new_display('page', 'Assigned Curriculum', 'assignedbylocation_test_page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'status' => 'status',
    'field_activity_order' => 'field_activity_order',
    'nid_2' => 'nid_2',
    'field_curriculum_reference' => 'field_curriculum_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_curriculum_reference' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]node/add/activity?destination=[current-page:url:path]&field_curriculum_reference=[nid_2]&field_taxonomy_tag=!1" class="button">Add An Activity</a></p>
It is recommended to only have five activities available at a time.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Available Date',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_activity_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curriculum_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_mparchive_value']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/assignedtest';

  /* Display: Manage Assigned Curricula */
  $handler = $view->new_display('page', 'Manage Assigned Curricula', 'manageassign_curriculum_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Assigned Curriculum by Location';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/alljwk">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/activities-assigned-by-location">Manage Assigned Curriculum by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Activities Available Date',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish Activities for Users',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish Activities for Users',
    ),
  );
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Ativity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['rel'] = 'width=600&height=600';
  $handler->display->display_options['fields']['edit_node']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['sorts']['field_taxonomy_tag_tid']['expose']['label'] = 'Location/Class (field_taxonomy_tag)';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/manageassigned';

  /* Display: Assigned Curriculum */
  $handler = $view->new_display('page', 'Assigned Curriculum', 'mgr_assignedbyloc_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_taxonomy_tag' => array(
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Change Available Date or Location',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
          'activity_assigned_bylocation::field_taxonomy_tag' => 'activity_assigned_bylocation::field_taxonomy_tag',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/mgrassignedbyloc';

  /* Display: Assigned Curriculum Sort */
  $handler = $view->new_display('page', 'Assigned Curriculum Sort', 'assignedbylocationsort_test_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'php' => 'php',
    'status' => 'status',
    'field_activity_order' => 'field_activity_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
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
  /* Header: Add An Activity */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Add An Activity';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
//print(\'<pre>\');
$entityfieldid=$results[\'0\']->node_field_data_field_curriculum_reference_nid;
//$results[\'0\']->field_taxonomy_tag[\'0\'][\'raw\'][\'tid\'];
$entityfieldtid=$results[\'0\']->field_field_taxonomy_tag[\'0\'][\'raw\'][\'tid\'];
//print(\'</pre>\');
  $url = "node/add/activity/";
  echo "<br />";
echo l(t(\'Add An Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_curriculum_reference"=>$entityfieldid,"field_taxonomy_tag"=>$entityfieldtid,drupal_get_destination())
  	));
 echo "<br /><br />";
}
?> ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Change Available Date',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['php']['element_class'] = 'views-field-delete-node';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$result = db_query("SELECT entity_id FROM {field_data_field_activity_entity_ref} WHERE field_activity_entity_ref_target_id = :nid LIMIT 1", array(\':nid\' => $row->nid));
foreach($result as $record){
if($record->entity_id){
return(1);
}
}';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
global $base_url;
$current_path = current_path();
if($value != 1){
echo \'<a href="\'.$base_url.\'/node/\'.$row->nid_1.\'/delete?destination=\'.$current_path.\'">Delete</a>\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_handler_fieldapi';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Update Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['draggableviews_handler_fieldapi'] = array(
    'field' => 'field_data_field_activity_order:field_activity_order_value',
  );
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Activity Order (field_activity_order) */
  $handler->display->display_options['sorts']['field_activity_order_value']['id'] = 'field_activity_order_value';
  $handler->display->display_options['sorts']['field_activity_order_value']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['sorts']['field_activity_order_value']['field'] = 'field_activity_order_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/assignedtestsort';

  /* Display: Assigned Curriculum jwk del */
  $handler = $view->new_display('page', 'Assigned Curriculum jwk del', 'mgr_assignedbylocjwk_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assigned Curriculum jwk del';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'status' => 'status',
    'field_mparchive' => 'field_mparchive',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mparchive' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Change Available Date or Location',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
          'activity_assigned_bylocation::field_taxonomy_tag' => 'activity_assigned_bylocation::field_taxonomy_tag',
          'activity_assigned_bylocation::field_mparchive' => 'activity_assigned_bylocation::field_mparchive',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: mparchive */
  $handler->display->display_options['fields']['field_mparchive']['id'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['field'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/mgrassignedbylocjwk';

  /* Display: Curriculum Validation */
  $handler = $view->new_display('page', 'Curriculum Validation', 'curriculum_validation');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curriculum Validation';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  /* Contextual filter: Content: Curriculum (field_curriculum_reference) */
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['id'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['field'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_curriculum_reference_target_id']['validate_options']['types'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_mparchive_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_mparchive_value']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/validate';

  /* Display: Assigned Curriculum Remove */
  $handler = $view->new_display('page', 'Assigned Curriculum Remove', 'activityassignedremove_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assigned Curriculum Remove';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '3600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'activity_assigned_bylocation' => 'activity_assigned_bylocation',
      'activity' => 0,
      'activity_assignment' => 0,
      'act_assignment_resource' => 0,
      'article' => 0,
      'page' => 0,
      'blog' => 0,
      'calendar_event' => 0,
      'code_of_conduct' => 0,
      'custom_contact_us' => 0,
      'curriculum' => 0,
      'customdashboard' => 0,
      'endorsement' => 0,
      'faq' => 0,
      'forum' => 0,
      'mentor_request_explanation' => 0,
      'mentor_request_rejection' => 0,
      'panel' => 0,
      'subsite_settings' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'votingapi' => array(
      'tag:vote' => 0,
      'function:count' => 0,
      'function:average' => 0,
      'function:sum' => 0,
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'php' => 'php',
    'status' => 'status',
    'field_activity_order' => 'field_activity_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Available Date',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_class'] = 'views-field-delete-node';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$result = db_query("SELECT entity_id FROM {field_data_field_activity_entity_ref} WHERE field_activity_entity_ref_target_id = :nid LIMIT 1", array(\':nid\' => $row->nid));
foreach($result as $record){
if($record->entity_id){
return(1);
}
}';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
global $base_url;
$current_path = current_path();
if($value != 1){
echo \'<a href="\'.$base_url.\'/node/\'.$row->nid_1.\'/delete?destination=\'.$current_path.\'">Delete</a>\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_activity_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/assignedremove';

  /* Display: Curriculum Entity Reference */
  $handler = $view->new_display('entityreference', 'Curriculum Entity Reference', 'curriculum_entity_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Curriculum Entity Reference';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title_1' => 'title_1',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
if(in_array("Group Admin", $user->roles)){
return $user->uid;
}else{
return "all";
}';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum' => 'curriculum',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Admin Assigned Curriculum */
  $handler = $view->new_display('page', 'Admin Assigned Curriculum', 'admin_activities_assigned_location');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mangage Assigned Curriculum by Locations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="../curriculum/alljwk">All Curricula</a></li>
 <li><a href="../curriculum/createdbyme">My Curricula</a></li>
<li><a href="../curriculum/assigned"class="active">Assigned Curriculum</a></li>
<li><a href="../curriculum/manageassigned">Manage Assigned Curriculum</a></li>
<li><a href="../curriculum/activities-assigned-by-location">Assigned Curriculum by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Ativity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Curriculum';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'curriculum/admin-assigned-by-location';

  /* Display: Assigned Curriculumtestjwk */
  $handler = $view->new_display('page', 'Assigned Curriculumtestjwk', 'assignedbylocation_testjwk_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assigned Curriculumtestjwk';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_taxonomy_tag',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_available_date' => 'field_available_date',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'php' => 'php',
    'status' => 'status',
    'field_activity_order' => 'field_activity_order',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_available_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_order' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[site:url]node/add/activity?destination=[current-page:url:path]&field_curriculum_reference=[nid_2]&field_taxonomy_tag=!1" class="button">Add An Activity</a></p>
It is recommended to only have five activities available at a time.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change Available Date',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'activity_assigned_bylocation::field_available_date' => 'activity_assigned_bylocation::field_available_date',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish Activities',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish Activities',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Curricula';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_activity_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_curriculum_reference_target_id';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_rel'] = '';
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curriculum_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_mparchive_value']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'curriculum/assignedtestjwk';
  $export['curriculum_assigned'] = $view;

  return $export;
}
