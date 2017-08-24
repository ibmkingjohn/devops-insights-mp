<?php
/**
 * @file
 * contact_us_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function contact_us_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_us';
  $view->description = 'Shows all Contact Us Content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Us';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_contact_us_subject' => 'field_contact_us_subject',
    'field_contact_us_type' => 'field_contact_us_type',
    'field_contact_us_summary' => 'field_contact_us_summary',
    'name' => 'name',
    'php' => 'php',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_us_subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_us_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_us_summary' => array(
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
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Location/Class (field_taxonomy_tag) */
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['id'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['table'] = 'field_data_field_taxonomy_tag';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['field'] = 'field_taxonomy_tag_tid';
  $handler->display->display_options['relationships']['field_taxonomy_tag_tid']['relationship'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_contact_us_subject']['id'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['table'] = 'field_data_field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['field'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['path'] = 'contactus/[title]';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Contact Us Type */
  $handler->display->display_options['fields']['field_contact_us_type']['id'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['table'] = 'field_data_field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['field'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_contact_us_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_contact_us_summary']['id'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['table'] = 'field_data_field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['field'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['label'] = 'Summary';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Sent Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php']['label'] = 'Message';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send Response\', $addurlfull, array(\'query\' => array($destination)));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
    'custom_contact_us' => 'custom_contact_us',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Contact Us */
  $handler = $view->new_display('page', 'Contact Us', 'contactus_page');
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_contact_us_subject']['id'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['table'] = 'field_data_field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['field'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['type'] = 'text_plain';
  /* Field: Content: Contact Us Type */
  $handler->display->display_options['fields']['field_contact_us_type']['id'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['table'] = 'field_data_field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['field'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_contact_us_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_contact_us_summary']['id'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['table'] = 'field_data_field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['field'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['label'] = 'Summary';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Sent Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php']['label'] = 'Message';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send Response\', $addurlfull, array(\'query\' => array($destination)));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'contact-us';

  /* Display: Manage Contact Us */
  $handler = $view->new_display('page', 'Manage Contact Us', 'admin_contactus_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_contact_us_subject' => 'field_contact_us_subject',
    'title' => 'title',
    'field_contact_us_type' => 'field_contact_us_type',
    'field_contact_us_summary' => 'field_contact_us_summary',
    'name' => 'name',
    'created' => 'created',
    'php' => 'php',
    'field_complete_tasklist' => 'field_complete_tasklist',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
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
    'field_contact_us_subject' => array(
      'sortable' => 1,
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
    'field_contact_us_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_us_summary' => array(
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_complete_tasklist' => array(
      'sortable' => 1,
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
      'label' => 'Mark Completed',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'custom_contact_us::field_complete_tasklist' => 'custom_contact_us::field_complete_tasklist',
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
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_contact_us_subject']['id'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['table'] = 'field_data_field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['field'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['path'] = 'contactus/[title]';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_contact_us_subject]';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Contact Us Type */
  $handler->display->display_options['fields']['field_contact_us_type']['id'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['table'] = 'field_data_field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['field'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_contact_us_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_contact_us_summary']['id'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['table'] = 'field_data_field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['field'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['label'] = 'Summary';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Sent';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: Send Message */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Send Message';
  $handler->display->display_options['fields']['php']['label'] = 'Message';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$addurl = url(\'messages/new/?email=\'.$row->name, array(\'absolute\' => TRUE));
$addurlfull = rawurldecode($addurl); 
$destination = drupal_get_destination();
print l(\'Send Response\', $addurlfull, array(\'query\' => array($destination)));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Complete Task */
  $handler->display->display_options['fields']['field_complete_tasklist']['id'] = 'field_complete_tasklist';
  $handler->display->display_options['fields']['field_complete_tasklist']['table'] = 'field_data_field_complete_tasklist';
  $handler->display->display_options['fields']['field_complete_tasklist']['field'] = 'field_complete_tasklist';
  $handler->display->display_options['fields']['field_complete_tasklist']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/node/add/contact-us-reply?field_contact_us=[nid]">Reply </a>';
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
    'custom_contact_us' => 'custom_contact_us',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-365 day';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'users/mgrcontactus';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'mgrcontactus__data_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_contact_us_subject']['id'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['table'] = 'field_data_field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['field'] = 'field_contact_us_subject';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_contact_us_subject']['alter']['replace_spaces'] = TRUE;
  /* Field: Content: Contact Us Type */
  $handler->display->display_options['fields']['field_contact_us_type']['id'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['table'] = 'field_data_field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['field'] = 'field_contact_us_type';
  $handler->display->display_options['fields']['field_contact_us_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_contact_us_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_contact_us_summary']['id'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['table'] = 'field_data_field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['field'] = 'field_contact_us_summary';
  $handler->display->display_options['fields']['field_contact_us_summary']['label'] = 'Summary';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Sent Date';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
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
  $handler->display->display_options['path'] = 'users/mgrcontactusexport';
  $handler->display->display_options['displays'] = array(
    'admin_contactus_page' => 'admin_contactus_page',
    'default' => 0,
    'contactus_page' => 0,
  );
  $export['contact_us'] = $view;

  return $export;
}
