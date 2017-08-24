<?php
/**
 * @file
 * dashboard_assets.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dashboard_assets_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'admin_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Admin Dashboard';
  $page->admin_description = '';
  $page->path = 'admindash';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_admin_dashboard__panel_context_c3c40b9e-aded-48ef-81c5-7880bf04c6e6';
  $handler->task = 'page';
  $handler->subtask = 'admin_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'menteedash',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Activity',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'corner_location' => 'panel',
      ),
      'user_info' => array(
        'corner_location' => 'panel',
      ),
      'user_info_' => array(
        'corner_location' => 'panel',
      ),
      'message' => array(
        'corner_location' => 'panel',
      ),
      'reward' => array(
        'corner_location' => 'panel',
      ),
    ),
    'center' => array(
      'style' => 'rounded_corners',
    ),
    'message' => array(
      'style' => 'rounded_corners',
    ),
    'user_info_' => array(
      'style' => 'rounded_corners',
    ),
    'user_info' => array(
      'style' => 'rounded_corners',
    ),
    'reward' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '433a8388-dc91-460b-8326-2fdd49f9d83a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_admin_dashboard__panel_context_c3c40b9e-aded-48ef-81c5-7880bf04c6e6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ea5cf98-d327-4888-b48d-a9ebbf99c53d';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'jwk_mentor_mentee_lookups';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentorusers_awaiting_approval_page',
    'override_title' => 1,
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
  $pane->uuid = '9ea5cf98-d327-4888-b48d-a9ebbf99c53d';
  $display->content['new-9ea5cf98-d327-4888-b48d-a9ebbf99c53d'] = $pane;
  $display->panels['center'][0] = 'new-9ea5cf98-d327-4888-b48d-a9ebbf99c53d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['admin_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard__panel_context_5f4fef02-9255-4dde-8555-0c432245160e';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'menteedash',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
          2 => 3,
          3 => 4,
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'message',
          1 => 'reward',
        ),
        'parent' => 'main',
        'class' => 'mentee_dash_row',
        'hide_empty' => 1,
      ),
      'message' => array(
        'type' => 'region',
        'title' => 'Mentee Activities',
        'width' => '62.90500151787883',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'reward' => array(
        'type' => 'region',
        'title' => 'Lets Chat',
        'width' => '37.09499848212117',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mentee_activites',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'mentee_activites' => array(
        'type' => 'region',
        'title' => 'Rewards',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'admin_dash',
          1 => 'admin_dash_right',
        ),
        'parent' => 'main',
        'class' => 'admin-dash',
        'hide_empty' => 0,
      ),
      'admin_dash' => array(
        'type' => 'region',
        'title' => 'Admin Dash Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'admin_dash_right' => array(
        'type' => 'region',
        'title' => 'Admin Dash Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'user_info' => NULL,
      'user_info_' => NULL,
      'lets_chat' => NULL,
      'mentee_activites' => NULL,
      'lets_chat_' => NULL,
      'center' => NULL,
      'message' => array(
        'corner_location' => 'panel',
      ),
      'reward' => array(
        'corner_location' => 'panel',
      ),
      'admin_dash' => NULL,
      'admin_dash_right' => NULL,
      'howtovids' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
    'message' => array(
      'style' => 'rounded_corners',
    ),
    'user_info_' => array(
      'style' => '-1',
    ),
    'user_info' => array(
      'style' => '-1',
    ),
    'reward' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '433a8388-dc91-460b-8326-2fdd49f9d83a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_dashboard__panel_context_5f4fef02-9255-4dde-8555-0c432245160e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6639d420-7b94-4a1b-9c4f-423e6f528321';
  $pane->panel = 'admin_dash';
  $pane->type = 'block';
  $pane->subtype = 'sm_panels-admin_panel_left';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->uuid = '6639d420-7b94-4a1b-9c4f-423e6f528321';
  $display->content['new-6639d420-7b94-4a1b-9c4f-423e6f528321'] = $pane;
  $display->panels['admin_dash'][0] = 'new-6639d420-7b94-4a1b-9c4f-423e6f528321';
  $pane = new stdClass();
  $pane->pid = 'new-0a6b2ee0-c70c-4885-9063-7329abfc4feb';
  $pane->panel = 'admin_dash_right';
  $pane->type = 'block';
  $pane->subtype = 'sm_panels-admin_panel_right';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->uuid = '0a6b2ee0-c70c-4885-9063-7329abfc4feb';
  $display->content['new-0a6b2ee0-c70c-4885-9063-7329abfc4feb'] = $pane;
  $display->panels['admin_dash_right'][0] = 'new-0a6b2ee0-c70c-4885-9063-7329abfc4feb';
  $pane = new stdClass();
  $pane->pid = 'new-593ad8c8-e7a8-4ee8-bacc-6e9fd1794f1e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'how_to_videos';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentee_how_to_block',
    'override_title' => 1,
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
  $pane->uuid = '593ad8c8-e7a8-4ee8-bacc-6e9fd1794f1e';
  $display->content['new-593ad8c8-e7a8-4ee8-bacc-6e9fd1794f1e'] = $pane;
  $display->panels['center'][0] = 'new-593ad8c8-e7a8-4ee8-bacc-6e9fd1794f1e';
  $pane = new stdClass();
  $pane->pid = 'new-762bb7ea-a7fc-4922-9a87-473e4af0a7e3';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'how_to_videos';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentor_how_to_block',
    'override_title' => 1,
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
  $pane->uuid = '762bb7ea-a7fc-4922-9a87-473e4af0a7e3';
  $display->content['new-762bb7ea-a7fc-4922-9a87-473e4af0a7e3'] = $pane;
  $display->panels['center'][1] = 'new-762bb7ea-a7fc-4922-9a87-473e4af0a7e3';
  $pane = new stdClass();
  $pane->pid = 'new-accee1d1-d030-4acd-8b29-b6c8924f2627';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Admin How to videos',
    'title' => '',
    'body' => '<p class="rteright"><a href="/admin-how-to-videos"><span><img alt="" src="/sites/default/files/default_images/videoicon_1.png" style="padding-right: 20px; width: 48px; height: 34px;" /></span><br />How To Videos</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'how-to-video-admin',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'accee1d1-d030-4acd-8b29-b6c8924f2627';
  $display->content['new-accee1d1-d030-4acd-8b29-b6c8924f2627'] = $pane;
  $display->panels['center'][2] = 'new-accee1d1-d030-4acd-8b29-b6c8924f2627';
  $pane = new stdClass();
  $pane->pid = 'new-d360e68f-641e-426b-8f83-7bb1fbdbdc4e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_relationships_browser';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'mentormentee_dash_page',
    'override_title' => 0,
    'override_title_text' => 'My Mentee(s)',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd360e68f-641e-426b-8f83-7bb1fbdbdc4e';
  $display->content['new-d360e68f-641e-426b-8f83-7bb1fbdbdc4e'] = $pane;
  $display->panels['center'][3] = 'new-d360e68f-641e-426b-8f83-7bb1fbdbdc4e';
  $pane = new stdClass();
  $pane->pid = 'new-a406080f-e069-4559-bed2-3be39ec28f10';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'custom_block-taxonomytreeview';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
            2 => 7,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a406080f-e069-4559-bed2-3be39ec28f10';
  $display->content['new-a406080f-e069-4559-bed2-3be39ec28f10'] = $pane;
  $display->panels['center'][4] = 'new-a406080f-e069-4559-bed2-3be39ec28f10';
  $pane = new stdClass();
  $pane->pid = 'new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $pane->panel = 'mentee_activites';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_endorsement_choices';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'rewardmentee_dash_page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $display->content['new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489'] = $pane;
  $display->panels['mentee_activites'][0] = 'new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $pane = new stdClass();
  $pane->pid = 'new-dfc1186a-5a08-49e1-ba1b-fff1d860a4f9';
  $pane->panel = 'message';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Work on Activities',
    'title' => 'Work on Activities',
    'body' => '<p>Activities that you and your mentor are working on together are listed below. &nbsp;Please &quot;click&quot; on the Activity Title to begin or continue work.</p>
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfc1186a-5a08-49e1-ba1b-fff1d860a4f9';
  $display->content['new-dfc1186a-5a08-49e1-ba1b-fff1d860a4f9'] = $pane;
  $display->panels['message'][0] = 'new-dfc1186a-5a08-49e1-ba1b-fff1d860a4f9';
  $pane = new stdClass();
  $pane->pid = 'new-c0d0072b-65f1-45e8-9f79-5498587a1214';
  $pane->panel = 'message';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_activities_views';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'menteeactvitiesdash__page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'activities_list',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c0d0072b-65f1-45e8-9f79-5498587a1214';
  $display->content['new-c0d0072b-65f1-45e8-9f79-5498587a1214'] = $pane;
  $display->panels['message'][1] = 'new-c0d0072b-65f1-45e8-9f79-5498587a1214';
  $pane = new stdClass();
  $pane->pid = 'new-bc41b90a-75d4-4024-8ddc-d5165c00bf1f';
  $pane->panel = 'reward';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_lets_chat';
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
    'display' => 'letschatmnteedraft_dashboard_page',
    'override_title' => 1,
    'override_title_text' => 'Let\'s Chat',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'letschatdraft',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bc41b90a-75d4-4024-8ddc-d5165c00bf1f';
  $display->content['new-bc41b90a-75d4-4024-8ddc-d5165c00bf1f'] = $pane;
  $display->panels['reward'][0] = 'new-bc41b90a-75d4-4024-8ddc-d5165c00bf1f';
  $pane = new stdClass();
  $pane->pid = 'new-4f5e3b18-a9db-40ca-9b50-bb9e42147375';
  $pane->panel = 'reward';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_lets_chat';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
    'display' => 'letschatmntee_dashboard_page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4f5e3b18-a9db-40ca-9b50-bb9e42147375';
  $display->content['new-4f5e3b18-a9db-40ca-9b50-bb9e42147375'] = $pane;
  $display->panels['reward'][1] = 'new-4f5e3b18-a9db-40ca-9b50-bb9e42147375';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'menteedash';
  $page->task = 'page';
  $page->admin_title = 'MenteeDashboard';
  $page->admin_description = '';
  $page->path = 'menteedash';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_menteedash__panel_context_e2e52fda-3f0a-47cc-a03c-0730195dd8bf';
  $handler->task = 'page';
  $handler->subtask = 'menteedash';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'menteedash',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'lets_chat',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Activity',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_info_',
          1 => 'user_info',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_info' => array(
        'type' => 'region',
        'title' => 'Matched Mentor Info',
        'width' => '32.87935692282188',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_info_' => array(
        'type' => 'region',
        'title' => 'User Info',
        'width' => '67.12064307717812',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'message',
          1 => 'reward',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'message' => array(
        'type' => 'region',
        'title' => 'Message',
        'width' => '67.68384121325298',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'reward' => array(
        'type' => 'region',
        'title' => 'Reward',
        'width' => '32.31615878674702',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'lets_chat' => array(
        'type' => 'region',
        'title' => 'Lets Chat',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'corner_location' => 'panel',
      ),
      'user_info' => array(
        'corner_location' => 'panel',
      ),
      'user_info_' => array(
        'corner_location' => 'panel',
      ),
      'message' => array(
        'corner_location' => 'panel',
      ),
      'reward' => array(
        'corner_location' => 'panel',
      ),
      'lets_chat' => array(
        'corner_location' => 'panel',
      ),
    ),
    'center' => array(
      'style' => 'rounded_corners',
    ),
    'message' => array(
      'style' => 'rounded_corners',
    ),
    'user_info_' => array(
      'style' => 'rounded_corners',
    ),
    'user_info' => array(
      'style' => 'rounded_corners',
    ),
    'reward' => array(
      'style' => 'rounded_corners',
    ),
    'lets_chat' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '433a8388-dc91-460b-8326-2fdd49f9d83a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_menteedash__panel_context_e2e52fda-3f0a-47cc-a03c-0730195dd8bf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c0d0072b-65f1-45e8-9f79-5498587a1214';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_activities_views';
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
    'display' => 'menteeactvitiesdash__page',
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
  $pane->uuid = 'c0d0072b-65f1-45e8-9f79-5498587a1214';
  $display->content['new-c0d0072b-65f1-45e8-9f79-5498587a1214'] = $pane;
  $display->panels['center'][0] = 'new-c0d0072b-65f1-45e8-9f79-5498587a1214';
  $pane = new stdClass();
  $pane->pid = 'new-7052ca41-5435-4566-b1c9-420e8fb10d7d';
  $pane->panel = 'lets_chat';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_lets_chat';
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
    'display' => 'letschatmntee_dashboard_page',
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
  $pane->uuid = '7052ca41-5435-4566-b1c9-420e8fb10d7d';
  $display->content['new-7052ca41-5435-4566-b1c9-420e8fb10d7d'] = $pane;
  $display->panels['lets_chat'][0] = 'new-7052ca41-5435-4566-b1c9-420e8fb10d7d';
  $pane = new stdClass();
  $pane->pid = 'new-09001ec1-c56d-40fb-a0bb-960dcddeb538';
  $pane->panel = 'message';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_private_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'pmmentee_dashboard',
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
  $pane->uuid = '09001ec1-c56d-40fb-a0bb-960dcddeb538';
  $display->content['new-09001ec1-c56d-40fb-a0bb-960dcddeb538'] = $pane;
  $display->panels['message'][0] = 'new-09001ec1-c56d-40fb-a0bb-960dcddeb538';
  $pane = new stdClass();
  $pane->pid = 'new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $pane->panel = 'reward';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_endorsement_choices';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'rewardmentee_dash_page',
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
  $pane->uuid = 'f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $display->content['new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489'] = $pane;
  $display->panels['reward'][0] = 'new-f5e6ad6b-4a04-4bde-9310-5c0da5ee2489';
  $pane = new stdClass();
  $pane->pid = 'new-4a96ec52-a34c-4c13-926b-ef0e6519de35';
  $pane->panel = 'user_info';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_relationships_browser';
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
    'display' => 'menteementor_dash_page',
    'override_title' => 1,
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
  $pane->uuid = '4a96ec52-a34c-4c13-926b-ef0e6519de35';
  $display->content['new-4a96ec52-a34c-4c13-926b-ef0e6519de35'] = $pane;
  $display->panels['user_info'][0] = 'new-4a96ec52-a34c-4c13-926b-ef0e6519de35';
  $pane = new stdClass();
  $pane->pid = 'new-3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $pane->panel = 'user_info_';
  $pane->type = 'views';
  $pane->subtype = 'jwk_user_tree_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'logged_in_user_block',
    'override_title' => 1,
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
  $pane->uuid = '3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $display->content['new-3ad00f70-914b-464e-bfe4-42c4f8973e68'] = $pane;
  $display->panels['user_info_'][0] = 'new-3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['menteedash'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mentorbymentee';
  $page->task = 'page';
  $page->admin_title = 'Mentorbymentee';
  $page->admin_description = '';
  $page->path = 'mentormentee';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentorbymentee__panel_context_695d08c2-ae4e-4feb-be2b-8f346314c6c3';
  $handler->task = 'page';
  $handler->subtask = 'mentorbymentee';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'menteedash',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'lets_chat',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Activity',
        'width' => '63.0524917098899',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'reward',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'reward' => array(
        'type' => 'region',
        'title' => 'Reward',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'lets_chat' => array(
        'type' => 'region',
        'title' => 'Lets Chat',
        'width' => '36.94750829011011',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lets_chat' => array(
        'corner_location' => 'panel',
      ),
      'center' => array(
        'corner_location' => 'panel',
      ),
      'user_info' => NULL,
      'user_info_' => NULL,
      'message' => NULL,
      'reward' => NULL,
    ),
    'center' => array(
      'style' => 'rounded_corners',
    ),
    'message' => array(
      'style' => 'default',
    ),
    'user_info_' => array(
      'style' => 'default',
    ),
    'user_info' => array(
      'style' => 'default',
    ),
    'reward' => array(
      'style' => 'default',
    ),
    'lets_chat' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '433a8388-dc91-460b-8326-2fdd49f9d83a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mentorbymentee__panel_context_695d08c2-ae4e-4feb-be2b-8f346314c6c3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f4ba6a34-f901-429f-844d-fad94b2f9f0b';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Work on Activities',
    'title' => 'Work on Activities',
    'body' => '<p>Activities that you and your mentee(s) are working on together are listed below. &nbsp;Please &quot;click&quot; on the Activity Title to begin or continue work.</p>
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f4ba6a34-f901-429f-844d-fad94b2f9f0b';
  $display->content['new-f4ba6a34-f901-429f-844d-fad94b2f9f0b'] = $pane;
  $display->panels['center'][0] = 'new-f4ba6a34-f901-429f-844d-fad94b2f9f0b';
  $pane = new stdClass();
  $pane->pid = 'new-870679a1-7f0e-444b-a924-b7981a2089b0';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_activities_views';
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
    'display' => 'mentoractbymenteedash_page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '870679a1-7f0e-444b-a924-b7981a2089b0';
  $display->content['new-870679a1-7f0e-444b-a924-b7981a2089b0'] = $pane;
  $display->panels['center'][1] = 'new-870679a1-7f0e-444b-a924-b7981a2089b0';
  $pane = new stdClass();
  $pane->pid = 'new-e4f89df8-d427-4539-a98a-62c09bb22cfc';
  $pane->panel = 'lets_chat';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_lets_chat';
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
    'args' => '%1',
    'url' => '',
    'display' => 'letschatmntorbymenteedraft_dashboard_page',
    'override_title' => 1,
    'override_title_text' => 'Let\'s Chat',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'letschatdraft',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e4f89df8-d427-4539-a98a-62c09bb22cfc';
  $display->content['new-e4f89df8-d427-4539-a98a-62c09bb22cfc'] = $pane;
  $display->panels['lets_chat'][0] = 'new-e4f89df8-d427-4539-a98a-62c09bb22cfc';
  $pane = new stdClass();
  $pane->pid = 'new-6e08bb9e-93bb-422d-9f40-51d8ffad7738';
  $pane->panel = 'lets_chat';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_lets_chat';
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
    'args' => '%1',
    'url' => '',
    'display' => 'letschatmntorbymentee_dashboard_page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6e08bb9e-93bb-422d-9f40-51d8ffad7738';
  $display->content['new-6e08bb9e-93bb-422d-9f40-51d8ffad7738'] = $pane;
  $display->panels['lets_chat'][1] = 'new-6e08bb9e-93bb-422d-9f40-51d8ffad7738';
  $pane = new stdClass();
  $pane->pid = 'new-06f03d6f-8b53-4511-bd2d-22fefa45499d';
  $pane->panel = 'reward';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_endorsement_choices';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'rewardmentormentee_dash_page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '06f03d6f-8b53-4511-bd2d-22fefa45499d';
  $display->content['new-06f03d6f-8b53-4511-bd2d-22fefa45499d'] = $pane;
  $display->panels['reward'][0] = 'new-06f03d6f-8b53-4511-bd2d-22fefa45499d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentorbymentee'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mentordashboard';
  $page->task = 'page';
  $page->admin_title = 'MentorDashboard';
  $page->admin_description = '';
  $page->path = 'mentordash';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentordashboard__panel_context_9e6ba466-9556-4b2b-a73a-328c771b6b67';
  $handler->task = 'page';
  $handler->subtask = 'mentordashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'menteedash',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mentee_match',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_info_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_info_' => array(
        'type' => 'region',
        'title' => 'User Info',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'mentee_match' => array(
        'type' => 'region',
        'title' => 'Mentee Match',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'corner_location' => 'panel',
      ),
      'user_info' => array(
        'corner_location' => 'panel',
      ),
      'user_info_' => array(
        'corner_location' => 'panel',
      ),
      'message' => array(
        'corner_location' => 'panel',
      ),
      'reward' => array(
        'corner_location' => 'panel',
      ),
      'mentee_match' => array(
        'corner_location' => 'panel',
      ),
    ),
    'center' => array(
      'style' => 'rounded_corners',
    ),
    'message' => array(
      'style' => 'rounded_corners',
    ),
    'user_info_' => array(
      'style' => 'rounded_corners',
    ),
    'user_info' => array(
      'style' => 'rounded_corners',
    ),
    'reward' => array(
      'style' => 'rounded_corners',
    ),
    'mentee_match' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '433a8388-dc91-460b-8326-2fdd49f9d83a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mentordashboard__panel_context_9e6ba466-9556-4b2b-a73a-328c771b6b67';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d4603c2a-06f7-41a0-9c26-99f041449668';
  $pane->panel = 'mentee_match';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_relationships_browser';
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
    'display' => 'mentormentee_dash_page',
    'override_title' => 1,
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
  $pane->uuid = 'd4603c2a-06f7-41a0-9c26-99f041449668';
  $display->content['new-d4603c2a-06f7-41a0-9c26-99f041449668'] = $pane;
  $display->panels['mentee_match'][0] = 'new-d4603c2a-06f7-41a0-9c26-99f041449668';
  $pane = new stdClass();
  $pane->pid = 'new-3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $pane->panel = 'user_info_';
  $pane->type = 'views';
  $pane->subtype = 'jwk_user_tree_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'logged_in_user_block',
    'override_title' => 1,
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
  $pane->uuid = '3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $display->content['new-3ad00f70-914b-464e-bfe4-42c4f8973e68'] = $pane;
  $display->panels['user_info_'][0] = 'new-3ad00f70-914b-464e-bfe4-42c4f8973e68';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentordashboard'] = $page;

  return $pages;

}
