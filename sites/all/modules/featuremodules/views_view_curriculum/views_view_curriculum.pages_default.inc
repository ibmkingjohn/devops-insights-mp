<?php
/**
 * @file
 * views_view_curriculum.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function views_view_curriculum_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'curriculum';
  $page->task = 'page';
  $page->admin_title = 'Curriculum';
  $page->admin_description = '';
  $page->path = 'curriculum/curriculum_filtered';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_curriculum__panel';
  $handler->task = 'page';
  $handler->subtask = 'curriculum';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '737e00e3-1ccb-4d94-afa6-c78e4eb91fd6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_curriculum__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c664211-2121-4c00-b8c1-1db5b1c8f9a3';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'curriculum';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'curricula_filtered_page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c664211-2121-4c00-b8c1-1db5b1c8f9a3';
  $display->content['new-1c664211-2121-4c00-b8c1-1db5b1c8f9a3'] = $pane;
  $display->panels['center'][0] = 'new-1c664211-2121-4c00-b8c1-1db5b1c8f9a3';
  $pane = new stdClass();
  $pane->pid = 'new-40540fad-25dc-438d-837d-fade400f1dbc';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'curriculum';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'curricula_my_created',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '40540fad-25dc-438d-837d-fade400f1dbc';
  $display->content['new-40540fad-25dc-438d-837d-fade400f1dbc'] = $pane;
  $display->panels['center'][1] = 'new-40540fad-25dc-438d-837d-fade400f1dbc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['curriculum'] = $page;

  return $pages;

}
