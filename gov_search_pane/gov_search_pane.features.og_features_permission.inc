<?php
/**
 * @file
 * gov_search_pane.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_search_pane_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create fieldable usasearch'
  $permissions['node:organization:create fieldable usasearch'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete fieldable usasearch'
  $permissions['node:organization:delete fieldable usasearch'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update fieldable usasearch'
  $permissions['node:organization:update fieldable usasearch'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
