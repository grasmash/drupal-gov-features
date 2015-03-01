<?php
/**
 * @file
 * gov_landing_page.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_landing_page_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:administer panelizer node landing_page content'
  $permissions['node:organization:administer panelizer node landing_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer panelizer node landing_page context'
  $permissions['node:organization:administer panelizer node landing_page context'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer panelizer node landing_page defaults'
  $permissions['node:organization:administer panelizer node landing_page defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer panelizer node landing_page layout'
  $permissions['node:organization:administer panelizer node landing_page layout'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer panelizer node landing_page overview'
  $permissions['node:organization:administer panelizer node landing_page overview'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:administer panelizer node landing_page settings'
  $permissions['node:organization:administer panelizer node landing_page settings'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:create landing_page content'
  $permissions['node:organization:create landing_page content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
  );

  // Exported og permission: 'node:organization:delete any landing_page content'
  $permissions['node:organization:delete any landing_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own landing_page content'
  $permissions['node:organization:delete own landing_page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any landing_page content'
  $permissions['node:organization:update any landing_page content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
  );

  // Exported og permission: 'node:organization:update own landing_page content'
  $permissions['node:organization:update own landing_page content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
