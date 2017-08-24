<?php

/**
 * @file
 * Contains the FeedsCSVParser class.
 */

/**
 * Parses a given file as a CSV file.
 */
class FeedsCSVParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $source_config = $source->getConfigFor($this);
    $state = $source->state(FEEDS_PARSE);

    // Load and configure parser.
    feeds_include_library('ParserCSV.inc', 'ParserCSV');
    $parser = new ParserCSV();
    $delimiter = $source_config['delimiter'] == 'TAB' ? "\t" : $source_config['delimiter'];
    $parser->setDelimiter($delimiter);

    $iterator = new ParserCSVIterator($fetcher_result->getFilePath());
    if (empty($source_config['no_headers'])) {
      // Get first line and use it for column names, convert them to lower case.
      $header = $this->parseHeader($parser, $iterator);
      if (!$header) {
        return;
      }
      $parser->setColumnNames($header);
    }

    // Determine section to parse, parse.
    $start = $state->pointer ? $state->pointer : $parser->lastLinePos();
    $limit = $source->importer->getLimit();
    $rows = $this->parseItems($parser, $iterator, $start, $limit);

    // Report progress.
    $state->total = filesize($fetcher_result->getFilePath());
    $state->pointer = $parser->lastLinePos();
    $progress = $parser->lastLinePos() ? $parser->lastLinePos() : $state->total;
    $state->progress($state->total, $progress);

    // Create a result object and return it.
    return new FeedsParserResult($rows, $source->feed_nid);
  }

  /**
   * Get first line and use it for column names, convert them to lower case.
   * Be aware that the $parser and iterator objects can be modified in this
   * function since they are passed in by reference
   *
   * @param ParserCSV $parser
   * @param ParserCSVIterator $iterator
   * @return
   *   An array of lower-cased column names to use as keys for the parsed items.
   */
  protected function parseHeader(ParserCSV $parser, ParserCSVIterator $iterator) {
    $parser->setLineLimit(1);
    $rows = $parser->parse($iterator);
    if (!count($rows)) {
      return FALSE;
    }
    $header = array_shift($rows);
    foreach ($header as $i => $title) {
      $header[$i] = trim(drupal_strtolower($title));
    }
    return $header;
  }

  /**
   * Parse all of the items from the CSV.
   *
   * @param ParserCSV $parser
   * @param ParserCSVIterator $iterator
   * @return
   *   An array of rows of the CSV keyed by the column names previously set
   */
  protected function parseItems(ParserCSV $parser, ParserCSVIterator $iterator, $start = 0, $limit = 0) {
    $parser->setLineLimit($limit);
    $parser->setStartByte($start);
    $rows = $parser->parse($iterator);
    return $rows;
  }

  /**
   * Override parent::getMappingSources().
   */
  public function getMappingSources() {
    return FALSE;
  }

  /**
   * Override parent::getSourceElement() to use only lower keys.
   */
  public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {
    return parent::getSourceElement($source, $result, drupal_strtolower($element_key));
  }

  /**
   * Define defaults.
   */
  public function sourceDefaults() {
    return array(
      'delimiter' => $this->config['delimiter'],
      'no_headers' => $this->config['no_headers'],
    );
  }

  /**
   * Source form.
   *
   * Show mapping configuration as a guidance for import form users.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['#weight'] = -10;

    $mappings = feeds_importer($this->id)->processor->config['mappings'];
    $sources = $uniques = array();
    foreach ($mappings as $mapping) {
      $sources[] = check_plain($mapping['source']);
      if (!empty($mapping['unique'])) {
        $uniques[] = check_plain($mapping['source']);
      }
    }

/* 
*jwk 3/7/2014 added custom text for mentee mentor import
*/

   // $output = t('Import !csv_files with one or more of these columns: !columns.', array('!csv_files' => l(t('CSV files'), 'http://en.wikipedia.org/wiki/Comma-separated_values'), '!columns' => implode(', ', $sources)));
    $items = array();
    $items2 = array();

    //$items[] = format_plural(count($uniques), t('Column <strong>!column</strong> is mandatory and considered unique: only one item per !column value will be created.', array('!column' => implode(', ', $uniques))), t('Columns <strong>!columns</strong> are mandatory and values in these columns are considered unique: only one entry per value in one of these column will be created.', array('!columns' => implode(', ', $uniques))));
    if(arg(1)=='mentee_user_import'){
    $output = t('<p><strong>The Mentee User Import allows you to upload a large number of users at one time. This is useful when starting a new school or class. To ensure a successful import, you must use the template provided and follow these instructions closely.</strong></p>
<h3 style="color:blue">Step 1: Download Mentee Import Template:</h3><p>Select the link below to download a template in CSV format. A CSV (Comma Separated Value) file format can be opened using Microsoft Excel, Open Office and most leading spreadsheet programs. This template must be used exactly as provided. If it is altered, the user import process will not be successful. ');
	    $items[] = l(t('Download Mentee Import Template'), 'import/' . $this->id . '/template');
	     $output2 = t('<h3 style="color:blue">Step 2: Enter Mentee Data</h3>
<p>All fields in the template are required. The fields include: Email, User Name, First Name, Last Name, and Grade. When entering your user data, the following rules must be followed:</p>

<p><strong>Email</strong>: The email must be unique; no other user in the system can have the same email. The email must also be in a valid format (i.e., janedoe@school.com)</p>

<p><strong>User Name:</strong> The user name must be unique and must contain at least 6 but not more than 15 characters. No other users in the system can have the same user name. In addition, you cannot use the last name of a mentee as part of their user name. This rule is to protect the identity of all users in the mentoring system. </p>

<p><strong>Gender:</strong> Either "Male" or "Female". </p>

<p><strong>Grade:</strong> Enter a number 1 to 12.  </p>

<p>Below is an example. When you have finished entering your data, be sure to save your file as CSV format. The system will only accept a comma-delimited file. Other file formats or delimiters will not be accepted.</p>

<p><center><img src="/sites/all/modules/importmodules/images/menteeuploadimg.png" alt="mentee upload template"></center></p>

<p>Each user is assigned a default password using the rule: username (all lowercase) + 1M. For example, the user JohnDoe would have the password johndoe1M.</p>
');

    }
    else{
    $output = t('<p><strong>The Mentor User Import allows you to upload a large number of users at one time. This is useful when starting a new school or class. To ensure a successful import, you must use the template provided and follow these instructions closely.</strong></p><h3 style="color:blue">Step 1: Download Mentor Import Template:</h3><p>Select the link below to download a template in CSV format. A CSV (Comma Separated Value) file format can be opened using Microsoft Excel, Open Office and most leading spreadsheet programs. This template must be used exactly as provided. If it is altered, the user import process will not be successful. ');
	    $items[] = l(t('Download Mentor Import Template'), 'import/' . $this->id . '/template');
	    
	      $output2 = t('<h3 style="color:blue">Step 2: Enter Mentor Data</h3>
<p>All fields in the template are required. The fields include: Email, User Name, First Name and Last Name. When entering your user data, the following rules must be followed:</p>

<p><strong>Email</strong>: The email must be unique; no other user in the system can have the same email. The email must also be in a valid format (i.e., janedoe@school.com)</p>

<p><strong>User Name:</strong> The user name must be unique and must contain at least 6 but not more than 15 characters. No other users in the system can have the same user name. In addition, you cannot use the last name of a mentee as part of their user name. This rule is to protect the identity of all users in the mentoring system. </p>

<p><strong>Gender:</strong> Either "Male" or "Female". </p>

<p>Below is an example. When you have finished entering your data, be sure to save your file as CSV format. The system will only accept a comma-delimited file. Other file formats or delimiters will not be accepted.</p>

<p><center><img src="/sites/all/modules/importmodules/images/mentoruploadimg.png" alt="mentee upload template"></center></p>

<p>Each user is assigned a default password using the rule: username (all lowercase) + 1M. For example, the user JohnDoe would have the password johndoe1M.</p>
');
    }
   
    $form['help'] = array(
      '#prefix' => '<div class="help">',
      '#suffix' => '</div>',
      'description' => array(
        '#prefix' => '<p>',
        '#markup' => $output,
        '#suffix' => '</p>',
      ),
      'list' => array(
        '#theme' => 'item_list',
        '#items' => $items,
      ),
    );
    
    $form['help2'] = array(
      '#prefix' => '<div class="help">',
      '#suffix' => '</div>',
      'description' => array(
        '#prefix' => '<p>',
        '#markup' => $output2,
        '#suffix' => '</p>',
      ),
      'list' => array(
        '#theme' => 'item_list',
        '#items' => $items2,
      ),          );

    
    $form['delimiter'] = array(
      '#type' => 'select',
      '#title' => t('Delimiter'),
      '#description' => t('The character that delimits fields in the CSV file.'),
      '#options'  => array(
        ',' => ',',
        ';' => ';',
        'TAB' => 'TAB',
        '|' => '|',
        '+' => '+',
      ),
      '#default_value' => isset($source_config['delimiter']) ? $source_config['delimiter'] : ',',
    );
    $form['no_headers'] = array(
      '#type' => 'checkbox',
      '#title' => t('No Headers'),
      '#description' => t('Check if the imported CSV file does not start with a header row. If checked, mapping sources must be named \'0\', \'1\', \'2\' etc.'),
      '#default_value' => isset($source_config['no_headers']) ? $source_config['no_headers'] : 0,
    );
    return $form;
  }

  /**
   * Define default configuration.
   */
  public function configDefaults() {
    return array(
      'delimiter' => ',',
      'no_headers' => 0,
      'location' => '', //bacheller added Feb 21, 2014
    );
  }

  /**
   * Build configuration form.
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['delimiter'] = array(
      '#type' => 'select',
      '#title' => t('Default delimiter'),
      '#description' => t('Default field delimiter.'),
      '#options' => array(
        ',' => ',',
        ';' => ';',
        'TAB' => 'TAB',
        '|' => '|',
        '+' => '+',
      ),
      '#default_value' => $this->config['delimiter'],
    );
    $form['no_headers'] = array(
      '#type' => 'checkbox',
      '#title' => t('No headers'),
      '#description' => t('Check if the imported CSV file does not start with a header row. If checked, mapping sources must be named \'0\', \'1\', \'2\' etc.'),
      '#default_value' => $this->config['no_headers'],
    );
    return $form;
  }

  public function getTemplate() {
    $mappings = feeds_importer($this->id)->processor->config['mappings'];
    $sources = $uniques = array();
    foreach ($mappings as $mapping) {
      if (!empty($mapping['unique'])) {
        $uniques[] = check_plain($mapping['source']);
      }
      else {
        $sources[] = check_plain($mapping['source']);
      }
    }
    $sep = ',';
    $columns = array();
    foreach (array_merge($uniques, $sources) as $col) {
      if (strpos($col, $sep) !== FALSE) {
        $col = '"' . str_replace('"', '""', $col) . '"';
      }
      $columns[] = $col;
    }
    drupal_add_http_header('Cache-Control', 'max-age=60, must-revalidate');
    drupal_add_http_header('Content-Disposition', 'attachment; filename="' . $this->id . '_template.csv"');
    drupal_add_http_header('Content-type', 'text/csv; charset=utf-8');
    print implode($sep, $columns);
    return;
  }
}
