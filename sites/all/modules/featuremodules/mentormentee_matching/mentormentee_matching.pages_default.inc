<?php
/**
 * @file
 * mentormentee_matching.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mentormentee_matching_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'auto_match';
  $page->task = 'page';
  $page->admin_title = 'Auto Match';
  $page->admin_description = '';
  $page->path = 'auto_match';
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
  $handler->name = 'page_auto_match__panel_context_e1f9c433-6a20-4ced-bf75-f9053aeedb13';
  $handler->task = 'page';
  $handler->subtask = 'auto_match';
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
          0 => 2,
          1 => 'main-row',
          2 => 3,
          3 => 4,
          4 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'manual-match-list-left',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'manual-match-list-right',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'finalize',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'finalize' => array(
        'type' => 'region',
        'title' => 'Location Filter',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize',
        ),
        'parent' => 'main',
        'class' => 'match-review-lists',
        'hide_empty' => 0,
      ),
      'bottom_finalize' => array(
        'type' => 'region',
        'title' => 'Matching Errors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize_',
          1 => 'bottom_finalize_right',
        ),
        'parent' => 'main',
        'class' => 'match-review-lists',
        'hide_empty' => 1,
      ),
      'bottom_finalize_' => array(
        'type' => 'region',
        'title' => 'Mentee Finalize Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'manual-matching-left',
        'hide_empty' => 1,
      ),
      'bottom_finalize_right' => array(
        'type' => 'region',
        'title' => 'Mentor Finalize Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'manual-matching-right',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize__',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'bottom_finalize__' => array(
        'type' => 'region',
        'title' => 'Bottom Finalize',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom_finalize' => NULL,
      'header' => NULL,
      'finalize' => NULL,
      'bottom_finalize_' => NULL,
      'mentor_finalize_right' => NULL,
      'bottom_finalize_right' => NULL,
      'bottom_finalize__' => NULL,
    ),
    'header' => array(
      'style' => 'default',
    ),
    'finalize' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Auto Matching';
  $display->uuid = '9f133ff5-f84f-411a-bbdb-516fa23cf6d8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_auto_match__panel_context_e1f9c433-6a20-4ced-bf75-f9053aeedb13';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87b550a0-2022-4852-a48b-d53ee72586ff';
  $pane->panel = 'bottom_finalize';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'results',
    'title' => '',
    'body' => '<div id="result"></div>
<div id="error-box"></div> ',
    'format' => 'php_code',
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
  $pane->uuid = '87b550a0-2022-4852-a48b-d53ee72586ff';
  $display->content['new-87b550a0-2022-4852-a48b-d53ee72586ff'] = $pane;
  $display->panels['bottom_finalize'][0] = 'new-87b550a0-2022-4852-a48b-d53ee72586ff';
  $pane = new stdClass();
  $pane->pid = 'new-bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $pane->panel = 'bottom_finalize_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'mentee finalize left',
    'title' => '',
    'body' => '<div class="mentee-match-list">
<ul>
</ul></div>',
    'format' => 'php_code',
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
  $pane->uuid = 'bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $display->content['new-bf39f9e4-3662-4970-bfe1-88b516711ac7'] = $pane;
  $display->panels['bottom_finalize_'][0] = 'new-bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $pane = new stdClass();
  $pane->pid = 'new-28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $pane->panel = 'bottom_finalize_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'mentor finalize right',
    'title' => '',
    'body' => '<div class="gray-connector"></div><div class="mentor-match-list">
<ul>
</ul>
</div>
',
    'format' => 'php_code',
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
  $pane->uuid = '28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $display->content['new-28c21f49-107c-46b9-8755-dbdf381eb3ce'] = $pane;
  $display->panels['bottom_finalize_right'][0] = 'new-28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $pane = new stdClass();
  $pane->pid = 'new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $pane->panel = 'bottom_finalize__';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'finalize',
    'title' => '',
    'body' => '<!--<div class="ready-checkbox"><input type="checkbox" name="ready" value="true"> Ready</div>

<div class="auto-match-submit-disabled"><input type="button" class="form-submit" id="automatch-finalize-disabled" value="Generate Matches" disabled /></div> -->
<?php if(arg(1)){ ?><div class="auto-match-submit"><a href="/auto_match_finalize/<?php echo arg(1); ?>" class="button" id="automatch-finalize">Generate Matches</a></div> <?php } ?>
',
    'format' => 'php_code',
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
  $pane->uuid = 'a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $display->content['new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d'] = $pane;
  $display->panels['bottom_finalize__'][0] = 'new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $pane = new stdClass();
  $pane->pid = 'new-94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '50',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'ga_menteematching',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manual-match',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $display->content['new-94029b9d-8df7-434a-aca2-c55f5e4717c8'] = $pane;
  $display->panels['center'][0] = 'new-94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $pane = new stdClass();
  $pane->pid = 'new-80af16c9-064e-4de8-a1e3-67e6d2cf126a';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
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
    'display' => 'mentee_automatch',
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
  $pane->uuid = '80af16c9-064e-4de8-a1e3-67e6d2cf126a';
  $display->content['new-80af16c9-064e-4de8-a1e3-67e6d2cf126a'] = $pane;
  $display->panels['center'][1] = 'new-80af16c9-064e-4de8-a1e3-67e6d2cf126a';
  $pane = new stdClass();
  $pane->pid = 'new-8a996916-aa9c-4e2b-bd8d-993894826083';
  $pane->panel = 'finalize';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Instructions',
    'title' => '',
    'body' => '<p><font size="3">Use the filter below to select the location where you want to match mentors with mentees. Review the users to be matched, then at the bottom of the page click the &quot;Generate Matches&quot; button to complete the automatic matching.&nbsp; </font><font color="#012D5A" face="Arial" size="3">A mentor can only be matched with one mentee using the Automatic Matching tool (additional mentees can be added with the Manual Matching. Mentees who do not have a gender listed will not be automatically matched.&nbsp;</font><font size="3">The unmatched mentees will appear at the bottom of the page and you will need to complete their matches manually by going to the Matching link on the Admin dashboard and selecting &quot;Manual Matching&quot; under Matching Options.</font><br />
<br />
<font size="3">If you want to remove matches you made, select the &quot;Remove Matches&quot; option.</font></p>
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
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
  $pane->uuid = '8a996916-aa9c-4e2b-bd8d-993894826083';
  $display->content['new-8a996916-aa9c-4e2b-bd8d-993894826083'] = $pane;
  $display->panels['finalize'][0] = 'new-8a996916-aa9c-4e2b-bd8d-993894826083';
  $pane = new stdClass();
  $pane->pid = 'new-3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $pane->panel = 'finalize';
  $pane->type = 'block';
  $pane->subtype = 'custom_block-taxonomytreeview';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $display->content['new-3bb063fb-7a2b-4c55-b3a9-79003001a75b'] = $pane;
  $display->panels['finalize'][1] = 'new-3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $pane = new stdClass();
  $pane->pid = 'new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '50',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentor_match_list',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manual-match',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $display->content['new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc'] = $pane;
  $display->panels['right'][0] = 'new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $pane = new stdClass();
  $pane->pid = 'new-f2a69645-6313-469d-a203-d5a2c8fd8cc2';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentors_automatch',
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
  $pane->uuid = 'f2a69645-6313-469d-a203-d5a2c8fd8cc2';
  $display->content['new-f2a69645-6313-469d-a203-d5a2c8fd8cc2'] = $pane;
  $display->panels['right'][1] = 'new-f2a69645-6313-469d-a203-d5a2c8fd8cc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['auto_match'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'create_match';
  $page->task = 'page';
  $page->admin_title = 'Create Match';
  $page->admin_description = '';
  $page->path = 'create_match';
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
  $handler->name = 'page_create_match__panel_context_e36fb20a-e595-4356-b22f-c6003d1dd277';
  $handler->task = 'page';
  $handler->subtask = 'create_match';
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
          0 => 2,
          1 => 'main-row',
          2 => 3,
          3 => 4,
          4 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'manual-match-list-left',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'manual-match-list-right',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'finalize',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'finalize' => array(
        'type' => 'region',
        'title' => 'Location Filter',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize',
        ),
        'parent' => 'main',
        'class' => 'match-review-lists',
        'hide_empty' => 0,
      ),
      'bottom_finalize' => array(
        'type' => 'region',
        'title' => 'Matching Errors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize_',
          1 => 'bottom_finalize_right',
        ),
        'parent' => 'main',
        'class' => 'match-review-lists',
        'hide_empty' => 1,
      ),
      'bottom_finalize_' => array(
        'type' => 'region',
        'title' => 'Mentee Finalize Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'manual-matching-left',
        'hide_empty' => 1,
      ),
      'bottom_finalize_right' => array(
        'type' => 'region',
        'title' => 'Mentor Finalize Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'manual-matching-right',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_finalize__',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'bottom_finalize__' => array(
        'type' => 'region',
        'title' => 'Bottom Finalize',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'bottom_finalize' => NULL,
      'header' => NULL,
      'finalize' => NULL,
      'bottom_finalize_' => NULL,
      'mentor_finalize_right' => NULL,
      'bottom_finalize_right' => NULL,
      'bottom_finalize__' => NULL,
    ),
    'header' => array(
      'style' => 'default',
    ),
    'finalize' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9f133ff5-f84f-411a-bbdb-516fa23cf6d8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_create_match__panel_context_e36fb20a-e595-4356-b22f-c6003d1dd277';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87b550a0-2022-4852-a48b-d53ee72586ff';
  $pane->panel = 'bottom_finalize';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'results',
    'title' => '',
    'body' => '<div id="result"></div>
<div id="error-box"></div> ',
    'format' => 'php_code',
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
  $pane->uuid = '87b550a0-2022-4852-a48b-d53ee72586ff';
  $display->content['new-87b550a0-2022-4852-a48b-d53ee72586ff'] = $pane;
  $display->panels['bottom_finalize'][0] = 'new-87b550a0-2022-4852-a48b-d53ee72586ff';
  $pane = new stdClass();
  $pane->pid = 'new-bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $pane->panel = 'bottom_finalize_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'mentee finalize left',
    'title' => '',
    'body' => '<div class="mentee-match-list">
<ul>
</ul></div>',
    'format' => 'php_code',
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
  $pane->uuid = 'bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $display->content['new-bf39f9e4-3662-4970-bfe1-88b516711ac7'] = $pane;
  $display->panels['bottom_finalize_'][0] = 'new-bf39f9e4-3662-4970-bfe1-88b516711ac7';
  $pane = new stdClass();
  $pane->pid = 'new-28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $pane->panel = 'bottom_finalize_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'mentor finalize right',
    'title' => '',
    'body' => '<div class="gray-connector"></div><div class="mentor-match-list">
<ul>
</ul>
</div>
',
    'format' => 'php_code',
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
  $pane->uuid = '28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $display->content['new-28c21f49-107c-46b9-8755-dbdf381eb3ce'] = $pane;
  $display->panels['bottom_finalize_right'][0] = 'new-28c21f49-107c-46b9-8755-dbdf381eb3ce';
  $pane = new stdClass();
  $pane->pid = 'new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $pane->panel = 'bottom_finalize__';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'finalize',
    'title' => '',
    'body' => '
<div class="make-match-submit"><input type="button" class="form-submit" id="match-finalize" value="Finalize Matches"/></div>
<div class="matching-spinner"></div>
',
    'format' => 'php_code',
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
  $pane->uuid = 'a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $display->content['new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d'] = $pane;
  $display->panels['bottom_finalize__'][0] = 'new-a0c5a1ed-483b-42a6-ba26-d9f1225bb80d';
  $pane = new stdClass();
  $pane->pid = 'new-94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '50',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'ga_menteematching',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manual-match',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $display->content['new-94029b9d-8df7-434a-aca2-c55f5e4717c8'] = $pane;
  $display->panels['center'][0] = 'new-94029b9d-8df7-434a-aca2-c55f5e4717c8';
  $pane = new stdClass();
  $pane->pid = 'new-d93af494-4c60-4b5a-a7e6-151650438a12';
  $pane->panel = 'finalize';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Instructions',
    'title' => '',
    'body' => '<p><font size="3">Use the filter below to select the location where you want to match mentors with mentees. &nbsp;To do a manual match, select the mentee in the left column, then check the name of the mentor from the right column for this match. &nbsp;The names of each will show below the list for you to review, and then click on Finalize Match. &nbsp;Only one match can be completed at a time. </font></p><p><font size="3">If a mentor does not display, use the search below to check the mentor\'s match limit. </font></p><p><font size="3">For automatic matches, go to the Matching link on the Admin dashboard and select "Automatic Matches."</font><br><br><font size="3">If you want to remove matches you made, select the "Remove Matches" option.</font></p>',
    'format' => 'filtered_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
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
  $pane->uuid = 'd93af494-4c60-4b5a-a7e6-151650438a12';
  $display->content['new-d93af494-4c60-4b5a-a7e6-151650438a12'] = $pane;
  $display->panels['finalize'][0] = 'new-d93af494-4c60-4b5a-a7e6-151650438a12';
  $pane = new stdClass();
  $pane->pid = 'new-316554d3-0fb9-42e1-aa73-280ded964c26';
  $pane->panel = 'finalize';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentor_match_check',
    'override_title' => 1,
    'override_title_text' => 'Mentor Lookup',
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
  $pane->uuid = '316554d3-0fb9-42e1-aa73-280ded964c26';
  $display->content['new-316554d3-0fb9-42e1-aa73-280ded964c26'] = $pane;
  $display->panels['finalize'][1] = 'new-316554d3-0fb9-42e1-aa73-280ded964c26';
  $pane = new stdClass();
  $pane->pid = 'new-3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $pane->panel = 'finalize';
  $pane->type = 'block';
  $pane->subtype = 'custom_block-taxonomytreeview';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $display->content['new-3bb063fb-7a2b-4c55-b3a9-79003001a75b'] = $pane;
  $display->panels['finalize'][2] = 'new-3bb063fb-7a2b-4c55-b3a9-79003001a75b';
  $pane = new stdClass();
  $pane->pid = 'new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'administerusers_views';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '50',
    'pager_id' => '1',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'mentor_match_list',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manual-match',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $display->content['new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc'] = $pane;
  $display->panels['right'][0] = 'new-aa8d0e3b-db50-4f18-b80c-9656f3b4efdc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['create_match'] = $page;

  return $pages;

}
