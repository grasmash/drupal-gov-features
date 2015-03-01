<?php
/**
 * @file
 * gov_organization.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_organization_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:add user'
  $permissions['node:organization:add user'] = array(
    'roles' => array(
      'administrator' => 'administrator',
    ),
  );

  // Exported og permission: 'node:organization:administer group'
  $permissions['node:organization:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer og menu'
  $permissions['node:organization:administer og menu'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
  );

  // Exported og permission: 'node:organization:approve and deny subscription'
  $permissions['node:organization:approve and deny subscription'] = array(
    'roles' => array(
      'administrator' => 'administrator',
    ),
  );

  // Exported og permission: 'node:organization:create organization content'
  $permissions['node:organization:create organization content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete any organization content'
  $permissions['node:organization:delete any organization content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own organization content'
  $permissions['node:organization:delete own organization content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:manage members'
  $permissions['node:organization:manage members'] = array(
    'roles' => array(
      'administrator' => 'administrator',
    ),
  );

  // Exported og permission: 'node:organization:manage permissions'
  $permissions['node:organization:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:manage roles'
  $permissions['node:organization:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:subscribe'
  $permissions['node:organization:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:subscribe without approval'
  $permissions['node:organization:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:unsubscribe'
  $permissions['node:organization:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any organization content'
  $permissions['node:organization:update any organization content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
  );

  // Exported og permission: 'node:organization:update group'
  $permissions['node:organization:update group'] = array(
    'roles' => array(
      'administrator' => 'administrator',
    ),
  );

  // Exported og permission: 'node:organization:update own organization content'
  $permissions['node:organization:update own organization content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
