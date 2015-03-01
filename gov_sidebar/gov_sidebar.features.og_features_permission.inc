<?php
/**
 * @file
 * gov_sidebar.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_sidebar_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create sidebar content'
  $permissions['node:organization:create sidebar content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete any sidebar content'
  $permissions['node:organization:delete any sidebar content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own sidebar content'
  $permissions['node:organization:delete own sidebar content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any sidebar content'
  $permissions['node:organization:update any sidebar content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
  );

  // Exported og permission: 'node:organization:update own sidebar content'
  $permissions['node:organization:update own sidebar content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
