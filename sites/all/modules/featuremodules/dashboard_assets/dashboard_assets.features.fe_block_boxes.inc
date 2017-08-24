<?php
/**
 * @file
 * dashboard_assets.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function dashboard_assets_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'welcome page for mentors';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'mentor_welcome_block';
  $fe_block_boxes->body = '<?php
global $user;
print("<p>Welcome " .l($user->name, "user/{$GLOBALS[\'user\']->uid}"). "!  This is your MentorPlace Dashboard.  From here, you can communicate with your student mentee(s) on curriculum you have been assigned, or you can chat with your student about topics of your choice.</p>");
?>
';

  $export['mentor_welcome_block'] = $fe_block_boxes;

  return $export;
}
