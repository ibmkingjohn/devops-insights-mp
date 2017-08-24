<?php
/**
 * @file
 * all_blocks_exp_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function all_blocks_exp_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mentee How to use MentorPlace';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mentee_how_to';
  $fe_block_boxes->body = '<p><mediawrapper data="">
<video class="media-element file-full" controls="controls" data-fid="32776" data-media-element="1" height="385" width="640"><source src="http://mentorplacedev.prod.acquia-sites.com/sites/default/files/menteetraining.mp4" type="video/mp4" /></video>
</mediawrapper></p>
';

  $export['mentee_how_to'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mentor How to use mentorplace';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mentor_how_to';
  $fe_block_boxes->body = '<p><mediawrapper data="">
<video class="media-element file-full" controls="controls" data-fid="32781" data-media-element="1" height="385" width="640"><source src="http://mentorplacedev.prod.acquia-sites.com/sites/default/files/mentortraining.mp4" type="video/mp4" /></video>
</mediawrapper></p>
';

  $export['mentor_how_to'] = $fe_block_boxes;

  return $export;
}
