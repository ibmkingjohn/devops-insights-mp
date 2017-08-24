<article <?php print 'mentee="'.$node->field_menteeauth['und'][0]['value'].'"'; ?> class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php //print_r($node->field_menteeauth['und'][0]['value']); ?>
<div class="lc_block">
  <div class="lc_content">
    <?php /*if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
      <header>
        <?php print render($title_prefix); ?>
        <?php if (!$page && $title): ?>
          <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
      </header>
    <?php endif; */ ?>
    

<div class="fieldset-wrapper">
    <?php
      // We hide the links now so that we can render them later.
	  global $user;
      hide($content['links']);

    
      //print strip_tags($name); 

      //if (!empty($picture)): 
        print $user_picture; 
        ?>
        
        <div class="lets-chat-post-date">
          <?php
          print format_date($created, "short");
          ?>
        </div>

        <?php 
      //endif; 

     print render($content); // shaouy, defect 107
     print views_embed_view('lets_chat_reply','letschat_reply_entity_view'); 
    ?>
    </div>

</div>
</div> 
  <?php
$view = views_get_view('lets_chat_reply');
$view->set_display('letschat_replydraftcount_entity_view');
$view->pre_execute();
$view->execute();
?>
<div class="dash_block block lc_page">
<div class="dash_block_lccontent">
<?php 
if(!empty($view->result)) {
	 print views_embed_view('lets_chat_reply','letschat_replydraft_page');
}
	else {
		print('<div>');	
$addblock = module_invoke('formblock','block_view','lets_chat_reply');
print render($addblock['content']);
print('</div>');
	}
?>
 </div>
</div>
 </div><!-- /.activity_content -->
</article><!-- /.node -->