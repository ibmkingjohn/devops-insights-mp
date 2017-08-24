<?php

/**
 * @author shaouy
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
    $view_user_chats = views_get_view('dashboard_lets_chat'); 
  if (($view_user_chats==NULL) || (!is_object($view_user_chats))) {
    return NULL; // do nothing
  }
  $view_user_chats->set_display('letschat_reply_page'); // set the display
  $args = array($row->nid); 
  $view_user_chats->set_arguments($args);
  $view_user_chats->execute();
  $chat_array = $view_user_chats->result;
  if(count($chat_array) == 0){
	  echo($row->users_node_name . ':  ' . date("m/d/Y",$row->node_changed));
  }
  else {
	  foreach ($chat_array as $chatreply) {
	  echo($chatreply->users_node_name . ':  ' . date("m/d/Y",$chatreply->node_changed));
	  }
  } 	   
	 ?>
