<?php
/**
 * @file
 * gov_slideshow.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function gov_slideshow_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:organization:create fieldable slideshow'
  $permissions['node:organization:create fieldable slideshow'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  // Exported og permission: 'node:organization:delete fieldable slideshow'
  $permissions['node:organization:delete fieldable slideshow'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organization:update fieldable slideshow'
  $permissions['node:organization:update fieldable slideshow'] = array(
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content creator' => 'content creator',
      'content publisher' => 'content publisher',
    ),
  );

  return $permissions;
}
