<?php
/**
 * @file
 * archive_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function archive_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mentorplace_archive';
  $view->description = 'Display a list of months that link to content for that month.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MentorPlace Archive';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Monthly archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title_field' => 'title_field',
    'name' => 'name',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'type' => 'type',
    'created' => 'created',
    'login' => 'login',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
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
    'field_taxonomy_tag' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'login' => array(
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'nothing here';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'activity::field_mparchive' => 'activity::field_mparchive',
          'activity_assigned_bylocation::field_mparchive' => 'activity_assigned_bylocation::field_mparchive',
          'activity_assignment::field_mparchive' => 'activity_assignment::field_mparchive',
          'act_assignment_resource::field_mparchive' => 'act_assignment_resource::field_mparchive',
          'activity_assignment_response::field_mparchive' => 'activity_assignment_response::field_mparchive',
          'curriculum::field_mparchive' => 'curriculum::field_mparchive',
          'lets_chat::field_mparchive' => 'lets_chat::field_mparchive',
          'lets_chat_reply::field_mparchive' => 'lets_chat_reply::field_mparchive',
          'master_curriculum::field_mparchive' => 'master_curriculum::field_mparchive',
          'endorsement::field_mparchive' => 'endorsement::field_mparchive',
        ),
      ),
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: mparchive */
  $handler->display->display_options['fields']['field_mparchive']['id'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['field'] = 'field_mparchive';
  $handler->display->display_options['fields']['field_mparchive']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Core Title';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['link_to_node'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Content Post date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'uid';
  $handler->display->display_options['fields']['login']['label'] = 'User Last login';
  $handler->display->display_options['fields']['login']['date_format'] = 'short';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Created year + month */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_year_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '100';
  $handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'uid';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
    'activity_assigned_bylocation' => 'activity_assigned_bylocation',
    'activity_assignment' => 'activity_assignment',
    'act_assignment_resource' => 'act_assignment_resource',
    'activity_assignment_response' => 'activity_assignment_response',
    'curriculum' => 'curriculum',
    'lets_chat' => 'lets_chat',
    'lets_chat_reply' => 'lets_chat_reply',
    'master_curriculum' => 'master_curriculum',
    'endorsement' => 'endorsement',
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
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'mparchivebydate_page');
  $handler->display->display_options['path'] = 'mparchive';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'archivebylocation_page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'uid';
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
  $handler->display->display_options['path'] = 'mparchivebylocation';

  /* Display: Endorsement */
  $handler = $view->new_display('page', 'Endorsement', 'archive_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EndorsementMonthly archive';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'uid';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'endorsement' => 'endorsement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'mparchivebyendorsement';
  $export['mentorplace_archive'] = $view;

  $view = new view();
  $view->name = 'mparchive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'mparchive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'newmparchive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: archivebylocation */
  $handler = $view->new_display('page', 'archivebylocation', 'archivebylocation_page');
  $handler->display->display_options['path'] = 'archivebylocation';

  /* Display: Activity/Curriculum By Location */
  $handler = $view->new_display('page', 'Activity/Curriculum By Location', 'archactivity_bylocation_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity by location';
  $handler->display->display_options['path'] = 'archactivitybylocation';

  /* Display: LetsChat By Location */
  $handler = $view->new_display('page', 'LetsChat By Location', 'archive_letschat_page1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'LetsChat by location';
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
    'lets_chat' => 'lets_chat',
    'lets_chat_reply' => 'lets_chat_reply',
  );
  $handler->display->display_options['path'] = 'archletschatbylocation';

  /* Display: Activity Assignment By Location */
  $handler = $view->new_display('page', 'Activity Assignment By Location', 'archive_letschat_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Assignment by location';
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
    'activity_assignment' => 'activity_assignment',
    'activity_assignment_response' => 'activity_assignment_response',
  );
  $handler->display->display_options['path'] = 'archactivityassignmentbylocation';

  /* Display: Endorsement By Location */
  $handler = $view->new_display('page', 'Endorsement By Location', 'archive_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Endorsement by location';
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
  $handler->display->display_options['path'] = 'archendorsementbylocation';
  $export['mparchive'] = $view;

  return $export;
}
