<?php
/**
 * @file
 * view_activities_assigned_by_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_activities_assigned_by_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activity_assignd_by_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Activities Assigned by Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Assigned Curricula by Location';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="all">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="../curriculum/activities-assigned-by-location"class="active">Manage Assigned Curricula by Location</a></li>
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities assigned at this time.';
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
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'assignedbylocation_test_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;

  /* Display: Activities Assigned by Location */
  $handler = $view->new_display('page', 'Activities Assigned by Location', 'activites_assigned_location_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global Text Tab Menu */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Global Text Tab Menu';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="curriculum_filtered">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="activities-assigned-by-location"  class="active">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Location/Class */
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['id'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['field'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Assigned by Location */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Assigned by Location';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'assignedbylocation_test_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
return sm_utilities_build_adminlocation_filter_string($user_data);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {field_data_field_activity_reference} field_data_field_activity_reference ON n.nid = field_data_field_activity_reference.entity_id AND (field_data_field_activity_reference.entity_type = \'node\' AND field_data_field_activity_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_activity_reference ON field_data_field_activity_reference.field_activity_reference_target_id = node_field_data_field_activity_reference.nid
LEFT JOIN {field_data_field_curriculum_reference} node_field_data_field_activity_reference__field_data_field_curriculum_reference ON node_field_data_field_activity_reference.nid = node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_id AND (node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_type = \'node\' AND node_field_data_field_activity_reference__field_data_field_curriculum_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_curriculum_reference ON node_field_data_field_activity_reference__field_data_field_curriculum_reference.field_curriculum_reference_target_id = node_field_data_field_curriculum_reference.nid
LEFT JOIN {field_data_field_taxonomy_tag} field_data_field_taxonomy_tag ON n.nid = field_data_field_taxonomy_tag.entity_id AND (field_data_field_taxonomy_tag.entity_type = \'node\' AND field_data_field_taxonomy_tag.deleted = \'0\')
WHERE (( (field_data_field_taxonomy_tag.field_taxonomy_tag_tid = taxonomy_term_data.tid ) )AND(( (n.type IN  (\'activity_assigned_bylocation\')) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IS NOT NULL ) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 ))) )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/activities-assigned-by-location';

  /* Display: Manage Activities Assigned by Location */
  $handler = $view->new_display('page', 'Manage Activities Assigned by Location', 'manage_abl_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Location/Class */
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['id'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['field'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'mgr_assignedbyloc_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
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
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {field_data_field_activity_reference} field_data_field_activity_reference ON n.nid = field_data_field_activity_reference.entity_id AND (field_data_field_activity_reference.entity_type = \'node\' AND field_data_field_activity_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_activity_reference ON field_data_field_activity_reference.field_activity_reference_target_id = node_field_data_field_activity_reference.nid
LEFT JOIN {field_data_field_curriculum_reference} node_field_data_field_activity_reference__field_data_field_curriculum_reference ON node_field_data_field_activity_reference.nid = node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_id AND (node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_type = \'node\' AND node_field_data_field_activity_reference__field_data_field_curriculum_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_curriculum_reference ON node_field_data_field_activity_reference__field_data_field_curriculum_reference.field_curriculum_reference_target_id = node_field_data_field_curriculum_reference.nid
LEFT JOIN {field_data_field_taxonomy_tag} field_data_field_taxonomy_tag ON n.nid = field_data_field_taxonomy_tag.entity_id AND (field_data_field_taxonomy_tag.entity_type = \'node\' AND field_data_field_taxonomy_tag.deleted = \'0\')
WHERE (( (field_data_field_taxonomy_tag.field_taxonomy_tag_tid = taxonomy_term_data.tid ) )AND(( (n.type IN  (\'activity_assigned_bylocation\')) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IS NOT NULL ) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 ))) )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/manageaabl';

  /* Display: Activities Assigned by Location Sort */
  $handler = $view->new_display('page', 'Activities Assigned by Location Sort', 'activites_assigned_locationsort_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Location/Class */
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['id'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['field'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Assigned by Location */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Assigned by Location';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'assignedbylocationsort_test_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
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
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {field_data_field_activity_reference} field_data_field_activity_reference ON n.nid = field_data_field_activity_reference.entity_id AND (field_data_field_activity_reference.entity_type = \'node\' AND field_data_field_activity_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_activity_reference ON field_data_field_activity_reference.field_activity_reference_target_id = node_field_data_field_activity_reference.nid
LEFT JOIN {field_data_field_curriculum_reference} node_field_data_field_activity_reference__field_data_field_curriculum_reference ON node_field_data_field_activity_reference.nid = node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_id AND (node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_type = \'node\' AND node_field_data_field_activity_reference__field_data_field_curriculum_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_curriculum_reference ON node_field_data_field_activity_reference__field_data_field_curriculum_reference.field_curriculum_reference_target_id = node_field_data_field_curriculum_reference.nid
LEFT JOIN {field_data_field_taxonomy_tag} field_data_field_taxonomy_tag ON n.nid = field_data_field_taxonomy_tag.entity_id AND (field_data_field_taxonomy_tag.entity_type = \'node\' AND field_data_field_taxonomy_tag.deleted = \'0\')
WHERE (( (field_data_field_taxonomy_tag.field_taxonomy_tag_tid = taxonomy_term_data.tid ) )AND(( (n.type IN  (\'activity_assigned_bylocation\')) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IS NOT NULL ) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 ))) )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/activities-assigned-by-locationsort';

  /* Display: Activities Assigned by Locationjwk */
  $handler = $view->new_display('page', 'Activities Assigned by Locationjwk', 'activites_assigned_locationjwk_page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Location/Class */
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['id'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['field'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Assigned by Location DEL */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Assigned by Location DEL';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'mgr_assignedbylocjwk_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['group'] = 1;
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {field_data_field_activity_reference} field_data_field_activity_reference ON n.nid = field_data_field_activity_reference.entity_id AND (field_data_field_activity_reference.entity_type = \'node\' AND field_data_field_activity_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_activity_reference ON field_data_field_activity_reference.field_activity_reference_target_id = node_field_data_field_activity_reference.nid
LEFT JOIN {field_data_field_curriculum_reference} node_field_data_field_activity_reference__field_data_field_curriculum_reference ON node_field_data_field_activity_reference.nid = node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_id AND (node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_type = \'node\' AND node_field_data_field_activity_reference__field_data_field_curriculum_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_curriculum_reference ON node_field_data_field_activity_reference__field_data_field_curriculum_reference.field_curriculum_reference_target_id = node_field_data_field_curriculum_reference.nid
LEFT JOIN {field_data_field_taxonomy_tag} field_data_field_taxonomy_tag ON n.nid = field_data_field_taxonomy_tag.entity_id AND (field_data_field_taxonomy_tag.entity_type = \'node\' AND field_data_field_taxonomy_tag.deleted = \'0\')
WHERE (( (field_data_field_taxonomy_tag.field_taxonomy_tag_tid = taxonomy_term_data.tid ) )AND(( (n.type IN  (\'activity_assigned_bylocation\')) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IS NOT NULL ) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 ))) )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/activities-assigned-by-locationjwk1';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'assigned by location jwk';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-curriculum';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'assignbylocationjwk_views_data_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'assignbylocationexportjwk';
  $handler->display->display_options['displays'] = array(
    'activites_assigned_locationjwk_page' => 'activites_assigned_locationjwk_page',
    'default' => 0,
    'activites_assigned_location_page' => 0,
    'manage_abl_page' => 0,
    'activites_assigned_locationsort_page' => 0,
    'page_1' => 0,
  );

  /* Display: Activities Assigned by Location */
  $handler = $view->new_display('page', 'Activities Assigned by Location', 'actassignedtestjwk_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
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
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global Text Tab Menu */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Global Text Tab Menu';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>This is a list of all Activities that are assigned to a location.  This page is where you change the available date which determines when the mentee or mentor can start the Activity</p>
<div class="report-tabs">
  <ul class="menu">
   <li><a href="all">All Curricula</a></li>
 <li><a href="createdbyme">My Curricula</a></li>
<li><a href="activities-assigned-by-location"  class="active">Manage Assigned Curricula by Location</a></li>
  </ul>
  <div class="clear"></div>
</div>';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Location/Class */
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['id'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_taxonomy_tag_taxonomy_term']['field'] = 'reverse_field_taxonomy_tag_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Assigned by Locationtestjwk */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Assigned by Locationtestjwk';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'curriculum_assigned';
  $handler->display->display_options['fields']['view']['display'] = 'assignedbylocation_testjwk_page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
return sm_utilities_build_adminlocation_filter_string($user_data);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = '(SELECT count(1)
FROM 
{node} n
LEFT JOIN {field_data_field_activity_reference} field_data_field_activity_reference ON n.nid = field_data_field_activity_reference.entity_id AND (field_data_field_activity_reference.entity_type = \'node\' AND field_data_field_activity_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_activity_reference ON field_data_field_activity_reference.field_activity_reference_target_id = node_field_data_field_activity_reference.nid
LEFT JOIN {field_data_field_curriculum_reference} node_field_data_field_activity_reference__field_data_field_curriculum_reference ON node_field_data_field_activity_reference.nid = node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_id AND (node_field_data_field_activity_reference__field_data_field_curriculum_reference.entity_type = \'node\' AND node_field_data_field_activity_reference__field_data_field_curriculum_reference.deleted = \'0\')
LEFT JOIN {node} node_field_data_field_curriculum_reference ON node_field_data_field_activity_reference__field_data_field_curriculum_reference.field_curriculum_reference_target_id = node_field_data_field_curriculum_reference.nid
LEFT JOIN {field_data_field_taxonomy_tag} field_data_field_taxonomy_tag ON n.nid = field_data_field_taxonomy_tag.entity_id AND (field_data_field_taxonomy_tag.entity_type = \'node\' AND field_data_field_taxonomy_tag.deleted = \'0\')
WHERE (( (field_data_field_taxonomy_tag.field_taxonomy_tag_tid = taxonomy_term_data.tid ) )AND(( (n.type IN  (\'activity_assigned_bylocation\')) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IS NOT NULL ) AND (field_data_field_taxonomy_tag.field_taxonomy_tag_tid IN (SELECT tte.tid FROM {taxonomy_term_edge} tte WHERE tte.parent in (SELECT tt.field_taxonomy_tag_tid FROM {field_data_field_taxonomy_tag} tt WHERE tt.bundle=\'user\'  AND tt.deleted=0 ))) )))) > 0';
  $handler->display->display_options['path'] = 'curriculum/activities-assigned-by-locationtestjwk';
  $export['activity_assignd_by_location'] = $view;

  return $export;
}
