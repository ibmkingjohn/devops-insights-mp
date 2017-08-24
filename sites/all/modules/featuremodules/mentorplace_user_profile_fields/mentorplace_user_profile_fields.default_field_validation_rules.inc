<?php
/**
 * @file
 * mentorplace_user_profile_fields.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function mentorplace_user_profile_fields_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Limit status words';
  $rule->name = 'limit_status_words';
  $rule->field_name = 'field_user_status';
  $rule->col = 'value';
  $rule->entity_type = 'user';
  $rule->bundle = 'user';
  $rule->validator = 'field_validation_words_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '14',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      7 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] can only contain 14 words';
  $export['limit_status_words'] = $rule;

  return $export;
}
