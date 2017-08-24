<?php
/**
 * @file
 * activity_actassignbyloc_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function activity_actassignbyloc_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jwk_user_activities_views';
  $view->description = 'All pages for Activity and Actvitity Assignment Content Types';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'JWK Activities Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Activities Views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'activity_assigned_bylocation' => 'activity_assigned_bylocation',
      'activity_assignment' => 'activity_assignment',
      'activity' => 0,
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'jwk_activities_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'jwk-activities';

  /* Display: Activities Available for Assignment */
  $handler = $view->new_display('page', 'Activities Available for Assignment', 'available_activities_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    5 => '5',
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These are the scheduled program Activities available to mentors and mentees within the school curriculum. These Activities typically have an availability date. If the availability date is today or has passed, then the Activity is accessible by mentees and mentors.

To start an Activity, click on any of the Activities you see below. Any incomplete activity you have must be completed and approved before you can start a new activity.';
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
  /* Field: Content: Activity */
  $handler->display->display_options['fields']['field_activity_reference']['id'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_start_activity']['id'] = 'field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['table'] = 'field_data_field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['field'] = 'field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['label'] = 'Activity';
  $handler->display->display_options['fields']['field_start_activity']['element_label_colon'] = FALSE;
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_due_date']['id'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['table'] = 'field_data_field_due_date';
  $handler->display->display_options['fields']['field_due_date']['field'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Custom Status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Custom Status';
  $handler->display->display_options['fields']['php']['label'] = 'Status';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '//module_load_all();
global $user;
$results = array();
$view = views_get_view(\'jwk_user_activities_views\');
if (is_object($view)) {
  $args=array($user->uid);
  $view->set_arguments($args);
  $view->set_display(\'all_user_activities_with_status\');
  $view->execute();
  $results = $view->result;   
}
$activities = array();
foreach ($results as $result) {
  $activity = array();
  $activity[\'nid\']= $result->field_field_activity_entity_ref[0][\'raw\'][\'entity\']->nid;
  $activity[\'assignment_status\'] = $result->_field_data[\'nid\'][\'entity\']->field_completion_status[LANGUAGE_NONE][0][\'value\'];
//  $activity[\'assignment_date_available\'] = $result->_field_data[\'nid\'][\'entity\']->field_available_date[LANGUAGE_NONE][0][\'value\'];
  $activity[\'assignment_nid\']=$result->nid;
  $activities[] = $activity;
}
$static[\'activities\'] = $activities;
/*variable_del(\'activity_assn_\'.$user->uid);
variable_set(\'activity_assn_\'.$user->uid, $activities);*/';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$match=FALSE;
  //$activities = variable_get(\'activity_assn_\'.$user->uid);
 $activities = $static[\'activities\'];
$actavail = \'Available\';
   $t=time();
   $current_date = date("Y-m-d 00:00:00",$t);
   if ($current_date <  $data->field_data_field_available_date_field_available_date_value) {
     $actavail  = t(\'Not currently available\');
     }
     else
     {
     $actavail = t(\'Available\');    
     }
     foreach ($activities as $activity) {
     if (($data->field_field_activity_reference[0][\'raw\'][\'entity\']->vid==$activity[\'nid\']) && ($match==FALSE))  {
 $match=TRUE;
        if ($activity[\'assignment_status\']==\'In Progress\') {
           $actavail = t(\'In Progress\');
        } else {
           $actavail = t(\'<span class="status_complete">Approved</span>\');
        }
     }
  }
print $actavail;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
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
  $handler->display->display_options['path'] = 'activities';

  /* Display: Activity Assignment Entity View */
  $handler = $view->new_display('entity_view', 'Activity Assignment Entity View', 'activity_act_assign_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity';
  $handler->display->display_options['display_description'] = 'Shows Activity on Activity Assignment Node';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'not working!!!!!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Activity Objective */
  $handler->display->display_options['fields']['field_activity_objective']['id'] = 'field_activity_objective';
  $handler->display->display_options['fields']['field_activity_objective']['table'] = 'field_data_field_activity_objective';
  $handler->display->display_options['fields']['field_activity_objective']['field'] = 'field_activity_objective';
  /* Field: Content: Activity Description */
  $handler->display->display_options['fields']['field_activity_description']['id'] = 'field_activity_description';
  $handler->display->display_options['fields']['field_activity_description']['table'] = 'field_data_field_activity_description';
  $handler->display->display_options['fields']['field_activity_description']['field'] = 'field_activity_description';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['delta_offset'] = '0';
  /* Field: File Usage: Entity ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'file_usage';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'activity' => 'activity',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'activity_assignment',
  );

  /* Display: Activity Assignment Attachment */
  $handler = $view->new_display('entity_view', 'Activity Assignment Attachment', 'activity_assignment_attach_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'activity assignment attachment';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
 global $user; 
 // print($user->uid);
$nid = arg(1);
$url = "node/add/act-assignment-resource/";
print t(\'<H2>Attachments</H2>\');
print \'<div class="attachment_blurb">\';
print t(\'Upload Activity attachment. Your upload will be sent to your program administrator for approval. After the administrator approves it, it will appear in your Activity page for review.\');
print \'</div><br/>\';
//if(($user->uid == $node->uid) || ($user->uid ==\'1\')){
  	print l(t(\'Add An Attachment\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_act_assign_entity"=>$nid,drupal_get_destination())
  	));
//};
?> ';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No attachments';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Attachments */
  $handler->display->display_options['fields']['field_attachments']['id'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['table'] = 'field_data_field_attachments';
  $handler->display->display_options['fields']['field_attachments']['field'] = 'field_attachments';
  $handler->display->display_options['fields']['field_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachments']['type'] = 'nivo_formatter';
  $handler->display->display_options['fields']['field_attachments']['settings'] = array(
    'nivo_lightbox_target_view_mode' => 'preview',
    'nivo_lightbox_html_lightbox' => 1,
    'nivo_lightbox_lightbox_view_mode' => 'full',
    'nivo_lightbox_effect' => 'fade',
    'nivo_lightbox_theme' => 'default',
    'nivo_lightbox_keyboard_nav' => 1,
    'nivo_lightbox_lightbox_type' => '',
    'nivo_lightbox_error_message' => 'The requested content cannot be loaded. Please try again later.',
  );
  /* Field: Content: Associated Activity Assignment */
  $handler->display->display_options['fields']['field_act_assign_entity']['id'] = 'field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['table'] = 'field_data_field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['field'] = 'field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_act_assign_entity']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Associated Activity Assignment (field_act_assign_entity) */
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['id'] = 'field_act_assign_entity_target_id';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['table'] = 'field_data_field_act_assign_entity';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['field'] = 'field_act_assign_entity_target_id';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_act_assign_entity_target_id']['summary_options']['items_per_page'] = '25';
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
    'act_assignment_resource' => 'act_assignment_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'activity_assignment',
  );

  /* Display: Activity Assignment Comments Attachment */
  $handler = $view->new_display('entity_view', 'Activity Assignment Comments Attachment', 'acct_assign_comments_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'activity assignment comments attachment ';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
 global $user; 
 // print($user->uid);
$nid = arg(1);
$url = "node/add/act-assignment-resource/";
print t(\'<H2>Activity Assignment Resources</H2>\');
//if(($user->uid == $node->uid) || ($user->uid ==\'1\')){
  	print l(t(\'Add a Resource\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               "query" => array("field_act_assign_entity"=>$nid,drupal_get_destination())
  	));
//};
?> ';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No attachments';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'act_assignment_resource' => 'act_assignment_resource',
  );
  $handler->display->display_options['entity_type'] = 'comment';
  $handler->display->display_options['bundles'] = array(
    0 => 'comment_node_activity_assignment',
  );

  /* Display: Group Admin Activities */
  $handler = $view->new_display('page', 'Group Admin Activities', 'groupadmin_activities_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'field_curriculum_reference' => 'field_curriculum_reference',
    'field_unit_tag' => 'field_unit_tag',
    'field_available_date' => 'field_available_date',
    'changed' => 'changed',
    'field_due_date' => 'field_due_date',
    'name' => 'name',
    'edit_node' => 'edit_node',
    'php' => 'php',
    'status' => 'status',
    'publishcontent' => 'publishcontent',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
    'field_curriculum_reference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_tag' => array(
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
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_due_date' => array(
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
    'edit_node' => array(
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
    'publishcontent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Add Activities */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Add Activities';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php print t(\'These are the scheduled program Activities available to mentors and mentees within the school curriculum. These Activities typically have an availability date. If the availability date is today or has passed, then the Activity is accessible by mentees and mentors.<br>\');?>

<?php //print t(\'To start an Activity, click on any of the Activities you see below. Any incomplete activity you have must be completed and approved before you can start a new activity.\');?>

<?php
 global $user;
$check = array_intersect(array(\'Group Admin\', \'Staff Admin\', \'Subsite Admin\', \'administrator\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
  $url = "node/add/activity/";
  echo "<br>";
   echo "<br>";
  print l(t(\'Add an Activity\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'button\')
              ), 
               \'query\' => array(drupal_get_destination())
  	));
}
?> ';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxonomy_tag']['settings'] = array(
    'linked' => 0,
  );
  $handler->display->display_options['fields']['field_taxonomy_tag']['delta_offset'] = '0';
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Edit Activity */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Edit Activity';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '[edit_node]';
  $handler->display->display_options['fields']['php']['alter']['path'] = '[edit_node]';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$check = array_intersect(array(\'Staff Admin\', \'administrator\'), array_values($user->roles));
if (($check==TRUE) || ($user->name == $row->name)) {
echo($row->edit_node);
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Available';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = 'Publish/Upublish';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
return sm_utilities_build_adminlocation_filter_string_activities($user_data);';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
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
    'activity' => 'activity',
  );
  $handler->display->display_options['path'] = 'cm/groupadmin-activities';

  /* Display: Group Admin User Activities View */
  $handler = $view->new_display('page', 'Group Admin User Activities View', 'gauseractivity_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Admin User Activities Views';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
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
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no activities in progress at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Activity';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Mentee';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Mentee';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'users/[name]';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last Updated';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
//$user_data = user_load(\'117\');
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
return $tid;';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['fail'] = 'empty';
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
  );
  $handler->display->display_options['path'] = 'gauseractivities';

  /* Display: GA User Activities View Dashboard */
  $handler = $view->new_display('page', 'GA User Activities View Dashboard', 'gauseractivitydash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Admin User Activities Views';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
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
    'name' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no activities in progress at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
//$user_data = user_load(\'117\');
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
return $tid;';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate_options']['vocabularies'] = array(
    'user_hierarchy' => 'user_hierarchy',
  );
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['fail'] = 'empty';
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
  );
  $handler->display->display_options['path'] = 'gauseractivitiesdash';

  /* Display: Mentor Mentees Activities */
  $handler = $view->new_display('page', 'Mentor Mentees Activities', 'mentor_mentee_activities_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentee Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_activity_entity_ref]';
  $handler->display->display_options['fields']['nid']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['nid']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['relationship'] = 'uid';
  $handler->display->display_options['fields']['requester_id']['label'] = '';
  $handler->display->display_options['fields']['requester_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requestee user */
  $handler->display->display_options['arguments']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['requestee_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['requestee_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requestee_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requestee_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['requestee_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requestee_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['requestee_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['requestee_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['path'] = 'menteeactivities';

  /* Display: All Activity Assignments Pointing to Node 232 */
  $handler = $view->new_display('page', 'All Activity Assignments Pointing to Node 232', 'all_getting_started');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Activity Assignments Pointing to Node 232';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity_assignment' => 'activity_assignment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Activity Entity Ref (field_activity_entity_ref) */
  $handler->display->display_options['filters']['field_activity_entity_ref_target_id']['id'] = 'field_activity_entity_ref_target_id';
  $handler->display->display_options['filters']['field_activity_entity_ref_target_id']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['filters']['field_activity_entity_ref_target_id']['field'] = 'field_activity_entity_ref_target_id';
  $handler->display->display_options['filters']['field_activity_entity_ref_target_id']['value']['value'] = '232';
  $handler->display->display_options['path'] = 'all_getting_started';

  /* Display: Mentor All Activity View */
  $handler = $view->new_display('page', 'Mentor All Activity View', 'mentor_activity_all_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Assigned Activities';
  $handler->display->display_options['display_description'] = 'This is in the Activity Menu tab for Mentors';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'requester_id' => 'requester_id',
    'changed' => 'changed',
    'field_completion_status' => 'field_completion_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'requester_id' => array(
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
    'field_completion_status' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: User relationships: Requester user */
  $handler->display->display_options['fields']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['fields']['requester_id']['label'] = 'Mentee';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'privatemsg_years';
  /* Field: Content: Completion Status */
  $handler->display->display_options['fields']['field_completion_status']['id'] = 'field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['table'] = 'field_data_field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['field'] = 'field_completion_status';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['arguments']['requestee_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requestee_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['requestee_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['requestee_id']['validate']['fail'] = 'empty';
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
  );
  $handler->display->display_options['path'] = 'mentoractivities';

  /* Display: Activities Available for Assignment */
  $handler = $view->new_display('page', 'Activities Available for Assignment', 'testactivity_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'changed' => 'changed',
  );
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Activity Objective */
  $handler->display->display_options['fields']['field_activity_objective']['id'] = 'field_activity_objective';
  $handler->display->display_options['fields']['field_activity_objective']['table'] = 'field_data_field_activity_objective';
  $handler->display->display_options['fields']['field_activity_objective']['field'] = 'field_activity_objective';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'privatemsg_current_day';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'test [qtip:Name of link (target) text|Text to appear in tooltip]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'testactivities';

  /* Display: Activities View for Mentor */
  $handler = $view->new_display('page', 'Activities View for Mentor', 'activities_mentor_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    7 => '7',
  );
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_taxonomy_tag']['delta_offset'] = '0';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'privatemsg_years';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_due_date']['id'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['table'] = 'field_data_field_due_date';
  $handler->display->display_options['fields']['field_due_date']['field'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_options']['code'] = 'global $user;
$user_data = user_load($user->uid);
//$user_data = user_load(\'117\');
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
return $tid;';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['path'] = 'activitiesmentor';

  /* Display: Assigned Activities by Mentee */
  $handler = $view->new_display('page', 'Assigned Activities by Mentee', 'embed_mentormenteematch_activity_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities in Progress';
  $handler->display->display_options['display_description'] = 'This is in the embedded in mentee match view on dashboard';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
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
    'last_updated' => 'last_updated',
    'changed' => 'changed',
    'field_completion_status' => 'field_completion_status',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = 'last_updated';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_updated' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_completion_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'No Activities are assigned at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['label'] = '';
  $handler->display->display_options['fields']['field_activity_entity_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_entity_ref']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['field_activity_entity_ref']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_activity_entity_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_activity_entity_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[field_activity_entity_ref]';
  $handler->display->display_options['fields']['nid']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['last_updated']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'privatemsg_years';
  /* Field: Content: Completion Status */
  $handler->display->display_options['fields']['field_completion_status']['id'] = 'field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['table'] = 'field_data_field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['field'] = 'field_completion_status';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  );
  /* Filter criterion: Content: Completion Status (field_completion_status) */
  $handler->display->display_options['filters']['field_completion_status_value']['id'] = 'field_completion_status_value';
  $handler->display->display_options['filters']['field_completion_status_value']['table'] = 'field_data_field_completion_status';
  $handler->display->display_options['filters']['field_completion_status_value']['field'] = 'field_completion_status_value';
  $handler->display->display_options['filters']['field_completion_status_value']['value'] = array(
    'In Progress' => 'In Progress',
  );
  $handler->display->display_options['path'] = 'mentoractivitiesbymentee';

  /* Display: Activities Available for Assignment by Mentee */
  $handler = $view->new_display('page', 'Activities Available for Assignment by Mentee', 'mentoractivitiesbymentee_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities for Mentee';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_activity_reference' => 'field_activity_reference',
    'title' => 'title',
    'field_start_activity_mentor' => 'field_start_activity_mentor',
    'field_available_date' => 'field_available_date',
    'field_due_date' => 'field_due_date',
    'changed' => 'changed',
    'php' => 'php',
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
    'field_activity_reference' => array(
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
    'field_start_activity_mentor' => array(
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
    'field_due_date' => array(
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
    'php' => array(
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
  $handler->display->display_options['header']['area']['content'] = 'These are the scheduled program Activities available to mentors and mentees within the school curriculum. These Activities typically have an availability date. If the availability date is today or has passed, then the Activity is accessible by mentees and mentors.

To start an Activity, click on any of the Activities you see below.';
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
  /* Field: Content: Activity */
  $handler->display->display_options['fields']['field_activity_reference']['id'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_start_activity_mentor']['id'] = 'field_start_activity_mentor';
  $handler->display->display_options['fields']['field_start_activity_mentor']['table'] = 'field_data_field_start_activity_mentor';
  $handler->display->display_options['fields']['field_start_activity_mentor']['field'] = 'field_start_activity_mentor';
  $handler->display->display_options['fields']['field_start_activity_mentor']['label'] = 'Activity';
  $handler->display->display_options['fields']['field_start_activity_mentor']['element_label_colon'] = FALSE;
  /* Field: Content: Curriculum */
  $handler->display->display_options['fields']['field_curriculum_reference']['id'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['table'] = 'field_data_field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['field'] = 'field_curriculum_reference';
  $handler->display->display_options['fields']['field_curriculum_reference']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_curriculum_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_due_date']['id'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['table'] = 'field_data_field_due_date';
  $handler->display->display_options['fields']['field_due_date']['field'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Custom Status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Custom Status';
  $handler->display->display_options['fields']['php']['label'] = 'Status';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '//module_load_all();
global $user;
$results = array();
$view = views_get_view(\'jwk_user_activities_views\');
if (is_object($view)) {
 $args=array(arg(2));
// $args=array($user->uid);
  $view->set_arguments($args);
  $view->set_display(\'all_user_activities_with_status\');
  $view->execute();
  $results = $view->result;   
}
$activities = array();
foreach ($results as $result) {
  $activity = array();
  $activity[\'nid\']= $result->field_field_activity_entity_ref[0][\'raw\'][\'entity\']->nid;
  $activity[\'assignment_status\'] = $result->_field_data[\'nid\'][\'entity\']->field_completion_status[LANGUAGE_NONE][0][\'value\'];
//  $activity[\'assignment_date_available\'] = $result->_field_data[\'nid\'][\'entity\']->field_available_date[LANGUAGE_NONE][0][\'value\'];
  $activity[\'assignment_nid\']=$result->nid;
  $activities[] = $activity;
}
$static[\'activities\'] = $activities;
//variable_del(\'activity_assn_\'.$user->uid);
//variable_set(\'activity_assn_\'.$user->uid, $activities);

//variable_del(\'activity_assn_\'.arg(2));
//variable_set(\'activity_assn_\'.arg(2), $activities);
variable_del(\'menteeidfromurl_\'.$user->uid);
variable_set(\'menteeidfromurl_\'.$user->uid,arg(2));
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$menteeid = arg(2);
  //$activities = variable_get(\'activity_assn_\'.$menteeid);
  $activities = $static[\'activities\'];
  $actavail = \'Available\';
  $match = FALSE;
   $t=time();
   $current_date = date("Y-m-d 00:00:00",$t);
   if ($current_date <  $data->field_data_field_available_date_field_available_date_value) {
     $actavail = t(\'Not currently available\');
   } else {
     $actavail = t(\'Available\');
  }
  foreach ($activities as $activity) {
     if (($data->field_field_activity_reference[0][\'raw\'][\'entity\']->vid==$activity[\'nid\']) && ($match==FALSE)) {
        $match=TRUE;
        if ($activity[\'assignment_status\']==\'In Progress\') {
           $actavail = t(\'In Progress\');
        } else {
         $actavail = t(\'<span class="status_complete">Approved</span>\');
        }
     }
  }
 print $actavail;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '2';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Activity Order */
  $handler->display->display_options['fields']['field_activity_order']['id'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['table'] = 'field_data_field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['field'] = 'field_activity_order';
  $handler->display->display_options['fields']['field_activity_order']['relationship'] = 'field_activity_reference_target_id';
  $handler->display->display_options['fields']['field_activity_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tag_tid']['default_argument_type'] = 'php';
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
  $handler->display->display_options['path'] = 'activitiesbymentee';

  /* Display: Activity Materials EVA */
  $handler = $view->new_display('entity_view', 'Activity Materials EVA', 'activity_materials_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Materials';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Title */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['ui_name'] = 'Title';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="field-label"><strong>Activity Materials:</strong></div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no attachments';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Activity Materials */
  $handler->display->display_options['fields']['field_activity_attachments']['id'] = 'field_activity_attachments';
  $handler->display->display_options['fields']['field_activity_attachments']['table'] = 'field_data_field_activity_attachments';
  $handler->display->display_options['fields']['field_activity_attachments']['field'] = 'field_activity_attachments';
  $handler->display->display_options['fields']['field_activity_attachments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_attachments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_activity_attachments']['multi_type'] = 'ul';
  /* Field: Materials View Links */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Materials View Links';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$items = NULL;
if(!empty($data->_field_data[\'nid\'][\'entity\']->field_activity_attachments)){
$items = $data->_field_data[\'nid\'][\'entity\']->field_activity_attachments[\'und\'];
}
$count = count($items);
$i=0;
while ($i < $count) {
$mediafileid = $items[$i][\'fid\'];
$mediauri = $items[$i][\'uri\'];
$filemime = $items[$i][\'filemime\'];
$filename = $items[$i][\'filename\'];
$filetype = strtok($filemime, "/");
$mediaurl = file_create_url($mediauri);
$mediacburl = file_create_url(\'media_colorbox/\' . $mediafileid . \'/colorbox/und/\');
if ($filetype == \'video\') {
print(\'<pre>\');
print l($filename, $mediacburl, array(\'attributes\' => array(\'class\' => array(\'media-colorbox\'))));
print(\'</pre>\');
}
	elseif ($filetype == \'image\') {
$thumbnail =  theme(\'image_style\', array(\'style_name\' => \'thumbnail\', \'path\' => $mediauri));
print(\'<pre>\');
print l($thumbnail, $mediaurl, array(\'attributes\' => array(\'class\' => array(\'media-colorbox\')),\'html\' => TRUE));
print(\'</pre>\');
} 
else {
print(\'<pre>\');
print l($filename, $mediaurl, array(\'attributes\' => array(\'target\' => array(\'_blank\'))));
print(\'</pre>\');
}
++$i;
}

//print_r($items);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'activity',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: Activities Available Count View */
  $handler = $view->new_display('page', 'Activities Available Count View', 'mentee_activities_count_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities Count';
  $handler->display->display_options['display_description'] = 'This view is used in the mentee participation view to calculate total activities for mentee, total complete and total in progre ';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
    5 => '5',
  );
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These are the scheduled program Activities available to mentors and mentees within the school curriculum. These Activities typically have an availability date. If the availability date is today or has passed, then the Activity is accessible by mentees and mentors.

To start an Activity, click on any of the Activities you see below. Any incomplete activity you have must be completed and approved before you can start a new activity.';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities available at this time';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_due_date']['id'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['table'] = 'field_data_field_due_date';
  $handler->display->display_options['fields']['field_due_date']['field'] = 'field_due_date';
  $handler->display->display_options['fields']['field_due_date']['exclude'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Custom Status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Custom Status';
  $handler->display->display_options['fields']['php']['label'] = 'Status';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '//module_load_all();
global $user;
$results = array();
$view = views_get_view(\'jwk_user_activities_views\');
if (is_object($view)) {
  $args=array($user->uid);
  $view->set_arguments($args);
  $view->set_display(\'all_user_activities_with_status\');
  $view->execute();
  $results = $view->result;   
}
$activities = array();
foreach ($results as $result) {
  $activity = array();
  $activity[\'nid\']= $result->field_field_activity_entity_ref[0][\'raw\'][\'entity\']->nid;
  $activity[\'assignment_status\'] = $result->_field_data[\'nid\'][\'entity\']->field_completion_status[LANGUAGE_NONE][0][\'value\'];
//  $activity[\'assignment_date_available\'] = $result->_field_data[\'nid\'][\'entity\']->field_available_date[LANGUAGE_NONE][0][\'value\'];
  $activity[\'assignment_nid\']=$result->nid;
  $activities[] = $activity;
}
$static[\'activities\'] = $activities;
/*variable_del(\'activity_assn_\'.$user->uid);
variable_set(\'activity_assn_\'.$user->uid, $activities);*/';
  $handler->display->display_options['fields']['php']['php_value'] = ' global $user;
  $activities = variable_get(\'activity_assn_\'.$user->uid);
  $match = FALSE;

   $t=time();
   $current_date = date("Y-m-d 00:00:00",$t);
   if ($current_date <  $data->field_data_field_available_date_field_available_date_value) {
     $status = t(\'Not currently available\');
   } else {
     $status = t(\'Available\');
  }
  foreach ($activities as $activity) {
     if (($row->nid==$activity[\'nid\']) && ($match==FALSE)) {
        $match=TRUE;
        if ($activity[\'assignment_status\']==\'In Progress\') {
           return t(\'In Progress\');
        } else {
           return t(\'<span class="status_complete">Approved</span>\');
        }
     }
  }
  return $status;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
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
  $handler->display->display_options['path'] = 'menteeactivitiescount';

  /* Display: Activities Available - reports */
  $handler = $view->new_display('page', 'Activities Available - reports', 'activities_available_reports');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    5 => '5',
    8 => '8',
    7 => '7',
  );
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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Activities available at this time';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
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
  $handler->display->display_options['path'] = 'activities1';

  /* Display: Activity Change Location */
  $handler = $view->new_display('page', 'Activity Change Location', 'activity_change_location_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities Change Location';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
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
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'activity::field_taxonomy_tag' => 'activity::field_taxonomy_tag',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'activitychangelocation';

  /* Display: Admin Activity Assignments */
  $handler = $view->new_display('page', 'Admin Activity Assignments', 'adminactassign_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Admin Activity Assignments';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_taxonomy_tag' => 'field_taxonomy_tag',
    'name' => 'name',
    'status' => 'status',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
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
    'field_taxonomy_tag' => array(
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
    'status' => array(
      'sortable' => 0,
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Location/Class */
  $handler->display->display_options['fields']['field_taxonomy_tag']['id'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['field'] = 'field_taxonomy_tag';
  $handler->display->display_options['fields']['field_taxonomy_tag']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_taxonomy_tag']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'privatemsg_current_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  );
  $handler->display->display_options['path'] = 'adminactassignments';

  /* Display: User Activities List */
  $handler = $view->new_display('page', 'User Activities List', 'user_activities_list');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    5 => '5',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
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
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
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
  );
  $handler->display->display_options['path'] = 'user_activities_list';

  /* Display: Activities Available for Assignment Dash */
  $handler = $view->new_display('page', 'Activities Available for Assignment Dash', 'actvitiesdash_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    6 => '6',
    5 => '5',
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
  /* Field: Content: Activity */
  $handler->display->display_options['fields']['field_activity_reference']['id'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['field'] = 'field_activity_reference';
  $handler->display->display_options['fields']['field_activity_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_start_activity']['id'] = 'field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['table'] = 'field_data_field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['field'] = 'field_start_activity';
  $handler->display->display_options['fields']['field_start_activity']['label'] = 'Activity';
  $handler->display->display_options['fields']['field_start_activity']['element_label_colon'] = FALSE;
  /* Field: Content: Available Date */
  $handler->display->display_options['fields']['field_available_date']['id'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['fields']['field_available_date']['field'] = 'field_available_date';
  $handler->display->display_options['fields']['field_available_date']['settings'] = array(
    'format_type' => 'privatemsg_years',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Status';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '//module_load_all();
global $user;
$results = array();
$view = views_get_view(\'jwk_user_activities_views\');
if (is_object($view)) {
  $args=array($user->uid);
  $view->set_arguments($args);
  $view->set_display(\'all_user_activities_with_status\');
  $view->execute();
  $results = $view->result;   
}
$activities = array();
foreach ($results as $result) {
  $activity = array();
  $activity[\'nid\']= $result->field_field_activity_entity_ref[0][\'raw\'][\'entity\']->nid;
  $activity[\'assignment_status\'] = $result->_field_data[\'nid\'][\'entity\']->field_completion_status[LANGUAGE_NONE][0][\'value\'];
//  $activity[\'assignment_date_available\'] = $result->_field_data[\'nid\'][\'entity\']->field_available_date[LANGUAGE_NONE][0][\'value\'];
  $activity[\'assignment_nid\']=$result->nid;
  $activities[] = $activity;
}
$static[\'activities\'] = $activities;
/*variable_del(\'activity_assn_\'.$user->uid);
variable_set(\'activity_assn_\'.$user->uid, $activities);*/';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$match=FALSE;
  //$activities = variable_get(\'activity_assn_\'.$user->uid);
 $activities = $static[\'activities\'];
$actavail = \'Available\';
   $t=time();
   $current_date = date("Y-m-d 00:00:00",$t);
   if ($current_date <  $data->field_data_field_available_date_field_available_date_value) {
     $actavail  = t(\'Not currently available\');
     }
     else
     {
     $actavail = t(\'Available\');    
     }
     foreach ($activities as $activity) {
     if (($data->field_field_activity_reference[0][\'raw\'][\'entity\']->vid==$activity[\'nid\']) && ($match==FALSE))  {
 $match=TRUE;
        if ($activity[\'assignment_status\']==\'In Progress\') {
           $actavail = t(\'In Progress\');
        } else {
           $actavail = t(\'<span class="status_complete">Approved</span>\');
        }
     }
  }
print $actavail;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  /* Sort criterion: Content: Available Date (field_available_date) */
  $handler->display->display_options['sorts']['field_available_date_value']['id'] = 'field_available_date_value';
  $handler->display->display_options['sorts']['field_available_date_value']['table'] = 'field_data_field_available_date';
  $handler->display->display_options['sorts']['field_available_date_value']['field'] = 'field_available_date_value';
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
  $handler->display->display_options['path'] = 'activitiesdash';
  $export['jwk_user_activities_views'] = $view;

  $view = new view();
  $view->name = 'mentee_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mentee Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentee Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_activity_entity_ref']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_activity_entity_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Completion Status */
  $handler->display->display_options['fields']['field_completion_status']['id'] = 'field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['table'] = 'field_data_field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['field'] = 'field_completion_status';
  $handler->display->display_options['fields']['field_completion_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_completion_status']['alter']['text'] = '[field_completion_status-value]';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Activity Entity Ref (field_activity_entity_ref) */
  $handler->display->display_options['arguments']['field_activity_entity_ref_target_id']['id'] = 'field_activity_entity_ref_target_id';
  $handler->display->display_options['arguments']['field_activity_entity_ref_target_id']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['arguments']['field_activity_entity_ref_target_id']['field'] = 'field_activity_entity_ref_target_id';
  $handler->display->display_options['arguments']['field_activity_entity_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_activity_entity_ref_target_id']['summary']['format'] = 'default_summary';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'user_activities_list_mentee');
  $handler->display->display_options['path'] = 'mentee-activitiesjwk';

  /* Display: Mentee Activity Replies */
  $handler = $view->new_display('page', 'Mentee Activity Replies', 'activityreplybyuser_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_actassign_reference_target_id']['id'] = 'field_actassign_reference_target_id';
  $handler->display->display_options['relationships']['field_actassign_reference_target_id']['table'] = 'field_data_field_actassign_reference';
  $handler->display->display_options['relationships']['field_actassign_reference_target_id']['field'] = 'field_actassign_reference_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'privatemsg_current_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_actassign_body']['id'] = 'field_actassign_body';
  $handler->display->display_options['fields']['field_actassign_body']['table'] = 'field_data_field_actassign_body';
  $handler->display->display_options['fields']['field_actassign_body']['field'] = 'field_actassign_body';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: actassign_reference */
  $handler->display->display_options['fields']['field_actassign_reference']['id'] = 'field_actassign_reference';
  $handler->display->display_options['fields']['field_actassign_reference']['table'] = 'field_data_field_actassign_reference';
  $handler->display->display_options['fields']['field_actassign_reference']['field'] = 'field_actassign_reference';
  $handler->display->display_options['fields']['field_actassign_reference']['label'] = '';
  $handler->display->display_options['fields']['field_actassign_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_actassign_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Activity Entity Ref */
  $handler->display->display_options['fields']['field_activity_entity_ref']['id'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['table'] = 'field_data_field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['field'] = 'field_activity_entity_ref';
  $handler->display->display_options['fields']['field_activity_entity_ref']['relationship'] = 'field_actassign_reference_target_id';
  $handler->display->display_options['fields']['field_activity_entity_ref']['settings'] = array(
    'link' => 0,
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
  $handler->display->display_options['arguments']['uid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: actassign_reference (field_actassign_reference) */
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['id'] = 'field_actassign_reference_target_id';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['table'] = 'field_data_field_actassign_reference';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['field'] = 'field_actassign_reference_target_id';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_actassign_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'activity_assignment_response' => 'activity_assignment_response',
  );
  /* Filter criterion: Raw SQL: Raw filter */
  $handler->display->display_options['filters']['raw_filter']['id'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['table'] = 'views_raw_sql';
  $handler->display->display_options['filters']['raw_filter']['field'] = 'raw_filter';
  $handler->display->display_options['filters']['raw_filter']['raw_sql'] = 'SELECT nid FROM node as n2 WHERE n2.uid IN (!args1) AND n2.nid = (SELECT field_actassign_reference_target_id FROM node as n3 LEFT JOIN field_data_field_actassign_reference as far ON far.entity_id = n3.nid WHERE nid = node.nid)';
  $handler->display->display_options['path'] = 'mentee-activitiesreply';
  $export['mentee_activities'] = $view;

  return $export;
}
