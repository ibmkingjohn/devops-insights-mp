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
   //print $output; // original code
   //Replacement code by shaouy:
   $mentee = arg(1);
   //$activities = variable_get('activity_assn_'.$user->uid);
   //print "<pre>"; print_r($activities); print "</pre>";
   $activities = sm_utilities_get_started_activities($mentee);
   $activity_assignment_nid = NULL;
   //print "<pre>"; print_r($activities); print "</pre>";
   if($activities){
	   foreach ($activities as $activity) {
	    //print "<pre>"; print_r($activity); print "</pre>";
	    //print "<pre>"; print_r("1:".$row->field_field_activity_reference[0]['raw']['entity']->vid); print "</pre>";
	    //print "<pre>"; print_r("2:".$activity->field_field_activity_entity_ref[0]['raw']['entity']->vid); print "</pre>";
		   if (($row->field_field_activity_reference[0]['raw']['entity']->vid==$activity->field_field_activity_entity_ref[0]['raw']['entity']->vid)){
		           $activity_assignment_nid= $activity->nid;
		   }
	  	}  
  	}
  	
	$reply_arr = sm_utilities_get_last_comment_summary($activity_assignment_nid);
	//print "<pre>"; print_r($reply_arr[0]->_field_data['nid']['entity']); print "</pre>";
	$reply = null;
	if($reply_arr){
		$reply = $reply_arr[0]->_field_data['nid']['entity']->field_actassign_body['und'][0]['value'];  
	}
	if($reply){
		$reply_uid = $reply_arr[0]->_field_data['nid']['entity']->revision_uid;
		$reply_time = $reply_arr[0]->_field_data['nid']['entity']->revision_timestamp;
		$name = '';
		$date = '';
		$date = date("m/d/Y", $reply_time);
		$name = user_load($reply_uid)->name;
		$reply = preg_replace('~\[\[\{(.*)\}\]\]~', "[media]", $reply);
		$reply = strip_tags($reply);
		$limit = 150;
		$break = " ";
		$pad = "...";
		if(strlen($reply) <= $limit){
			echo '<span class="recent_activity_title">'.$name." ".$date.": </span><br />".$reply;	
		}else if(($breakpoint = strpos($reply, $break, $limit)) !== false) {
			if($breakpoint < strlen($reply) - 1) {
			  $reply = substr($reply, 0, $breakpoint) . $pad;
			  echo '<span class="recent_activity_title">'.$name." ".$date.": </span><br />".$reply;	
			}
	    }
	}
 ?>
