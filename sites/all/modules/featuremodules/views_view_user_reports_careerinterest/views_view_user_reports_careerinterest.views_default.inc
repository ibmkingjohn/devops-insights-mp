<?php
/**
 * @file
 * views_view_user_reports_careerinterest.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_user_reports_careerinterest_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reports_careerinterest';
  $view->description = 'Career Interest Report';
  $view->tag = 'reports';
  $view->base_table = 'users';
  $view->human_name = 'User Reports: Career Interest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Career Interest Report';
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
    'field_mentee_career_fields_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
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
    'field_job_field_specialty_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
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
    'name' => 'name',
    'field_gender' => 'field_gender',
    'php' => 'php',
    'php_1' => 'php_1',
    'php_2' => 'php_2',
    'php_3' => 'php_3',
    'name_1' => 'name_1',
    'raw_field_1' => 'raw_field_1',
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
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gender' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
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
    'raw_field_1' => array(
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>There are no Mentor/Mentee that match the selection criteria</p>';
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
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'Roles';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT GROUP_CONCAT(DISTINCT r.name ORDER BY r.name ASC SEPARATOR \', \') FROM role r WHERE r.rid in (users_roles_value_1.rid, users_roles_value_0.rid ) LIMIT 1)';
  /* Field: User: The career fields that I am interested in are */
  $handler->display->display_options['fields']['field_mentee_career_fields']['id'] = 'field_mentee_career_fields';
  $handler->display->display_options['fields']['field_mentee_career_fields']['table'] = 'field_data_field_mentee_career_fields';
  $handler->display->display_options['fields']['field_mentee_career_fields']['field'] = 'field_mentee_career_fields';
  $handler->display->display_options['fields']['field_mentee_career_fields']['label'] = 'Career Interests (Mentee)';
  $handler->display->display_options['fields']['field_mentee_career_fields']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_mentee_career_fields']['delta_offset'] = '0';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Job Specialty (Mentor)';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT GROUP_CONCAT(td.name ORDER BY td.name ASC SEPARATOR \', \') FROM field_data_field_job_field_specialty fjfs INNER JOIN taxonomy_term_edge te ON te.tid=fjfs.field_job_field_specialty_tid LEFT JOIN taxonomy_term_data td ON td.tid=te.parent LEFT JOIN taxonomy_term_hierarchy th ON th.tid=te.parent WHERE fjfs.entity_id=users.uid AND fjfs.bundle=\'user\' AND fjfs.deleted=0 AND th.parent=0)';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['sorts']['name_1']['relationship'] = 'field_taxonomy_tag_tid';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: User: First Name (field_first_name:format) */
  $handler->display->display_options['sorts']['field_first_name_format']['id'] = 'field_first_name_format';
  $handler->display->display_options['sorts']['field_first_name_format']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_format']['field'] = 'field_first_name_format';
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    5 => 'AND',
    4 => 'AND',
    3 => 'OR',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = 2;
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 4;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter_1']['id'] = 'raw_filter_1';
  $handler->display->display_options['filters']['raw_filter_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter_1']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter_1']['group'] = 4;
  $handler->display->display_options['filters']['raw_filter_1']['raw_sql'] = 'field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 AND tt.entity_id=\'[user:uid]\'))';
  /* Filter criterion: Mentee Career Interests */
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['id'] = 'field_mentee_career_fields_tid';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['table'] = 'field_data_field_mentee_career_fields';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['field'] = 'field_mentee_career_fields_tid';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['ui_name'] = 'Mentee Career Interests';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['group'] = 3;
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['expose']['operator_id'] = 'field_mentee_career_fields_tid_op';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['expose']['label'] = 'The career fields that I am interested in are (field_mentee_career_fields)';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['expose']['operator'] = 'field_mentee_career_fields_tid_op';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['expose']['identifier'] = 'field_mentee_career_fields_tid';
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_mentee_career_fields_tid']['vocabulary'] = 'mentee_career_fields';
  /* Filter criterion: User: Job field specialty (field_job_field_specialty) */
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['id'] = 'field_job_field_specialty_tid';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['table'] = 'field_data_field_job_field_specialty';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['field'] = 'field_job_field_specialty_tid';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['group'] = 3;
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['expose']['operator_id'] = 'field_job_field_specialty_tid_op';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['expose']['label'] = 'Job field specialty (field_job_field_specialty)';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['expose']['operator'] = 'field_job_field_specialty_tid_op';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['expose']['identifier'] = 'field_job_field_specialty_tid';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['vocabulary'] = 'mentor_job_field_specialty';
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['error_message'] = FALSE;
  $handler->display->display_options['filters']['field_job_field_specialty_tid']['use_chosen'] = 'always';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 5;
  $handler->display->display_options['filters']['raw_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['raw_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['raw_filter']['expose']['label'] = 'Career Interests / Job Specialty';
  $handler->display->display_options['filters']['raw_filter']['expose']['operator'] = 'raw_filter_op';
  $handler->display->display_options['filters']['raw_filter']['expose']['identifier'] = 'career_specialty';
  $handler->display->display_options['filters']['raw_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'COALESCE(field_data_field_mentee_career_fields.field_mentee_career_fields_tid, field_data_field_job_field_specialty.field_job_field_specialty_tid) in (SELECT tid FROM {taxonomy_term_data} td WHERE name LIKE \'%!exposed0%\' AND vid in (5, 22))';

  /* Display: Career Interest Report */
  $handler = $view->new_display('page', 'Career Interest Report', 'career_choices_page');
  $handler->display->display_options['path'] = 'reports/menteecareer';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'data_export_csv');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Career Interest Report.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'reports/menteecareer/menteecareer.csv';
  $handler->display->display_options['displays'] = array(
    'career_choices_page' => 'career_choices_page',
    'default' => 0,
  );

  /* Display: Select Mentor */
  $handler = $view->new_display('page', 'Select Mentor', 'mentee_choosementorjwk_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Select Mentor';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
    global $user;
    if (module_exists(\'sm_users\')) {
      $uid=$user->uid;
$mentee_relationship_count = user_relationships_load(array(\'user\' => $uid), array(\'count\' => true));
 $view_requests = views_get_view(\'jwk_user_reports\');
    if (is_object($view_requests)) {
      $view_requests->set_display(\'mentor_requests_arg\');  
      $args=array( $uid);
      $view_requests->set_arguments($args);
      $view_requests->execute();
      $results = $view_requests->result; 
      $total_items = $view_requests->query->pager->get_total_items();  
}
          if ((sm_users_is_mentee_relationship_limit_reached($uid)==TRUE) ||  ($total_items+$mentee_relationship_count >=3 )) {
             print (\'<span class="max-mentors-note">\');
             print t(\'You are unable to request new mentors. You have reached the limit of 3 mentors assigned or you have mentor requests waiting to be approved.\');
             print (\'</span>\');
         } else {
             print(\'<strong>\');
             print t(\'The following mentors are available for matching in your location. To narrow the list by job field or specialty, use the filter selection field below\');
             print(\'</strong>\');
         }
   }
?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No mentors in your part of the mentor pool are currently available for matching. ';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Username';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Is Already a Mentor */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Is Already a Mentor';
  $handler->display->display_options['fields']['php']['label'] = 'Already a mentor?';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'global $user;
$uid1 = $user->uid;
$count = 0;
if (module_exists(\'user_relationships\')) {
  $count = user_relationships_load(array(\'between\' => array($uid1, $row->uid)), array(\'count\' => true));
}
return $count;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
//print($row->uid . \' value \' . $value);
  if ($value > 0) {
    print \'Already a mentor\';
  } else {
    print \'\';
 }
 ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '2';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Total Mentees */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Total Mentees';
  $handler->display->display_options['fields']['php_1']['label'] = 'Total Mentees';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$count = user_relationships_load(array(\'user\' => $row->uid), array(\'count\' => true));
return $count;';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '4';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Mentor Rel count */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Mentor Rel count';
  $handler->display->display_options['fields']['php_2']['label'] = 'Mentor Rel Count';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_value'] = '$count = user_relationships_load(array(\'user\' => $row->uid), array(\'count\' => true));
return $count;';
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Action buttons */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'Action buttons';
  $handler->display->display_options['fields']['php_3']['label'] = 'Actions';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
global $user;
$mentee_uid = $user->uid;
$mentor_uid = $row->uid;
$relationships = user_relationships_load(array(\'between\' => array($mentee_uid, $mentor_uid)) );
if (count($relationships)) {
  foreach ($relationships as $relationship) { // there is just one
  }
} else {
  $mentee_relationship_count = user_relationships_load(array(\'user\' => $mentee_uid), array(\'count\' => true));
    $request_pending=FALSE;
    $view_requests = views_get_view(\'jwk_user_reports\');
    if (is_object($view_requests)) {
      $view_requests->set_display(\'mentor_requests_arg\');  
      $args=array($user->uid);
      $view_requests->set_arguments($args);
      $view_requests->execute();
      $results = $view_requests->result; 
      $total_items = $view_requests->query->pager->get_total_items();  
      foreach ($results as $result) {
        if ((property_exists($result,\'field_field_mentor_reference\')) && ($result->field_field_mentor_reference[0][\'raw\'][\'uid\'] == $mentor_uid)) {
          $request_pending=TRUE;
        }
      }
    }
    if ($request_pending==TRUE) {
      print t(\'Mentor request pending approval\');
    } else if ((sm_users_is_mentee_relationship_limit_reached($mentee_uid)==FALSE) &&(($total_items+$mentee_relationship_count)<3)){
      $url = "node/add/mentor-request-explanation/";
      print l(t(\'Choose\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\'),
              ), 
               \'query\' => array("edit[field_mentor_reference][und]"=>$mentor_uid, drupal_get_destination()),
                 \'html\'=>TRUE,
      ));
    }
}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Location/Class';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'Job/Field Specialty';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT GROUP_CONCAT(td.name ORDER BY td.name ASC SEPARATOR \', \') FROM field_data_field_job_field_specialty fjfs INNER JOIN taxonomy_term_edge te ON te.tid=fjfs.field_job_field_specialty_tid LEFT JOIN taxonomy_term_data td ON td.tid=te.parent LEFT JOIN taxonomy_term_hierarchy th ON th.tid=te.parent WHERE fjfs.entity_id=users.uid AND fjfs.bundle=\'user\' AND fjfs.deleted=0 AND th.parent=0)';
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
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_taxonomy_tag_tid']['vocabulary'] = 'user_hierarchy';
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['raw_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['raw_filter']['expose']['label'] = 'Career Interests / Job Specialty';
  $handler->display->display_options['filters']['raw_filter']['expose']['operator'] = 'raw_filter_op';
  $handler->display->display_options['filters']['raw_filter']['expose']['identifier'] = 'career_specialty';
  $handler->display->display_options['filters']['raw_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'COALESCE(field_data_field_job_field_specialty.field_job_field_specialty_tid) in (SELECT tid FROM {taxonomy_term_data} td WHERE name LIKE \'%!exposed0%\' AND vid in (5, 22))';
  /* Filter criterion: User: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_tid']['id'] = 'field_gender_tid';
  $handler->display->display_options['filters']['field_gender_tid']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_tid']['field'] = 'field_gender_tid';
  $handler->display->display_options['filters']['field_gender_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gender_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gender_tid']['expose']['operator_id'] = 'field_gender_tid_op';
  $handler->display->display_options['filters']['field_gender_tid']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['field_gender_tid']['expose']['operator'] = 'field_gender_tid_op';
  $handler->display->display_options['filters']['field_gender_tid']['expose']['identifier'] = 'field_gender_tid';
  $handler->display->display_options['filters']['field_gender_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_gender_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_gender_tid']['vocabulary'] = 'gender';
  $handler->display->display_options['filters']['field_gender_tid']['use_chosen'] = 'always';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = 1;
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$limit = sm_users_get_relationship_limit(\'mentor\');
$count = $row->php_2;
if ($count >= $limit) {
  return TRUE;
}
return FALSE;';
  /* Filter criterion: User: Available for mentee assignment (field_available) */
  $handler->display->display_options['filters']['field_available_value']['id'] = 'field_available_value';
  $handler->display->display_options['filters']['field_available_value']['table'] = 'field_data_field_available';
  $handler->display->display_options['filters']['field_available_value']['field'] = 'field_available_value';
  $handler->display->display_options['filters']['field_available_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_available_value']['group'] = 1;
  /* Filter criterion: User: Vacation (field_vacation) */
  $handler->display->display_options['filters']['field_vacation_value']['id'] = 'field_vacation_value';
  $handler->display->display_options['filters']['field_vacation_value']['table'] = 'field_data_field_vacation';
  $handler->display->display_options['filters']['field_vacation_value']['field'] = 'field_vacation_value';
  $handler->display->display_options['filters']['field_vacation_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_vacation_value']['group'] = 1;
  $handler->display->display_options['path'] = 'select-mentorjwk';
  $export['reports_careerinterest'] = $view;

  return $export;
}
