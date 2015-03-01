<?php
/**
 * @file
 * gov_org_chart.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_org_chart_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:administer panelizer node org_chart defaults'
  $permissions['node:organization:administer panelizer node org_chart defaults'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:create org_chart content'
  $permissions['node:organization:create org_chart content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete any org_chart content'
  $permissions['node:organization:delete any org_chart content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:delete own org_chart content'
  $permissions['node:organization:delete own org_chart content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update any org_chart content'
  $permissions['node:organization:update any org_chart content'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content approver' => 'content approver',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:update own org_chart content'
  $permissions['node:organization:update own org_chart content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
