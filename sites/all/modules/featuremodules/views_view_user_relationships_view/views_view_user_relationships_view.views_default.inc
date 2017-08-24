<?php
/**
 * @file
 * views_view_user_relationships_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_view_user_relationships_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_relationships_view';
  $view->description = 'Shows someone\'s related users';
  $view->tag = '';
  $view->base_table = 'user_relationships';
  $view->human_name = 'JWK user_relationships_browser';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
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
  /* Field: User relationship types: Plural name */
  $handler->display->display_options['fields']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['fields']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['relationship'] = 'rtid';
  $handler->display->display_options['fields']['plural_name']['label'] = '';
  $handler->display->display_options['fields']['plural_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['plural_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'mp_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  /* Field: User relationships: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Matched';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Sort criterion: User relationship types: Plural name */
  $handler->display->display_options['sorts']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['sorts']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['sorts']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['sorts']['plural_name']['relationship'] = 'rtid';
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

  /* Display: JWK user relations Page */
  $handler = $view->new_display('page', 'JWK user relations Page', 'jwkuserrelations_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'relationships/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Relationships';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: JWK Relationships EVA Field */
  $handler = $view->new_display('entity_view', 'JWK Relationships EVA Field', 'user_relations_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
//global $user;
//if (in_array(\'Mentee\', $user->roles)) {
//  $url = "menteementorselect";
//print t(\'<H2>Mentors</H2>\');
 // 	print l(t(\'Find a Mentor\'), $url,
  //	  array(
    //          \'attributes\' => array(
      //          \'class\' => array(\'button\')
        //      ), 
          //     \'query\' => array(drupal_get_destination())
  //	));
//}
?> ';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No users are currently paired to this profile.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User relationship types: Plural name */
  $handler->display->display_options['fields']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['fields']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['relationship'] = 'rtid';
  $handler->display->display_options['fields']['plural_name']['label'] = '';
  $handler->display->display_options['fields']['plural_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['plural_name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'mp_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User relationships: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Matched';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: User relationships: Status link */
  $handler->display->display_options['fields']['status_link']['id'] = 'status_link';
  $handler->display->display_options['fields']['status_link']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['status_link']['field'] = 'status_link';
  $handler->display->display_options['fields']['status_link']['label'] = '';
  $handler->display->display_options['fields']['status_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status_link']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$mentee_uid = arg(1);
$relationship_id = $row->uid;
$relationships = user_relationships_load(array(\'between\' => array($mentee_uid, $relationship_id)) );
foreach ($relationships as $relationship) { // there is just one
    $url = \'user/\'. $mentee_uid . \'/relationships/\' . $relationship->rid . \'/remove\' ;
  	print l(t(\'Remove Match\'), $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'link\')
              ), 
               \'query\' => array(drupal_get_destination())
  	));
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requester user */
  $handler->display->display_options['arguments']['requester_id']['id'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requester_id']['field'] = 'requester_id';
  $handler->display->display_options['arguments']['requester_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requester_id']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['requester_id']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requester_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requester_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['requester_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requester_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: JWK Relationships EVA Field mentor */
  $handler = $view->new_display('entity_view', 'JWK Relationships EVA Field mentor', 'user_relations_mentor_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
//global $user;
//if (in_array(\'Mentee\', $user->roles)) {
//  $url = "menteementorselect";
//print t(\'<H2>Mentors</H2>\');
 // 	print l(t(\'Find a Mentor\'), $url,
  //	  array(
    //          \'attributes\' => array(
      //          \'class\' => array(\'button\')
        //      ), 
          //     \'query\' => array(drupal_get_destination())
  //	));
//}
?> ';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No users are currently paired to this profile.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User relationship types: Plural name */
  $handler->display->display_options['fields']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['fields']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['relationship'] = 'rtid';
  $handler->display->display_options['fields']['plural_name']['label'] = '';
  $handler->display->display_options['fields']['plural_name']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'mp_thumb';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User relationships: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Matched';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name_1, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send message\', $addurlfull, array(\'query\' => array($destination)));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User relationships: Requestee user */
  $handler->display->display_options['arguments']['requestee_id']['id'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['table'] = 'user_relationships';
  $handler->display->display_options['arguments']['requestee_id']['field'] = 'requestee_id';
  $handler->display->display_options['arguments']['requestee_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['requestee_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['requestee_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['requestee_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['requestee_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['requestee_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requestee_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['entity_type'] = 'user';
  $handler->display->display_options['bundles'] = array(
    0 => 'user',
  );
  $handler->display->display_options['show_title'] = 0;

  /* Display: JWK Relationships Dash EVA Field mentor */
  $handler = $view->new_display('entity_view', 'JWK Relationships Dash EVA Field mentor', 'mentorrelationship_dash_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Mentees';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No users are currently paired to this profile.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Online Status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Online Status';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//users last access time
$showtime1 = $row->access;

// current time
$date = date_create();
$showtime2= date_timestamp_get($date);

//users last access time - current time
$showtime3 = $showtime2 - $showtime1;

if ($showtime3 < 200) {
echo \'<span class="online" title="user is online">\';
echo $row->name_1;
echo \'</span>\';
}
else {
echo \'<span class="offline" title="user is offline">\';
echo $row->name_1;
echo \'</span>\';
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User relationship types: Plural name */
  $handler->display->display_options['fields']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['fields']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['relationship'] = 'rtid';
  $handler->display->display_options['fields']['plural_name']['label'] = '';
  $handler->display->display_options['fields']['plural_name']['exclude'] = TRUE;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['access']['label'] = '';
  $handler->display->display_options['fields']['access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['access']['date_format'] = 'custom';
  $handler->display->display_options['fields']['access']['custom_date_format'] = 'c';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'mp_thumb';
  /* Field: User: My Status */
  $handler->display->display_options['fields']['field_check_in']['id'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['table'] = 'field_data_field_check_in';
  $handler->display->display_options['fields']['field_check_in']['field'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['field_check_in']['label'] = '';
  $handler->display->display_options['fields']['field_check_in']['element_label_colon'] = FALSE;
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['login']['date_format'] = 'custom';
  $handler->display->display_options['fields']['login']['custom_date_format'] = 'm/d/y';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name_1, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send a message\', $addurlfull,
    array(
        \'attributes\' => array(\'class\' => array(\'button\')), 
        \'query\' => array($destination))
);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requester_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Send Reward */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Send Reward';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Send a reward';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/endorsement/?field_endorsee_entity=[uid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['nothing']['alter']['skipxss'] = TRUE;
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
  /* Field: Forum */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Forum';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$menteeid = $row->uid;
$user_data = user_load($menteeid);
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
$final_includes = \'\';
$tidparent = taxonomy_get_parents_all($tid);
$ttotal = count($tidparent);
$t=0;
foreach($tidparent  as $presults){
$t++;
if ($t != $ttotal) {
   $final_includes .= $presults->tid . \'+\';
}
else{ 
$final_includes .= $presults->tid;
}
}
$locationtermid = $tid;
if($final_includes != \'\'){
$locationtermid = $tid .\'+\' . $final_includes;
}
$view = views_get_view(\'forum_names\');
  $view->set_display(\'menteeforum_page\');
 $view->set_arguments(array($locationtermid));
  $view->pre_execute();
  $view->execute();
  $results = $view->result;   
  $forumsnames = \'\';
$forumcount = 0;
  foreach($results as $forums){
    $forumsnames = $forums->tid;
$forumcount += 1;
  }
 if($forumcount == 1) { 
$addurl = url(\'forum/\'. $forumsnames, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Forum\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')))
    //    \'attributes\' => array(\'class\' => array(\'go-button\')), 
   //    \'query\' => array($destination))
);
}
else{
	$addurl = url(\'my-forumlocation/\'. $locationtermid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Forum\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')))
    //    \'attributes\' => array(\'class\' => array(\'go-button\')), 
   //    \'query\' => array($destination))
);
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Calendar */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'Calendar';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$menteeid = $row->uid;
$user_data = user_load($menteeid);
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
$final_includes = \'\';
$tidparent = taxonomy_get_parents_all($tid);
$ttotal = count($tidparent);
$t=0;
foreach($tidparent  as $presults){
$t++;
if ($t != $ttotal) {
   $final_includes .= $presults->tid . \'+\';
}
else{ 
$final_includes .= $presults->tid;
}
}
$locationtermid = $final_includes;
$addurl = url(\'calendar/calendar/\'. $locationtermid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Calendar\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')))
    //    \'attributes\' => array(\'class\' => array(\'go-button\')), 
   //    \'query\' => array($destination))
);
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: View Activities */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['ui_name'] = 'View Activities';
  $handler->display->display_options['fields']['php_4']['label'] = '';
  $handler->display->display_options['fields']['php_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<h2>Activities in Progress</h2>
<span class="titlebar_link">
<?php
global $user;
$menteeid = $row->uid;
//$menteeid=\'6184\';
$user_data = user_load($menteeid);
$items = $user_data->field_taxonomy_tag[\'und\'];
$count = count($items);
$i=0;
while ($i < $count) {
$data = $items[$i];
++$i;
}
$tid = $data[\'tid\'];
$final_includes = \'\';
$tidparent = taxonomy_get_parents_all($tid);
$ttotal = count($tidparent);
$t=0;
foreach($tidparent  as $presults){
$t++;
if ($t != $ttotal) {
   $final_includes .= $presults->tid . \'+\';
}
else{ 
$final_includes .= $presults->tid;
}
}
$locationtermid = $final_includes;
$check = array_intersect(array(\'Mentee\', \'Mentor\'), array_values($user->roles));
if (empty($check) ? FALSE : TRUE) {
  $url = \'activitiesbymentee/\' . $locationtermid . \'/\' . $menteeid;
  	print l(t(\'Work on Activities\'), $url,
  	  array(
             \'attributes\' => array(
               \'class\' => array(\'go-button\')
              ), 
              // \'query\' => array(drupal_get_destination())
  	));
}
?>
</span>


';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Assigned Activities by Mentee */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Assigned Activities by Mentee';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'jwk_user_activities_views';
  $handler->display->display_options['fields']['view']['display'] = 'embed_mentormenteematch_activity_page';
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
  $handler->display->display_options['arguments']['requestee_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['requestee_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'customdashboard',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 0;

  /* Display: JWK Relationships Dash EVA Field Mentee */
  $handler = $view->new_display('entity_view', 'JWK Relationships Dash EVA Field Mentee', 'menteerelationship_dash_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Mentors';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row-start-open'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No users are currently paired to this profile.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Online Status */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Online Status';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//users last access time
$showtime1 = $row->access;

// current time
$date = date_create();
$showtime2= date_timestamp_get($date);

//users last access time - current time
$showtime3 = $showtime2 - $showtime1;

if ($showtime3 < 200) {
echo \'<span class="online" title="user is online">\';
echo $row->name;
echo \'</span>\';
}
else {
echo \'<span class="offline" title="user is offline">\';
echo $row->name;
echo \'</span>\';
}
?> ';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User relationship types: Plural name */
  $handler->display->display_options['fields']['plural_name']['id'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['table'] = 'user_relationship_types';
  $handler->display->display_options['fields']['plural_name']['field'] = 'plural_name';
  $handler->display->display_options['fields']['plural_name']['relationship'] = 'rtid';
  $handler->display->display_options['fields']['plural_name']['label'] = '';
  $handler->display->display_options['fields']['plural_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['plural_name']['element_label_colon'] = FALSE;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['access']['date_format'] = 'custom';
  $handler->display->display_options['fields']['access']['custom_date_format'] = 'c';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

//Mentor vacation status on profile

$user_data = user_load($row->uid);
$vacationStatus = $user_data->field_vacation;
$vacationValue= $vacationStatus[\'und\'][0][\'value\'];

if ($vacationValue==\'1\') {
echo \'
<span class="field-content"><b><font color="red" size="0.8em">I am currently out on vacation</font></b></span>\';
}




?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'mp_thumb';
  /* Field: User: My Status */
  $handler->display->display_options['fields']['field_check_in']['id'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['table'] = 'field_data_field_check_in';
  $handler->display->display_options['fields']['field_check_in']['field'] = 'field_check_in';
  $handler->display->display_options['fields']['field_check_in']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['field_check_in']['label'] = '';
  $handler->display->display_options['fields']['field_check_in']['element_label_colon'] = FALSE;
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['login']['date_format'] = 'custom';
  $handler->display->display_options['fields']['login']['custom_date_format'] = 'm/d/y';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send a message\', $addurlfull,
    array(
        \'attributes\' => array(\'class\' => array(\'button\')), 
        \'query\' => array($destination))
);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'requestee_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Endorsement Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Endorsement Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Send a reward';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/endorsement/?field_endorsee_entity=[uid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['nothing']['alter']['skipxss'] = TRUE;
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'customdashboard',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 0;
  $export['user_relationships_view'] = $view;

  return $export;
}
