<?php
/**
 * @file
 * feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mentee_user_import';
  $feeds_importer->config = array(
    'name' => 'Mentee User Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'location' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserExtendedProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'User Name',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last Name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Gender',
            'target' => 'field_gender',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Grade',
            'target' => 'field_grade',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'send_mail' => 0,
        'roles' => array(
          6 => '6',
          3 => 0,
          8 => 0,
          7 => 0,
          4 => 0,
          5 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['mentee_user_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mentor_import';
  $feeds_importer->config = array(
    'name' => 'Mentor User Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'location' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserExtendedProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'User Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Last Name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Gender',
            'target' => 'field_gender',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'send_mail' => 0,
        'roles' => array(
          5 => '5',
          3 => 0,
          8 => 0,
          7 => 0,
          4 => 0,
          6 => 0,
        ),
        'status' => '0',
        'defuse_mail' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mentor_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'node';
  $feeds_importer->config = array(
    'name' => 'Node import',
    'description' => 'Import nodes from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'article',
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['node'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user';
  $feeds_importer->config = array(
    'name' => 'User import',
    'description' => 'Import users from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
        ),
        'update_existing' => 0,
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'firstname',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'lastname',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'email',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'username',
            'target' => 'name',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'gender',
            'target' => 'field_gender',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'grade',
            'target' => 'field_grade',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'userrole',
            'target' => 'field_user_acct_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'location',
            'target' => 'field_taxonomy_tag',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'account_status',
            'target' => 'field_user_acct_status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'code_of_conduct',
            'target' => 'field_code_of_conduct',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['user'] = $feeds_importer;

  return $export;
}
