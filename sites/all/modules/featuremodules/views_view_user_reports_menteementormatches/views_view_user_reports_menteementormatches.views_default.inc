<?php
/**
 * @file
 * views_view_user_reports_menteementormatches.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_user_reports_menteementormatches_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reports_menteementormatches';
  $view->description = '';
  $view->tag = 'reports';
  $view->base_table = 'user_relationships';
  $view->human_name = 'Admin Reports: Mentee/Mentor Matches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentee/Mentor Matches';
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
    'field_first_name_value' => array(
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
    'field_taxonomy_tag_tid' => array(
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
    'uid_2' => 'uid_2',
    'uid' => 'uid',
    'requester_id' => 'requester_id',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name_2' => 'name_2',
    'login' => 'login',
    'raw_field_5' => 'raw_field_5',
    'raw_field_1' => 'raw_field_1',
    'requestee_id' => 'requestee_id',
    'name_1' => 'name_1',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'created_1' => 'created_1',
    'login_1' => 'login_1',
    'raw_field_4' => 'raw_field_4',
    'raw_field_3' => 'raw_field_3',
    'raw_field' => 'raw_field',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'name_2' => array(
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
    'raw_field_5' => array(
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
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: User relationships: RTID */
  $handler->display->display_options['relationships']['rtid']['id'] = 'rtid';
  $handler->display->display_options['relationships']['rtid']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['rtid']['field'] = 'rtid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Post';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.created), \'%m/%d/%Y\') time FROM {node} n1 WHERE n1.status=1 AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Comment';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(c1.changed), \'%m/%d/%Y\') FROM {comment} c1  WHERE c1.status=1 AND c1.uid=user_relationships.requester_id)';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Post';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.created), \'%m/%d/%y\') time FROM {node} n1 WHERE n1.status=1 AND n1.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Comment';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(c1.changed), \'%m/%d/%Y\') FROM {comment} c1  WHERE c1.status=1 AND c1.uid=user_relationships.requestee_id)';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_taxonomy_tag_tid';
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
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
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Mentee First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Mentee Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Mentee Username';
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
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'users_user_relationships__field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';

  /* Display: Mentee/Mentor Matches */
  $handler = $view->new_display('page', 'Mentee/Mentor Matches', 'mentee_mentor_matches_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentees and their matched mentors at your location, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['fields']['uid_2']['table'] = 'users';
  $handler->display->display_options['fields']['uid_2']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_2']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_2']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Activity Response';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid_2]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Activity Response';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_actassign_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n2.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  $handler->display->display_options['path'] = 'reports/menteementormatches';

  /* Display: Mentee/Mentor Matches Export */
  $handler = $view->new_display('views_data_export', 'Mentee/Mentor Matches Export', 'mentee_mentor_matches_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mentee/Mentor Matches.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'requester_id';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['created']['label'] = 'User Created date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Activity Response';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Activity Response';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_actassign_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n2.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  $handler->display->display_options['path'] = 'reports/menteementormatchesnew/csv';
  $handler->display->display_options['displays'] = array(
    'mentee_mentor_matches_page' => 'mentee_mentor_matches_page',
    'default' => 0,
  );

  /* Display: Mentee Participation */
  $handler = $view->new_display('page', 'Mentee Participation', 'admin_menteeparttest_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentee Participation';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Matched Mentor';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Post Count';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM {comment} c LEFT JOIN {node} n ON c.nid = n.nid WHERE (c.uid = user_relationships.requester_id) AND (n.type IN  (\'activity_assignment\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Activities Complete';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = user_relationships.requester_id) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'Complete\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'In Progress';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {node} n INNER JOIN {field_data_field_completion_status} fcs ON n.nid = fcs.entity_id AND (fcs.entity_type = \'node\' AND fcs.deleted = 0) WHERE ((n.uid = user_relationships.requester_id) AND (n.status = 1) AND n.type IN  (\'activity_assignment\') AND (fcs.field_completion_status_value = \'In Progress\')))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Activities Available';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT count(1) FROM {node} n WHERE n.type = \'activity\' AND n.status = 1)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_5']['id'] = 'raw_field_5';
  $handler->display->display_options['fields']['raw_field_5']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_5']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_5']['label'] = 'Time Spent';
  $handler->display->display_options['fields']['raw_field_5']['raw_sql'] = '(SELECT CEILING(SUM(tte.duration)) FROM time_tracker_entry tte WHERE tte.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_8']['id'] = 'raw_field_8';
  $handler->display->display_options['fields']['raw_field_8']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_8']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_8']['label'] = 'Login Count';
  $handler->display->display_options['fields']['raw_field_8']['raw_sql'] = '(SELECT stats.value FROM user_stats_values stats WHERE stats.uid=user_relationships.requester_id AND stats.name=\'login_count\')';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Mentee Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Mentee Username';
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
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'users_user_relationships__field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  $handler->display->display_options['path'] = 'reports/menteeparttest';

  /* Display: ptechMatches Jwk */
  $handler = $view->new_display('page', 'ptechMatches Jwk', 'ptechmatchesjwk_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['value'] = array(
    3864 => '3864',
    3908 => '3908',
    3903 => '3903',
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  $handler->display->display_options['path'] = 'reports/ptechmatchesjwk';

  /* Display: goodeMatches Jwk */
  $handler = $view->new_display('page', 'goodeMatches Jwk', 'goodematchesjwk_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['value'] = array(
    3966 => '3966',
    3868 => '3868',
    3893 => '3893',
    4026 => '4026',
    4016 => '4016',
    4021 => '4021',
    3896 => '3896',
    3971 => '3971',
    4011 => '4011',
    3897 => '3897',
    3899 => '3899',
    3976 => '3976',
    4006 => '4006',
    3918 => '3918',
    3981 => '3981',
    4001 => '4001',
    3894 => '3894',
    3996 => '3996',
    3991 => '3991',
    3892 => '3892',
    3986 => '3986',
    3891 => '3891',
    3898 => '3898',
    4031 => '4031',
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  $handler->display->display_options['path'] = 'reports/goodematchesjwk';

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_ptech');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['value'] = array(
    3864 => '3864',
    3908 => '3908',
    3903 => '3903',
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  $handler->display->display_options['path'] = 'ptechexport';

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_goode');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['value'] = array(
    3966 => '3966',
    3868 => '3868',
    3893 => '3893',
    4026 => '4026',
    4016 => '4016',
    4021 => '4021',
    3896 => '3896',
    3971 => '3971',
    4011 => '4011',
    3897 => '3897',
    3899 => '3899',
    3976 => '3976',
    4006 => '4006',
    3918 => '3918',
    3981 => '3981',
    4001 => '4001',
    3894 => '3894',
    3996 => '3996',
    3991 => '3991',
    3892 => '3892',
    3986 => '3986',
    3891 => '3891',
    3898 => '3898',
    4031 => '4031',
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator_id'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['label'] = 'Mentee Location/Class';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['operator'] = 'field_taxonomy_tag_tid_op';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['identifier'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  $handler->display->display_options['path'] = 'goodeexport';

  /* Display: Mentee/Mentor LC Total */
  $handler = $view->new_display('page', 'Mentee/Mentor LC Total', 'menteementorlctot_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentee/Mentor Let\'s Chat Totals';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentees and their matched mentors at your location, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['fields']['uid_2']['table'] = 'users';
  $handler->display->display_options['fields']['uid_2']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_2']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_2']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_5']['id'] = 'raw_field_5';
  $handler->display->display_options['fields']['raw_field_5']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_5']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_5']['label'] = 'Mentee Chat Count';
  $handler->display->display_options['fields']['raw_field_5']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requester_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid_2]';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Mentor Chat Count';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requestee_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  $handler->display->display_options['path'] = 'reports/menteementorlctot';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mentee Chat Count';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mentee Mentor Chat Export */
  $handler = $view->new_display('views_data_export', 'Mentee Mentor Chat Export', 'menteementorchat_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentee/Mentor Let\'s Chat Export Matches';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Mentee Chat Count';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requester_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'users/[name]';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Mentor Chat Count';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requestee_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  $handler->display->display_options['path'] = 'menteementorchatexp';
  $handler->display->display_options['displays'] = array(
    'menteementorlctot_page' => 'menteementorlctot_page',
    'default' => 0,
    'mentee_mentor_matches_page' => 0,
    'admin_menteeparttest_page' => 0,
    'ptechmatchesjwk_page' => 0,
    'goodematchesjwk_page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['reports_menteementormatches'] = $view;

  $view = new view();
  $view->name = 'user_reports_mentor_mentee_matches';
  $view->description = '';
  $view->tag = 'reports';
  $view->base_table = 'user_relationships';
  $view->human_name = 'Admin Reports: Mentor/Mentee Matches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentor/Mentee Matches';
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
    'field_first_name_value' => array(
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
    'field_taxonomy_tag_tid' => array(
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
    'requestee_id' => 'requestee_id',
    'name' => 'name',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'field_vacation' => 'field_vacation',
    'login_1' => 'login_1',
    'raw_field_3' => 'raw_field_3',
    'raw_field_4' => 'raw_field_4',
    'created_1' => 'created_1',
    'requester_id' => 'requester_id',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'raw_field' => 'raw_field',
    'name_2' => 'name_2',
    'login' => 'login',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
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
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vacation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
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
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
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
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: User relationships: Requester user */
  $handler->display->display_options['relationships']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['relationships']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requester_id']['field'] = 'requester_id';
  /* Relationship: User relationships: Requestee user */
  $handler->display->display_options['relationships']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['relationships']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['relationships']['requestee_id']['field'] = 'requestee_id';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'requester_id';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Post';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.created), \'%m/%d/%Y\') time FROM {node} n1 WHERE n1.status=1 AND n1.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Comment';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(c1.changed), \'%m/%d/%Y\') FROM {comment} c1  WHERE c1.status=1 AND c1.uid=user_relationships.requestee_id)';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentees';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Post';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.created), \'%m/%d/%Y\') time FROM {node} n1 WHERE n1.status=1 AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Comment';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(c1.changed), \'%m/%d/%Y\') FROM {comment} c1  WHERE c1.status=1 AND c1.uid=user_relationships.requester_id)';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_taxonomy_tag_tid';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'requestee_id';
  /* Sort criterion: User: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'requestee_id';
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
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
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Mentor First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Mentor Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Mentor Username';
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
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'users_user_relationships_1__field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';

  /* Display: Mentor/Mentee Matches */
  $handler = $view->new_display('page', 'Mentor/Mentee Matches', 'mentee_mentor_matches_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'requestee_id' => 'requestee_id',
    'name' => 'name',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'field_vacation' => 'field_vacation',
    'login_1' => 'login_1',
    'raw_field_3' => 'raw_field_3',
    'raw_field_4' => 'raw_field_4',
    'created_1' => 'created_1',
    'requester_id' => 'requester_id',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'raw_field' => 'raw_field',
    'name_2' => 'name_2',
    'login' => 'login',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
    'raw_field_5' => 'raw_field_5',
    'raw_field_6' => 'raw_field_6',
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
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vacation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
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
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
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
    'raw_field_5' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentors and their matched mentees, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Activity Response';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_actassign_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n2.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid_1]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Activity Response';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  $handler->display->display_options['path'] = 'reports/mentormenteematches';

  /* Display: Mentor/Mentee Matches Export */
  $handler = $view->new_display('views_data_export', 'Mentor/Mentee Matches Export', 'mentor_mentee_matches_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mentor/Mentee Matches.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Activity Response';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_actassign_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n2.uid=user_relationships.requestee_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentors';
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Activity Response';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND n1.type = \'activity_assignment_response\' AND n1.uid=user_relationships.requester_id)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  $handler->display->display_options['path'] = 'reports/mentormenteematchesnew/csv';
  $handler->display->display_options['displays'] = array(
    'mentee_mentor_matches_page' => 'mentee_mentor_matches_page',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Mentor/Mentee LC Total */
  $handler = $view->new_display('page', 'Mentor/Mentee LC Total', 'mentormenteelctot_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentor/Mentee Let\'s Chat Total';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'requestee_id' => 'requestee_id',
    'name' => 'name',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'field_vacation' => 'field_vacation',
    'login_1' => 'login_1',
    'raw_field_3' => 'raw_field_3',
    'raw_field_4' => 'raw_field_4',
    'created_1' => 'created_1',
    'requester_id' => 'requester_id',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'raw_field' => 'raw_field',
    'name_2' => 'name_2',
    'login' => 'login',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
    'raw_field_5' => 'raw_field_5',
    'raw_field_6' => 'raw_field_6',
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
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vacation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
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
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
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
    'raw_field_5' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentors and their matched mentees, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Lets Chat Count';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requestee_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid_1]';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Total Mentees';
  $handler->display->display_options['fields']['raw_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['raw_field']['empty'] = '0';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM {user_relationships} ur WHERE ur.requester_id=user_relationships.requester_id)';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Lets Chat Count';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted response';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requester_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never started or replied to chat';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  $handler->display->display_options['path'] = 'reports/mentormenteelctot';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mentor Chat Count';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-reports';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mentor Mentee Chat Export */
  $handler = $view->new_display('views_data_export', 'Mentor Mentee Chat Export', 'mentormenteechat_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentor/Mentee Let\'s Chat Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid_1']['label'] = 'Username';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_3']['id'] = 'raw_field_3';
  $handler->display->display_options['fields']['raw_field_3']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_3']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_3']['label'] = 'Mentor Chat Count';
  $handler->display->display_options['fields']['raw_field_3']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_3']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requestee_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'Last Mentor Chat';
  $handler->display->display_options['fields']['raw_field_4']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM node n1 LEFT JOIN  field_data_field_letschat_reference ar ON n1.nid = ar.entity_id LEFT JOIN node n2 ON n2.nid = ar.entity_id WHERE n1.status=1 AND ((n1.type = \'lets_chat_reply\' AND n2.uid=user_relationships.requestee_id) OR (n1.type = \'lets_chat\' AND n1.uid=user_relationships.requestee_id)))';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Mentee Chat Count';
  $handler->display->display_options['fields']['raw_field_1']['empty'] = 'Never posted';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT COUNT(1)  FROM  {node} node LEFT JOIN {users} users_node ON node.uid = users_node.uid WHERE (( (node.type IN  (\'lets_chat_reply\')) AND (node.uid IN  (user_relationships.requester_id)) AND (node.status = \'1\') )))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_2']['id'] = 'raw_field_2';
  $handler->display->display_options['fields']['raw_field_2']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_2']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_2']['label'] = 'Last Mentee Chat';
  $handler->display->display_options['fields']['raw_field_2']['empty'] = 'Never posted comment';
  $handler->display->display_options['fields']['raw_field_2']['raw_sql'] = '(SELECT FROM_UNIXTIME(MAX(n1.changed), \'%m/%d/%Y\') FROM {node} n1  WHERE n1.status=1 AND (n1.type = \'lets_chat\' OR n1.type = \'lets_chat_reply\') AND n1.uid=user_relationships.requester_id)';
  $handler->display->display_options['path'] = 'mentormenteechatexp';
  $handler->display->display_options['displays'] = array(
    'mentormenteelctot_page' => 'mentormenteelctot_page',
    'default' => 0,
    'mentee_mentor_matches_page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Mentor/Mentee Matches */
  $handler = $view->new_display('page', 'Mentor/Mentee Matches', 'unmatch_bymentor_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unmatch Users';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'requestee_id' => 'requestee_id',
    'name' => 'name',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'field_vacation' => 'field_vacation',
    'login_1' => 'login_1',
    'raw_field_3' => 'raw_field_3',
    'raw_field_4' => 'raw_field_4',
    'created_1' => 'created_1',
    'requester_id' => 'requester_id',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'raw_field' => 'raw_field',
    'name_2' => 'name_2',
    'login' => 'login',
    'raw_field_1' => 'raw_field_1',
    'raw_field_2' => 'raw_field_2',
    'raw_field_5' => 'raw_field_5',
    'raw_field_6' => 'raw_field_6',
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
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vacation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
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
    'raw_field_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'raw_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
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
    'raw_field_5' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentors and their matched mentees, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_unmatch_users' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Vacation */
  $handler->display->display_options['fields']['field_vacation']['id'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['fields']['field_vacation']['field'] = 'field_vacation';
  $handler->display->display_options['fields']['field_vacation']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_vacation']['label'] = 'Mentor On Vacation';
  $handler->display->display_options['fields']['field_vacation']['empty'] = 'No';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid_1]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Mentor First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Mentor Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Mentor Username';
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
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'users_user_relationships_1__field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value_1']['id'] = 'field_first_name_value_1';
  $handler->display->display_options['filters']['field_first_name_value_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value_1']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_first_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['operator_id'] = 'field_first_name_value_1_op';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['label'] = 'Mentee First Name';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['operator'] = 'field_first_name_value_1_op';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['identifier'] = 'field_first_name_value_1';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value_1']['id'] = 'field_last_name_value_1';
  $handler->display->display_options['filters']['field_last_name_value_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value_1']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_last_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['operator_id'] = 'field_last_name_value_1_op';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['label'] = 'Mentee Last Name';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['operator'] = 'field_last_name_value_1_op';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['identifier'] = 'field_last_name_value_1';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Mentee Username';
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'unmatch/bymentor';

  /* Display: Mentor/Mentee Matches Admin */
  $handler = $view->new_display('page', 'Mentor/Mentee Matches Admin', 'unmatchadmin_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unmatch Users';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'uid_1' => 'uid_1',
    'uid' => 'uid',
    'requestee_id' => 'requestee_id',
    'name' => 'name',
    'field_first_name_1' => 'field_first_name_1',
    'field_last_name_1' => 'field_last_name_1',
    'field_user_acct_status_1' => 'field_user_acct_status_1',
    'login_1' => 'login_1',
    'created_1' => 'created_1',
    'requester_id' => 'requester_id',
    'name_1' => 'name_1',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_user_acct_status' => 'field_user_acct_status',
    'name_2' => 'name_2',
    'login' => 'login',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requestee_id' => array(
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
    'field_first_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_acct_status_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'field_user_acct_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This report gives a quick snapshot of the mentors and their matched mentees, including the date of the most recent message or activity comment of each user.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_unmatch_users' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User relationships: Requestee user */
  $handler->display->display_options['fields']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['fields']['requestee_id']['label'] = 'Mentor Username';
  $handler->display->display_options['fields']['requestee_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = 'Mentor Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name_1']['id'] = 'field_first_name_1';
  $handler->display->display_options['fields']['field_first_name_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_first_name_1']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name_1']['id'] = 'field_last_name_1';
  $handler->display->display_options['fields']['field_last_name_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_last_name_1']['label'] = 'Mentor Name';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['text'] = '[field_first_name_1] [field_last_name_1]';
  $handler->display->display_options['fields']['field_last_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_1']['alter']['path'] = 'user/[uid]';
  /* Field: User: Account Status */
  $handler->display->display_options['fields']['field_user_acct_status_1']['id'] = 'field_user_acct_status_1';
  $handler->display->display_options['fields']['field_user_acct_status_1']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status_1']['field'] = 'field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_user_acct_status_1']['label'] = 'Account Status Mentor';
  $handler->display->display_options['fields']['field_user_acct_status_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login_1']['id'] = 'login_1';
  $handler->display->display_options['fields']['login_1']['table'] = 'users';
  $handler->display->display_options['fields']['login_1']['field'] = 'login';
  $handler->display->display_options['fields']['login_1']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login_1']['label'] = 'Last Mentor Login';
  $handler->display->display_options['fields']['login_1']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Matched Date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee Username';
  $handler->display->display_options['fields']['requester_id']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Mentee Username';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid_1]';
  /* Field: User: Account Status */
  $handler->display->display_options['fields']['field_user_acct_status']['id'] = 'field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['table'] = 'field_data_field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['field'] = 'field_user_acct_status';
  $handler->display->display_options['fields']['field_user_acct_status']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_user_acct_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_2']['label'] = 'Location/Class';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['label'] = 'Last Mentee Login';
  $handler->display->display_options['fields']['login']['empty'] = 'Never logged';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid_raw']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw_1']['id'] = 'uid_raw_1';
  $handler->display->display_options['filters']['uid_raw_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw_1']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_raw_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['uid_raw_1']['group'] = 1;
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Mentor First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Mentor Last Name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Mentor Username';
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
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['relationship'] = 'requestee_id';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'users_user_relationships_1__field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: User: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value_1']['id'] = 'field_first_name_value_1';
  $handler->display->display_options['filters']['field_first_name_value_1']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value_1']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_first_name_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['operator_id'] = 'field_first_name_value_1_op';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['label'] = 'Mentee First Name';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['operator'] = 'field_first_name_value_1_op';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['identifier'] = 'field_first_name_value_1';
  $handler->display->display_options['filters']['field_first_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value_1']['id'] = 'field_last_name_value_1';
  $handler->display->display_options['filters']['field_last_name_value_1']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value_1']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['field_last_name_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['operator_id'] = 'field_last_name_value_1_op';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['label'] = 'Mentee Last Name';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['operator'] = 'field_last_name_value_1_op';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['identifier'] = 'field_last_name_value_1';
  $handler->display->display_options['filters']['field_last_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['relationship'] = 'requester_id';
  $handler->display->display_options['filters']['uid_1']['value'] = '';
  $handler->display->display_options['filters']['uid_1']['group'] = 1;
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator_id'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'Mentee Username';
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'unmatch/bymentoradmin';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Unmatch Admin';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-matching-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['user_reports_mentor_mentee_matches'] = $view;

  return $export;
}
