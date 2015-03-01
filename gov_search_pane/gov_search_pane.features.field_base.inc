<?php
/**
 * @file
 * gov_search_pane.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gov_search_pane_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_usasearch_affiliate'
  $field_bases['field_usasearch_affiliate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_usasearch_affiliate',
    'foreign keys' => array(),
    'indexes' => array(
      'usasearch_field_affiliate' => array(
        0 => 'usasearch_field_affiliate',
      ),
    ),
    'locked' => 0,
    'module' => 'usasearch_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'usasearch_field_affiliate',
  );

  return $field_bases;
}
