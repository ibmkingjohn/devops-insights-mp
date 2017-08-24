<?php

/**
 * @file
 * validate field against parameters.
 */

$plugin = array(
  'form' => 'feeds_tamper_validate_username_form',
  'callback' => 'feeds_tamper_validate_username_callback',
  'name' => 'Validate Username Field',
  'multi' => 'direct',
  'category' => 'Other',
);

function feeds_tamper_validate_username_form($importer, $element_key, $settings) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Validate this field as a username.'),
  );
  return $form;
}

function feeds_tamper_validate_username_callback($result, $item_key, $element_key, &$field, $settings) {
  //detect duplicate usernames
  $items = $result->items;
  if($item_key == 0){
    foreach($items as $key => $value){
        $temp[$key] = $value['user name'];      
    }
    $dupes = array_unique( array_diff_assoc( $temp, array_unique( $temp ) ) );
    foreach($items as $key => $value){
      if(in_array($value['user name'], $dupes)){
        $result->items[$key]['user name'] = 'deleteme';
      }
    }
    if(count($dupes) > 0){
      drupal_set_message("Rows for usernames ".implode(", ", $dupes)." have been detected as duplicates in file and were not imported.", 'error');
    }
  }

  $username = $field;
  $last_name = $result->items[$item_key]['last name'];
  $first_name = $result->items[$item_key]['first name'];
  $pattern1 = '/'.$last_name.'/i';
  $pattern2 = '/\s/';

  //if(strlen($username) > 0 && strlen($last_name) > 0){
    if($username == 'deleteme'){
      unset($result->items[$item_key]);
    }
    else if(user_load_by_name($username)){
      drupal_set_message(t("Row for ".$field." was not saved. Username is already in use."), 'error');
      unset($result->items[$item_key]);
    }
    else if((strlen($username) <= 6 || strlen($username) > 15)){
      drupal_set_message(t("Row for ".$field." was not saved. Username must be more than 6 but less than 15 characters."), 'error');
      unset($result->items[$item_key]);
    }else if(strlen($last_name) < 1 || strlen($first_name) < 1){
      drupal_set_message(t("Row for ".$field." was not saved. First Name and Last Name must not be blank."), 'error');
      unset($result->items[$item_key]);
    }else if(preg_match ($pattern1 , $username) == 1 || preg_match($pattern2, $username) == 1){
       drupal_set_message(t("Row for ".$field." was not saved. Username must not contain last name or spaces."), 'error');
       unset($result->items[$item_key]);
    }
  //}
}
