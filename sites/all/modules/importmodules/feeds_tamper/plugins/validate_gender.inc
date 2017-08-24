<?php

/**
 * @file
 * validate field against parameters.
 */

$plugin = array(
  'form' => 'feeds_tamper_validate_gender_form',
  'callback' => 'feeds_tamper_validate_gender_callback',
  'name' => 'Validate gender Field',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_validate_gender_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Validate gender to be either Male or Female.'),
  );
  return $form;
}

function feeds_tamper_validate_gender_callback($result, $item_key, $element_key, &$field, $settings) {
  $gender = $field;
  if($gender != "Male" && $gender != "Female"){
    $message = $gender." is not a valid gender.";
    if(!$field){
       $message = "Gender field is required.";
    }
    drupal_set_message(t($message.' Gender must be either "Male" or "Female".'), 'error');
    if($result->items[$item_key]['user name']){
      unset($result->items[$item_key]);  
    }    
  }
}
