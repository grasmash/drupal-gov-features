<?php
/**
 * @file
 * gov_image_pane.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_image_pane_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create fieldable image'
  $permissions['node:organization:create fieldable image'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete fieldable image'
  $permissions['node:organization:delete fieldable image'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update fieldable image'
  $permissions['node:organization:update fieldable image'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
