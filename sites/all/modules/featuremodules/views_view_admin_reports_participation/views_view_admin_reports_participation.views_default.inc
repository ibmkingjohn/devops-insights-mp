<?php
/**
 * @file
 * views_view_admin_reports_participation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_admin_reports_participation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_reports_mentee_participation';
  $view->description = 'Admin Mentee Participation Reports';
  $view->tag = 'reports';
  $view->base_table = 'users';
  $view->human_name = 'Admin Reports: Mentee Participation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentee Participation';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_last_name_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'uid' => array(
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
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_taxonomy_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
    'raw_field_7' => 'raw_field_7',
    'login' => 'login',
    'raw_field' => 'raw_field',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
    'raw_field_3' => 'raw_field_3',
    'php' => 'php',
    'raw_field_6' => 'raw_field_6',
    'raw_field_5' => 'raw_field_5',
    'raw_field_4' => 'raw_field_4',
    'raw_field_8' => 'raw_field_8',
    'raw_field_9' => 'raw_field_9',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
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
    'raw_field_7' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_8' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_9' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requestee_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requestee_id WHERE ur.requester_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Post Count';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {comment} c LEFT JOIN {node} n ON c.nid = n.nid WHERE (c.uid = users.uid ) AND (n.type IN  (\'activity_assignment\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_taxonomy_tag_tid';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: User: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
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
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
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
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['id'] = 'field_taxonomy_tag_tid_1';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';

  /* Display: Mentee Participation */
  $handler = $view->new_display('page', 'Mentee Participation', 'admin_menteepart_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>*Post count is a count of all comments the user has posted to any activity</p>
';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['roles'] = array(
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requestee_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requestee_id WHERE ur.requester_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Post Count*';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT count(1) FROM {node} n WHERE (n.uid = users.uid ) AND (n.type IN  (\'activity_assignment_response\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  $handler->display->display_options['path'] = 'reports/adminmenteeparticipation';

  /* Display: Mentee Prticipation Data export CSV */
  $handler = $view->new_display('views_data_export', 'Mentee Prticipation Data export CSV', 'admin_menteepart_data_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentee Participation';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mentee Participation.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentor';
  $handler->display->display_options['fields']['raw_field_7']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requestee_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requestee_id WHERE ur.requester_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Post Count';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT count(1) FROM {node} n WHERE (n.uid = users.uid ) AND (n.type IN  (\'activity_assignment_response\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = users.uid) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'reports/adminmenteeparticipation/menteeparticipation.csv';
  $handler->display->display_options['displays'] = array(
    'admin_menteepart_page' => 'admin_menteepart_page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '219';
  $export['admin_reports_mentee_participation'] = $view;

  $view = new view();
  $view->name = 'admin_reports_mentor_participation';
  $view->description = 'Admin Mentor Participation Reports';
  $view->tag = 'reports';
  $view->base_table = 'users';
  $view->human_name = 'Admin Reports: Mentor Participation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentor Participation';
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
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_last_name_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'uid' => array(
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
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_taxonomy_tag_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
    'raw_field_7' => 'raw_field_7',
    'login' => 'login',
    'raw_field' => 'raw_field',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
    'raw_field_6' => 'raw_field_6',
    'raw_field_5' => 'raw_field_5',
    'raw_field_4' => 'raw_field_4',
    'raw_field_3' => 'raw_field_3',
    'raw_field_8' => 'raw_field_8',
    'raw_field_9' => 'raw_field_9',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
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
    'raw_field_7' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_6' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_8' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'raw_field_9' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentee';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentee';
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requester_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requester_id WHERE ur.requestee_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Post Count';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {comment} c LEFT JOIN {node} n ON c.nid = n.nid WHERE (c.uid = users.uid ) AND (n.type IN  (\'activity_assignment\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT ur.requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_8']['id'] = 'raw_field_8';
  $handler->display->display_options['fields']['raw_field_8']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_8']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_8']['label'] = 'Time Spent';
  $handler->display->display_options['fields']['raw_field_8']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field_8']['raw_sql'] = '(SELECT CEILING(timespent/60) FROM {time_spent_site} tss WHERE tss.uid=users.uid)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_6']['id'] = 'raw_field_6';
  $handler->display->display_options['fields']['raw_field_6']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_6']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_6']['label'] = 'oldTime Spent';
  $handler->display->display_options['fields']['raw_field_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['raw_field_6']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field_6']['raw_sql'] = '(SELECT CEILING(SUM(tte.duration)) FROM time_tracker_entry tte WHERE tte.uid=users.uid)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Login Count';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT stats.value FROM user_stats_values stats WHERE stats.uid=users.uid AND stats.name=\'login_count\')';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_taxonomy_tag_tid';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: User: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
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
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
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
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['id'] = 'field_taxonomy_tag_tid_1';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid_1']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';

  /* Display: Mentor Participation */
  $handler = $view->new_display('page', 'Mentor Participation', 'admin_mentorpart_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<P>*Post count is a count of all comments the user has posted to any activity</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['roles'] = array(
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
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_send_email_message' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentee';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentee';
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requester_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requester_id WHERE ur.requestee_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Post Count*';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {node} n WHERE (n.uid = users.uid ) AND (n.type IN  (\'activity_assignment_response\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT ur.requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  $handler->display->display_options['path'] = 'reports/adminmentorparticipation';

  /* Display: Mentor Prticipation Data export CSV */
  $handler = $view->new_display('views_data_export', 'Mentor Prticipation Data export CSV', 'admin_mentorpart_data_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentor Participation';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mentor Participation.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_7']['id'] = 'raw_field_7';
  $handler->display->display_options['fields']['raw_field_7']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_7']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_7']['label'] = 'Matched Mentee';
  $handler->display->display_options['fields']['raw_field_7']['empty'] = 'No mentee';
  $handler->display->display_options['fields']['raw_field_7']['raw_sql'] = '(SELECT GROUP_CONCAT(CONCAT(\' <a href="/user/\', ur.requester_id, \'">\', u.name, \'</a>\')) FROM user_relationships ur LEFT JOIN users u ON u.uid=ur.requester_id WHERE ur.requestee_id=users.uid)';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged in';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Post Count';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {node} n WHERE (n.uid = users.uid ) AND (n.type IN  (\'activity_assignment_response\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT ur.requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid in (SELECT requester_id FROM user_relationships ur WHERE ur.requestee_id=users.uid)) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: User: Account Status (field_user_acct_status) */
  $handler->display->display_options['filters']['field_user_acct_status_tid']['id'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['field'] = 'field_user_acct_status_tid';
  $handler->display->display_options['filters']['field_user_acct_status_tid']['value'] = array(
    3923 => '3923',
  );
  $handler->display->display_options['filters']['field_user_acct_status_tid']['vocabulary'] = 'user_account_status';
  $handler->display->display_options['path'] = 'reports/adminmentorparticipation/mentorparticipation.csv';
  $handler->display->display_options['displays'] = array(
    'admin_mentorpart_page' => 'admin_mentorpart_page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['segment_size'] = '219';
  $export['admin_reports_mentor_participation'] = $view;

  return $export;
}
