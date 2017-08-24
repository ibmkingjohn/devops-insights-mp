<?php

/**
 * @file
 * validate field against parameters.
 */

$plugin = array(
  'form' => 'feeds_tamper_validate_email_form',
  'callback' => 'feeds_tamper_validate_email_callback',
  'name' => 'Validate Email Field',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_validate_email_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Validate this field as an email.'),
  );
  return $form;
}

function feeds_tamper_validate_email_callback($result, $item_key, $element_key, &$field, $settings) {
  //detect duplicate emails
  $items = $result->items;
  if($item_key == 0){
    foreach($items as $key => $value){
        $temp[$key] = $value['email'];
    }
    $dupes = array_unique( array_diff_assoc( $temp, array_unique( $temp ) ) );
    foreach($items as $key => $value){
      if(in_array($value['email'], $dupes)){
        $result->items[$key]['email'] = 'deleteme';
      }
    }
    if(count($dupes) > 0){
      drupal_set_message("Rows for emails ".implode(", ", $dupes)." have been detected as duplicates in file and were not saved.", 'error');
    }
  }

  $email = $field;
  if($email == 'deleteme'){
      unset($result->items[$item_key]);
  }
  else if($email && user_load_by_mail($email)){
    drupal_set_message(t("Row for ".$field." was not saved. Email is already in use."), 'error');
    unset($result->items[$item_key]);
  }
  else if(!valid_email_address($email)){
    drupal_set_message(t("Row for ".$field." was not saved. Email is not valid."), 'error');
    unset($result->items[$item_key]);
  }
}
