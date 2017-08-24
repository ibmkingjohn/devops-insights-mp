<?php
/**
 * @file
 * lets_chat.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lets_chat_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard_lets_chat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard Lets Chat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Let\'s Chat';
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
  /* Header: Start Chat */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Start Chat';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
global $user;
$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.$user->uid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Start Chat\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')),
       // \'attributes\' => array(\'class\' => array(\'button\')), 
        //\'query\' => array($destination)
)
);
?>';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no conversations at this time.';
  $handler->display->display_options['empty']['area_text_custom']['roles'] = array(
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
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Chat Subject';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[site:url]node/[nid]?field_letschat_reference=[nid]">[title_field]</a>';
  $handler->display->display_options['fields']['nothing']['alter']['skipxss'] = TRUE;
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Last Reply tpl */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['ui_name'] = 'Last Reply tpl';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Last Reply';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
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
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';

  /* Display: Lets Chat Mentee */
  $handler = $view->new_display('page', 'Lets Chat Mentee', 'letschatmntee_dashboard_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['path'] = 'dashboardmentee-lets-chat';

  /* Display: Lets Chat Mentor */
  $handler = $view->new_display('page', 'Lets Chat Mentor', 'letschatmntorbymentee_dashboard_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'dashboardmentor-lets-chat';

  /* Display: Lets Chat Mentor Dash */
  $handler = $view->new_display('page', 'Lets Chat Mentor Dash', 'lcbymentee_mentordashboard_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Last Reply tpl */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['ui_name'] = 'Last Reply tpl';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[site:url]node/[nid]?field_letschat_reference=[nid]">[title_field]</a>';
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
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'dashmentormentee-lets-chat';

  /* Display: Lets Chat reply */
  $handler = $view->new_display('page', 'Lets Chat reply', 'letschat_reply_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['validate_options']['types'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat_reply' => 'lets_chat_reply',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'lets-chat-reply';

  /* Display: Lets Chat Mentee Draft */
  $handler = $view->new_display('page', 'Lets Chat Mentee Draft', 'letschatmnteedraft_dashboard_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Let\'s Chat Draft\'s';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Only one draft may be open at a time. Please click the chat below to start the conversation. ';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<p>Mentors and mentees can "chat" about topics that are important to them.  To start a chat click on "Let\'s Chat!"  To continue a chat, click on an existing Chat Subject.</p>

<?php
global $user;
$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.$user->uid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Start Chat\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')),
       // \'attributes\' => array(\'class\' => array(\'button\')), 
        \'query\' => array($destination)
)
);
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = 'node/[nid]/edit/?';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Drafts';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  $handler->display->display_options['filters']['field_filtered_value']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'dashboardmentee-lets-chatdraft';

  /* Display: Lets Chat Mentor Draft */
  $handler = $view->new_display('page', 'Lets Chat Mentor Draft', 'letschatmntorbymenteedraft_dashboard_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Only one draft may be open at a time. Please click the chat below to start the conversation. ';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<p>Mentors and mentees can "chat" about topics that are important to them.  To start a chat click on "Let\'s Chat!"  To continue a chat, click on an existing Chat Subject.</p>

<?php
//$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.arg(1), array(\'absolute\' => TRUE));
$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.arg(1), array(\'absolute\' => TRUE));

$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Start Chat\', $addurlfull,
   array(
// \'attributes\' => array(\'class\' => array(\'button\',\'colorbox-load\')),
        \'attributes\' => array(\'class\' => array(\'button\')), 
       \'query\' => array($destination)
)
);
?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Drafts';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title_field]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  $handler->display->display_options['filters']['field_filtered_value']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'dashboardmentor-lets-chatdraft';

  /* Display: Lets Chat Mentor Dash */
  $handler = $view->new_display('page', 'Lets Chat Mentor Dash', 'lcbymentee_mentordashboarddraft_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Last Reply tpl */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['ui_name'] = 'Last Reply tpl';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[site:url]node/[nid]?field_letschat_reference=[nid]">[title_field]</a>';
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
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'dashmentormentee-lets-chatdraft';

  /* Display: Lets chat viewed Page */
  $handler = $view->new_display('page', 'Lets chat viewed Page', 'letschat_viewedflag_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Let\'s Chat Viewed Node';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_last_viewed_lets_chat */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'flag Last Viewed';
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'flag_last_viewed_lets_chat';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Go To Conversation Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Go To Conversation Text';
  $handler->display->display_options['fields']['nothing']['label'] = 'Go To Conversation Text';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[site:url]node/[nid]?field_letschat_reference=[nid]">[title_field]</a>';
  $handler->display->display_options['fields']['nothing']['alter']['skipxss'] = TRUE;
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Last Reply tpl */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['ui_name'] = 'Last Reply tpl';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Last Reply';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Flags: Flagged time */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Flags: Clear flags */
  $handler->display->display_options['fields']['clear_link']['id'] = 'clear_link';
  $handler->display->display_options['fields']['clear_link']['table'] = 'flagging';
  $handler->display->display_options['fields']['clear_link']['field'] = 'clear_link';
  $handler->display->display_options['fields']['clear_link']['relationship'] = 'flag_content_rel_1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Who Viewed Page Name';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_mparchive_value']['group'] = 1;
  $handler->display->display_options['path'] = 'letschatviewedflag';
  $export['dashboard_lets_chat'] = $view;

  $view = new view();
  $view->name = 'lets_chat_mobile_service';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lets Chat Mobile Service';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Let\'s Chat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
    5 => '5',
    8 => '8',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Start Chat */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Start Chat';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
global $user;
$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.$user->uid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Start Chat\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')),
       // \'attributes\' => array(\'class\' => array(\'button\')), 
        //\'query\' => array($destination)
)
);
?>';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no conversations at this time.';
  $handler->display->display_options['empty']['area_text_custom']['roles'] = array(
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Go to Conversation */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Go to Conversation';
  $handler->display->display_options['fields']['php']['label'] = 'Chat Subject';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$titlename = $data->_field_data[\'nid\'][\'entity\']->title;
$url = (\'node/\'.$row->nid);
   echo l($titlename, $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'link\')
              ),        
"query" => array("field_letschat_reference"=>$row->nid)            
  	));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
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
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Lets Chat Mentee json */
  $handler = $view->new_display('page', 'Lets Chat Mentee json', 'lets_chat_mentee_json');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_last_viewed_lets_chat */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_last_viewed';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_last_viewed_lets_chat';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'flag as inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: menteeauth */
  $handler->display->display_options['fields']['field_menteeauth']['id'] = 'field_menteeauth';
  $handler->display->display_options['fields']['field_menteeauth']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['fields']['field_menteeauth']['field'] = 'field_menteeauth';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'subject';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$titlename = $data->_field_data[\'nid\'][\'entity\']->title;
echo $titlename;
/*$url = (\'node/\'.$row->nid);
   echo l($titlename, $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'link\')
              ),        
"query" => array("field_letschat_reference"=>$row->nid)            
  	));*/
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'last_reply';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
//$mentee = $data->_field_data[\'nid\'][\'entity\']->field_menteeauth[\'und\'][0][\'value\'];
$last_reply = sm_utilities_last_chat_reply($row->nid, true);
if ($last_reply != "0"){
echo \'<span class="last_reply">\'.$last_reply.\'</span>\';
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_4']['id'] = 'raw_field_4';
  $handler->display->display_options['fields']['raw_field_4']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_4']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_4']['label'] = 'created_time';
  $handler->display->display_options['fields']['raw_field_4']['raw_sql'] = '(SELECT created FROM {node} cn WHERE cn.nid = node.nid LIMIT 1)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_5']['id'] = 'raw_field_5';
  $handler->display->display_options['fields']['raw_field_5']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_5']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_5']['label'] = 'mentor_unread';
  $handler->display->display_options['fields']['raw_field_5']['raw_sql'] = '(SELECT count(1) FROM {field_data_field_letschat_reference} ref LEFT JOIN {flagging} r ON r.entity_id = ref.field_letschat_reference_target_id LEFT JOIN {node} n ON n.nid = ref.entity_id WHERE r.fid = (SELECT fid FROM {flag} f WHERE f.name = \'flag_last_viewed_lets_chat\' LIMIT 1) AND r.uid != (SELECT field_menteeauth_value FROM {field_data_field_menteeauth} mauth WHERE mauth.entity_id = node.nid) AND ref.field_letschat_reference_target_id = node.nid AND n.created > r.timestamp AND n.type = \'lets_chat_reply\' AND n.status = 1 LIMIT 1)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_6']['id'] = 'raw_field_6';
  $handler->display->display_options['fields']['raw_field_6']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_6']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_6']['label'] = 'mentee_unread';
  $handler->display->display_options['fields']['raw_field_6']['raw_sql'] = '(SELECT count(1) FROM {field_data_field_letschat_reference} ref LEFT JOIN {flagging} r ON r.entity_id = ref.field_letschat_reference_target_id LEFT JOIN {node} n ON n.nid = ref.entity_id WHERE r.fid = (SELECT fid FROM {flag} f WHERE f.name = \'flag_last_viewed_lets_chat\' LIMIT 1) AND r.uid = (SELECT field_menteeauth_value FROM {field_data_field_menteeauth} mauth WHERE mauth.entity_id = node.nid) AND ref.field_letschat_reference_target_id = node.nid AND n.created > r.timestamp AND n.type = \'lets_chat_reply\' AND n.status = 1 LIMIT 1)';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field']['id'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field']['label'] = 'mentor_is_read';
  $handler->display->display_options['fields']['raw_field']['raw_sql'] = '(SELECT count(1) FROM flagging f LEFT JOIN flag fl ON fl.fid = f.fid WHERE fl.name = \'flag_last_viewed_lets_chat\' AND f.entity_id = node.nid AND f.uid != (SELECT m.field_menteeauth_value FROM field_data_field_menteeauth m WHERE entity_id = nid))';
  /* Field: Raw SQL: Raw field */
  $handler->display->display_options['fields']['raw_field_1']['id'] = 'raw_field_1';
  $handler->display->display_options['fields']['raw_field_1']['table'] = 'views_raw_sql';
  $handler->display->display_options['fields']['raw_field_1']['field'] = 'raw_field';
  $handler->display->display_options['fields']['raw_field_1']['label'] = 'mentee_is_read';
  $handler->display->display_options['fields']['raw_field_1']['raw_sql'] = '(SELECT count(1) FROM flagging f LEFT JOIN flag fl ON fl.fid = f.fid WHERE fl.name = \'flag_last_viewed_lets_chat\' AND f.entity_id = node.nid AND f.uid = (SELECT m.field_menteeauth_value FROM field_data_field_menteeauth m WHERE entity_id = nid))';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['path'] = 'dashboardmentee-lets-chat-json';

  /* Display: Lets Chat Reply json */
  $handler = $view->new_display('page', 'Lets Chat Reply json', 'lets_chat_reply_json');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Let\'s Chat Reply';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'author';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_letschat_body']['id'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['field'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['label'] = 'reply';
  $handler->display->display_options['fields']['field_letschat_body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'created_time';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$created_time = $row->created; 
 //$created_time = $data->_field_data[\'nid\'][\'entity\']->field_created_time[\'und\'][0][\'value\'];
if($created_time != null){
echo date ("Y-m-d H:i:s", ($created_time + 2)); 
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = 'current_avatar';
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
    'lets_chat_reply' => 'lets_chat_reply',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Flagged';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['required'] = TRUE;
  $handler->display->display_options['path'] = 'lets-chat-reply-json';

  /* Display: Lets Chat Reply Topic json */
  $handler = $view->new_display('page', 'Lets Chat Reply Topic json', 'lets_chat_reply_topic_json');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Let\'s Chat Reply';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'buncha text';
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
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
global $user;
if(in_array(\'Mentor\', $user->roles)){
 $table = \'field_data_field_last_mentor_read_time\';
 $field = \'field_last_mentor_read_time_value\';
}else if(in_array(\'Mentee\', $user->roles)){
 $table = \'field_data_field_last_mentee_read_time\';
 $field = \'field_last_mentee_read_time_value\';
}
if($table != null && $field != null){
$num_updated = db_update($table)
  ->fields(array(
    $field => REQUEST_TIME,
  ))
  ->condition(\'entity_id\', $row->nid, \'=\')
  ->execute();
}
echo $num_updated;
?>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'author';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'chat_title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Chat */
  $handler->display->display_options['fields']['field_conversation']['id'] = 'field_conversation';
  $handler->display->display_options['fields']['field_conversation']['table'] = 'field_data_field_conversation';
  $handler->display->display_options['fields']['field_conversation']['field'] = 'field_conversation';
  $handler->display->display_options['fields']['field_conversation']['label'] = '';
  $handler->display->display_options['fields']['field_conversation']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'created_time';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$created_time = $row->created; 
 //$created_time = $data->_field_data[\'nid\'][\'entity\']->field_created_time[\'und\'][0][\'value\'];
if($created_time != null){
echo date ("Y-m-d H:i:s", ($created_time + 2)); 
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = 'current_avatar';
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
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
    'lets_chat' => 'lets_chat',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'lets-chat-reply-topic-json';

  /* Display: Lets Chat Mentor json */
  $handler = $view->new_display('page', 'Lets Chat Mentor json', 'lets_chat_mentor_json');
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Go to Conversation */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Go to Conversation';
  $handler->display->display_options['fields']['php']['label'] = 'Chat Subject';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$titlename = $data->_field_data[\'nid\'][\'entity\']->title;
$url = (\'node/\'.$row->nid);
   echo l($titlename, $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'link\')
              ),        
"query" => array("field_letschat_reference"=>$row->nid)            
  	));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'last_reply';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
//$mentee = $data->_field_data[\'nid\'][\'entity\']->field_menteeauth[\'und\'][0][\'value\'];
$last_reply = sm_utilities_last_chat_reply($row->nid);
if ($last_reply != "0"){
echo $last_reply;
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: menteeauth (field_menteeauth) */
  $handler->display->display_options['arguments']['field_menteeauth_value']['id'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['table'] = 'field_data_field_menteeauth';
  $handler->display->display_options['arguments']['field_menteeauth_value']['field'] = 'field_menteeauth_value';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_menteeauth_value']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menteeauth_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menteeauth_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'lets-chat-mentor-json';

  /* Display: Lets Chat Reply json live */
  $handler = $view->new_display('page', 'Lets Chat Reply json live', 'lets_chat_reply_json_live');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Let\'s Chat Reply Live';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'author';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_letschat_body']['id'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['field'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['label'] = 'reply';
  $handler->display->display_options['fields']['field_letschat_body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'date';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'created_time';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$created_time = $row->created; 
 //$created_time = $data->_field_data[\'nid\'][\'entity\']->field_created_time[\'und\'][0][\'value\'];
if($created_time != null){
echo date ("Y-m-d H:i:s", ($created_time + 2)); 
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = 'current_avatar';
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: created_time (field_created_time) */
  $handler->display->display_options['arguments']['field_created_time_value']['id'] = 'field_created_time_value';
  $handler->display->display_options['arguments']['field_created_time_value']['table'] = 'field_data_field_created_time';
  $handler->display->display_options['arguments']['field_created_time_value']['field'] = 'field_created_time_value';
  $handler->display->display_options['arguments']['field_created_time_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_created_time_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_created_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_created_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_created_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_created_time_value']['granularity'] = 'second';
  $handler->display->display_options['arguments']['field_created_time_value']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['field_created_time_value']['use_fromto'] = 'no';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat' => 'lets_chat',
    'lets_chat_reply' => 'lets_chat_reply',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Filtered (field_filtered) */
  $handler->display->display_options['filters']['field_filtered_value']['id'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['table'] = 'field_data_field_filtered';
  $handler->display->display_options['filters']['field_filtered_value']['field'] = 'field_filtered_value';
  $handler->display->display_options['filters']['field_filtered_value']['value'] = array(
    'no' => 'no',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['path'] = 'lets-chat-reply-json-live';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'testpage_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Start Chat */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'Start Chat';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
global $user;
$addurl = url(\'node/add/lets-chat?edit[field_menteeauth][und][0][value]=\'.$user->uid, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Start Chat\', $addurlfull,
    array(
 \'attributes\' => array(\'class\' => array(\'button\')),
       // \'attributes\' => array(\'class\' => array(\'button\')), 
        //\'query\' => array($destination)
)
);
?>';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['php_output'] = '<?php 
global $user;
$str = arg(1) ;
$str1 = explode(\'_\',$str,2);
if(in_array(\'Mentor\', $user->roles)){
 $table = \'field_data_field_last_mentor_read_time\';
 $field = \'field_last_mentor_read_time_value\';
}else if(in_array(\'Mentee\', $user->roles)){
 $table = \'field_data_field_last_mentee_read_time\';
 $field = \'field_last_mentee_read_time_value\';
}
if($table != null && $field != null){
$num_updated = db_update($table)
  ->fields(array(
    $field => REQUEST_TIME,
  ))
  ->condition(\'entity_id\',(int)$str1[1], \'=\')
  ->execute();
}
echo $num_updated;


?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Subject';
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '80%';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Go to Conversation */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Go to Conversation';
  $handler->display->display_options['fields']['php']['label'] = 'Chat Subject';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$titlename = $data->_field_data[\'nid\'][\'entity\']->title;
$url = (\'node/\'.$row->nid);
   echo l($titlename, $url,
  	  array(
              \'attributes\' => array(
                \'class\' => array(\'link\')
              ),        
"query" => array("field_letschat_reference"=>$row->nid)            
  	));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[name]:   [changed]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: last mentee read time */
  $handler->display->display_options['fields']['field_last_mentee_read_time']['id'] = 'field_last_mentee_read_time';
  $handler->display->display_options['fields']['field_last_mentee_read_time']['table'] = 'field_data_field_last_mentee_read_time';
  $handler->display->display_options['fields']['field_last_mentee_read_time']['field'] = 'field_last_mentee_read_time';
  $handler->display->display_options['fields']['field_last_mentee_read_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: last mentor read time */
  $handler->display->display_options['fields']['field_last_mentor_read_time']['id'] = 'field_last_mentor_read_time';
  $handler->display->display_options['fields']['field_last_mentor_read_time']['table'] = 'field_data_field_last_mentor_read_time';
  $handler->display->display_options['fields']['field_last_mentor_read_time']['field'] = 'field_last_mentor_read_time';
  $handler->display->display_options['fields']['field_last_mentor_read_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'chatreply';
  $export['lets_chat_mobile_service'] = $view;

  $view = new view();
  $view->name = 'lets_chat_reply';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lets Chat Reply';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lets Chat Reply';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'response-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'picture' => 'picture',
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Associated Activity Assignment */
  $handler->display->display_options['fields']['field_act_assign_entity']['id'] = 'field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['table'] = 'field_data_field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['field'] = 'field_act_assign_entity';
  $handler->display->display_options['fields']['field_act_assign_entity']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_actassign_body']['id'] = 'field_actassign_body';
  $handler->display->display_options['fields']['field_actassign_body']['table'] = 'field_data_field_actassign_body';
  $handler->display->display_options['fields']['field_actassign_body']['field'] = 'field_actassign_body';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'lets_chat_reply' => 'lets_chat_reply',
  );
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';

  /* Display: Lets Chat Reply */
  $handler = $view->new_display('entity_view', 'Lets Chat Reply', 'letschat_reply_entity_view');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'name',
    'field_letschat_body' => 'field_letschat_body',
    'created' => 'field_letschat_body',
    'ops' => 'field_letschat_body',
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
    'field_letschat_body' => array(
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
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'menu_avatar';
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'menu_avatar';
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_letschat_body']['id'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['field'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['label'] = '';
  $handler->display->display_options['fields']['field_letschat_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_letschat_body']['alter']['text'] = '<span class="lets-chat-name">[name]</span> [field_letschat_body]';
  $handler->display->display_options['fields']['field_letschat_body']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<p class="lets-chat-reply-post-date">[created]</p>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'lets_chat_reply' => 'lets_chat_reply',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'lets_chat',
  );

  /* Display: Lets Chat Reply Draft Count */
  $handler = $view->new_display('entity_view', 'Lets Chat Reply Draft Count', 'letschat_replydraftcount_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Draft Count';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'count';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'count';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_letschat_body']['id'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['field'] = 'field_letschat_body';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat_reply' => 'lets_chat_reply',
  );
  /* Filter criterion: Content: is_flagged (field_is_flagged) */
  $handler->display->display_options['filters']['field_is_flagged_value']['id'] = 'field_is_flagged_value';
  $handler->display->display_options['filters']['field_is_flagged_value']['table'] = 'field_data_field_is_flagged';
  $handler->display->display_options['filters']['field_is_flagged_value']['field'] = 'field_is_flagged_value';
  $handler->display->display_options['filters']['field_is_flagged_value']['value'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'lets_chat',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: My Reply Draft */
  $handler = $view->new_display('page', 'My Reply Draft', 'letschat_replydraft_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Draft';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_letschat_body_editable' => 'field_letschat_body_editable',
    'status_editable' => 'field_letschat_body_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_letschat_body_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_editable' => array(
      'sortable' => 0,
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class=\'responsedraft-header\'>Your message is currently in "draft" status.  When you are ready to send your message, please click "Reply" below this message box.</div>';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reply (editable) */
  $handler->display->display_options['fields']['field_letschat_body_editable']['id'] = 'field_letschat_body_editable';
  $handler->display->display_options['fields']['field_letschat_body_editable']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body_editable']['field'] = 'field_letschat_body_editable';
  $handler->display->display_options['fields']['field_letschat_body_editable']['label'] = '';
  $handler->display->display_options['fields']['field_letschat_body_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_letschat_body_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_letschat_body_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_letschat_body_editable']['suppress_description'] = 0;
  /* Field: Content: Published (editable) */
  $handler->display->display_options['fields']['status_editable']['id'] = 'status_editable';
  $handler->display->display_options['fields']['status_editable']['table'] = 'node';
  $handler->display->display_options['fields']['status_editable']['field'] = 'status_editable';
  $handler->display->display_options['fields']['status_editable']['type'] = 'custom';
  $handler->display->display_options['fields']['status_editable']['type_custom_true'] = 'Reply';
  $handler->display->display_options['fields']['status_editable']['type_custom_false'] = 'Reply';
  $handler->display->display_options['fields']['status_editable']['not'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: letschat_reference (field_letschat_reference) */
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['id'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['table'] = 'field_data_field_letschat_reference';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['field'] = 'field_letschat_reference_target_id';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_letschat_reference_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lets_chat_reply' => 'lets_chat_reply',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: is_flagged (field_is_flagged) */
  $handler->display->display_options['filters']['field_is_flagged_value']['id'] = 'field_is_flagged_value';
  $handler->display->display_options['filters']['field_is_flagged_value']['table'] = 'field_data_field_is_flagged';
  $handler->display->display_options['filters']['field_is_flagged_value']['field'] = 'field_is_flagged_value';
  $handler->display->display_options['filters']['field_is_flagged_value']['value'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'editreplyletschat';

  /* Display: Most Recent Chat */
  $handler = $view->new_display('entity_view', 'Most Recent Chat', 'most_recent_chat');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Recent Chat';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'name',
    'field_letschat_body' => 'field_letschat_body',
    'created' => 'field_letschat_body',
    'ops' => 'field_letschat_body',
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
    'field_letschat_body' => array(
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
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: flag_reply_inappropriate */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'flag_reply_inappropriate';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<p class="lets-chat-reply-post-date">[created]</p>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Content: Reply */
  $handler->display->display_options['fields']['field_letschat_body']['id'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['table'] = 'field_data_field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['field'] = 'field_letschat_body';
  $handler->display->display_options['fields']['field_letschat_body']['label'] = '';
  $handler->display->display_options['fields']['field_letschat_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_letschat_body']['alter']['text'] = '<span class="lets-chat-name">[name]</span> [field_letschat_body]';
  $handler->display->display_options['fields']['field_letschat_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = TRUE;
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
    'lets_chat_reply' => 'lets_chat_reply',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'lets_chat',
  );
  $export['lets_chat_reply'] = $view;

  return $export;
}
