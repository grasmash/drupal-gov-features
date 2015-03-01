<?php
/**
 * @file
 * gov_gallery.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_gallery_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create gallery content'
  $permissions['node:organization:create gallery content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete any gallery content'
  $permissions['node:organization:delete any gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own gallery content'
  $permissions['node:organization:delete own gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any gallery content'
  $permissions['node:organization:update any gallery content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content approver' => 'content approver',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:update own gallery content'
  $permissions['node:organization:update own gallery content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
