<?php
/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Custom pane jwk'),
  'description' => t('Custom pane for the site jwk.'),
  'category' => t('Customjwk'),
  'single' => TRUE,
  'content type' => 'customlinks',
);

/**
* Output function for the '[content_type]' content type.
*/
function sm_panels_customlinks_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  $block->title = "Titlejwk";
  $block->content = "Custom pane contentjwk";
  return $block;
}

/**
* Returns an edit form for the custom type.
*/
function sm_panels_customlinks_content_type_edit_form(&$form, &$form_state) {
  //Reference
}

/**
* Returns an edit form for the custom type.
*/
function sm_panels_customlinks_content_type_edit_form_submit(&$form, &$form_state) {
  //Reference
}