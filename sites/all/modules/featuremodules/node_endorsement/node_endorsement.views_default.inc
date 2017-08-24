<?php
/**
 * @file
 * node_endorsement.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function node_endorsement_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'endorsement_choices';
  $view->description = 'Pages and blocks for the Endorsement Content type';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Endorsement Choices';
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
  $handler = $view->new_display('page', 'Endorsement Choices', 'endorsement_choices');
  $handler->display->display_options['display_description'] = 'Endorsement Choices';
  $handler->display->display_options['path'] = 'endorsement-choices';

  /* Display: Endorsement Choices References */
  $handler = $view->new_display('references', 'Endorsement Choices References', 'endorsement_choices_references');

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'endorsement_choices_entityreference');
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
  $handler = $view->new_display('block', 'Endorsement Tally', 'endorsement_tally');
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

  /* Display: Activity Award Choices */
  $handler = $view->new_display('block', 'Activity Award Choices', 'activity_award_choices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Award Choices';
  $handler->display->display_options['display_description'] = 'Activity Award Choices';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Activity Assignment Nid */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Activity Assignment Nid';
  $handler->display->display_options['fields']['php']['label'] = 'Act Assn Nid';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return arg(1);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'activity-award/[php]/[tid]';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'activity_recognition' => 'activity_recognition',
  );

  /* Display: Activity Award Tally */
  $handler = $view->new_display('block', 'Activity Award Tally', 'activity_award_tally');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activity Award Tally';
  $handler->display->display_options['display_description'] = 'Activity Award Tally';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Activity Feedback';
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
  $handler->display->display_options['fields']['php']['label'] = 'Count';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$awardcount=0;
$awardname = $row->name_1;
$awardview = views_get_view( \'endorsement_list\' );
switch ($awardname)
    {
      case "Excellent" :
        $awardview->execute( \'eaawards\' );
         break;
      case "Satisfactory" :
         $awardview->execute( \'saawards\' );
         break;
      case "Needs more work" :
         $awardview->execute( \'nwaawards\' );
         break;
   }
$awardcount = count( $awardview->result );
echo ($awardcount);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'activity_recognition' => 'activity_recognition',
  );

  /* Display: Activity Feedback Selection */
  $handler = $view->new_display('entity_view', 'Activity Feedback Selection', 'activity_feedback_entity_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Choose an Activity Feedback';
  $handler->display->display_options['display_description'] = 'Activity feedback selection';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Activity Assignment Nid */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Activity Assignment Nid';
  $handler->display->display_options['fields']['php']['label'] = 'Act Assn Nid';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return arg(1);';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'activity-award/[php]/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'activity_recognition' => 'activity_recognition',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'activity_recognition',
  );
  $handler->display->display_options['argument_mode'] = 'none';

  /* Display: Endorsement Tally Sent */
  $handler = $view->new_display('block', 'Endorsement Tally Sent', 'endorsementsent_tally');
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
  $export['endorsement_choices'] = $view;

  $view = new view();
  $view->name = 'endorsement_list';
  $view->description = 'Pages that show Each type of Endorsement';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Endorsement List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Endorsements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
    'endorsement' => 'endorsement',
  );

  /* Display: All Endorsements */
  $handler = $view->new_display('page', 'All Endorsements', 'all_endorsements_page');
  $handler->display->display_options['path'] = 'endorsement-list';

  /* Display: All Endorsements of Me */
  $handler = $view->new_display('page', 'All Endorsements of Me', 'all_endorsements_of_me');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Endorsements of Me';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'endorsement-list';

  /* Display: Awesome Participation Endorsements of Me */
  $handler = $view->new_display('page', 'Awesome Participation Endorsements of Me', 'ap_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Awesome Participation Endorsements of Me';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['validate']['type'] = 'user';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3933';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'apendorsements';

  /* Display: Demonstrated Leadership Endorsements of Me */
  $handler = $view->new_display('page', 'Demonstrated Leadership Endorsements of Me', 'dl_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Demonstrated Leadership Endorsements of Me';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['validate']['type'] = 'user';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3935';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'dl-endorsements';

  /* Display: Effective Communication Endorsements of Me */
  $handler = $view->new_display('page', 'Effective Communication Endorsements of Me', 'ec_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Effective Communication Endorsements of Me';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['validate']['type'] = 'user';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3937';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'scendorsements';

  /* Display: Great Teamwork Endorsements of Me */
  $handler = $view->new_display('page', 'Great Teamwork Endorsements of Me', 'gt_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Great Teamwork Endorsements of Me';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['validate']['type'] = 'user';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3936';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'gt-endorsements';

  /* Display: Innovative Thinking Endorsements of Me */
  $handler = $view->new_display('page', 'Innovative Thinking Endorsements of Me', 'it_endorsement_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Innovative Thinking Endorsements of Me';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Endorsee (field_endorsee_entity) */
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['id'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['field'] = 'field_endorsee_entity_target_id';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_endorsee_entity_target_id']['validate']['type'] = 'user';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reward Badge (field_endorsement_badge) */
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['id'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['table'] = 'field_data_field_endorsement_badge';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['field'] = 'field_endorsement_badge_target_id';
  $handler->display->display_options['filters']['field_endorsement_badge_target_id']['value']['value'] = '3934';
  /* Filter criterion: Content: mparchive (field_mparchive) */
  $handler->display->display_options['filters']['field_mparchive_value']['id'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['table'] = 'field_data_field_mparchive';
  $handler->display->display_options['filters']['field_mparchive_value']['field'] = 'field_mparchive_value';
  $handler->display->display_options['filters']['field_mparchive_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'it-endorsements';

  /* Display: Update fields */
  $handler = $view->new_display('page', 'Update fields', 'endorseeupdate_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Endorsements Update fields';
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
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'endorsement::field_endorsee_entity' => 'endorsement::field_endorsee_entity',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Endorsee */
  $handler->display->display_options['fields']['field_endorsee_entity']['id'] = 'field_endorsee_entity';
  $handler->display->display_options['fields']['field_endorsee_entity']['table'] = 'field_data_field_endorsee_entity';
  $handler->display->display_options['fields']['field_endorsee_entity']['field'] = 'field_endorsee_entity';
  $handler->display->display_options['fields']['field_endorsee_entity']['label'] = 'Endorsee New';
  $handler->display->display_options['fields']['field_endorsee_entity']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: User relationships: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'user_relationships';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'endorsement-update';
  $export['endorsement_list'] = $view;

  return $export;
}
