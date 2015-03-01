<?php
/**
 * @file
 * gov_purge.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_purge_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:purge page block'
  $permissions['node:organization:purge page block'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
