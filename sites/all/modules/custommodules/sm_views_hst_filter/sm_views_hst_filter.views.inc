<?php

/**
 * @file
 *
 * Provide views handler for sm_views_hst_filter.module
 */
 
/**
 * Implements of hook_views_data().
 * Add filter for table taxonomy_index
 */
function sm_views_hst_filter_views_data_alter(&$data) {
  $data['taxonomy_entity_index']['sm_views_hst_filter'] = array(
    'group' => t('User'),
    'title' => t('Hierarchical Taxonomy Filter'),
    'help' => 'Hierarchical Taxonomy Filter',
    'filter' => array(
      'handler' => 'sm_views_hst_filter_handler_filter',
      'hierarchy table' => 'taxonomy_term_hierarchy',
      'numeric' => TRUE,
      'skip base' => 'taxonomy_term_data',
      'allow empty' => TRUE,
    ),
  );
}