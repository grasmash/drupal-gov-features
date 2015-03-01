<?php
/**
 * @file
 * gov_fieldable_panels_pane.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_fieldable_panels_pane_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create fieldable fieldable_panels_pane'
  $permissions['node:organization:create fieldable fieldable_panels_pane'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete fieldable fieldable_panels_pane'
  $permissions['node:organization:delete fieldable fieldable_panels_pane'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update fieldable fieldable_panels_pane'
  $permissions['node:organization:update fieldable fieldable_panels_pane'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
