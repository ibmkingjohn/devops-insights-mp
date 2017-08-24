<?php

/**
 * @file
 * validate field against parameters.
 */

$plugin = array(
  'form' => 'feeds_tamper_validate_grade_form',
  'callback' => 'feeds_tamper_validate_grade_callback',
  'name' => 'Validate grade Field',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_validate_grade_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Validate grade to be a number 1-12.'),
  );
  return $form;
}

function feeds_tamper_validate_grade_callback($result, $item_key, $element_key, &$field, $settings) {
  $grade = floor($field);
  if($grade < 1 || $grade > 12){
    if(!is_numeric($field)){
      $grade = $field;
    }
    if(!$field){
      $grade = "0 or blank";
    }
    drupal_set_message(t( $grade." is not a valid grade. Grade must be a number 1-12."), 'error');
    if($result->items[$item_key]['user name']){
      unset($result->items[$item_key]);  
    }    
  }
}
