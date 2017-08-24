<?php

/**
 * @file
 * Set location to default value.
 */

$plugin = array(
  'form'     => 'feeds_tamper_location_default_value_form',
  'callback' => 'feeds_tamper_location_default_value_callback',
  'name'     => 'Set default location value',
  'multi'    => 'direct',
  'category' => 'Other',
);

function feeds_tamper_location_default_value_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Set location to a default value as supplied by the user.'),
  );
  return $form;
}

function feeds_tamper_location_default_value_callback($source, $item_key, $element_key, &$field, $settings) {
  //print_r($_SESSION);
  //$field = $settings['default_value']; //this is where the replacement happens
}
