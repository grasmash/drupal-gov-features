<?php
/**
 * @file
 * gov_image_map.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_image_map_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create image_map content'
  $permissions['node:organization:create image_map content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete any image_map content'
  $permissions['node:organization:delete any image_map content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own image_map content'
  $permissions['node:organization:delete own image_map content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any image_map content'
  $permissions['node:organization:update any image_map content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content approver' => 'content approver',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:update own image_map content'
  $permissions['node:organization:update own image_map content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
