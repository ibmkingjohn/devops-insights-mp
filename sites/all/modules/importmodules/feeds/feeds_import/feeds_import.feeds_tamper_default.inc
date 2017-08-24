<?php
/**
 * @file
 * feeds_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feeds_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentee_user_import-email-validate_email';
  $feeds_tamper->importer = 'mentee_user_import';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'validate_email';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate Email Field';
  $export['mentee_user_import-email-validate_email'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentee_user_import-gender-validate_gender';
  $feeds_tamper->importer = 'mentee_user_import';
  $feeds_tamper->source = 'Gender';
  $feeds_tamper->plugin_id = 'validate_gender';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate gender Field';
  $export['mentee_user_import-gender-validate_gender'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentee_user_import-grade-validate_grade';
  $feeds_tamper->importer = 'mentee_user_import';
  $feeds_tamper->source = 'Grade';
  $feeds_tamper->plugin_id = 'validate_grade';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate grade Field';
  $export['mentee_user_import-grade-validate_grade'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentee_user_import-user_name-validate_username';
  $feeds_tamper->importer = 'mentee_user_import';
  $feeds_tamper->source = 'User Name';
  $feeds_tamper->plugin_id = 'validate_username';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate Username Field';
  $export['mentee_user_import-user_name-validate_username'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentor_import-email-validate_email';
  $feeds_tamper->importer = 'mentor_import';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'validate_email';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate Email Field';
  $export['mentor_import-email-validate_email'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentor_import-gender-validate_gender';
  $feeds_tamper->importer = 'mentor_import';
  $feeds_tamper->source = 'Gender';
  $feeds_tamper->plugin_id = 'validate_gender';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate gender Field';
  $export['mentor_import-gender-validate_gender'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mentor_import-user_name-validate_username';
  $feeds_tamper->importer = 'mentor_import';
  $feeds_tamper->source = 'User Name';
  $feeds_tamper->plugin_id = 'validate_username';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Validate Username Field';
  $export['mentor_import-user_name-validate_username'] = $feeds_tamper;

  return $export;
}
