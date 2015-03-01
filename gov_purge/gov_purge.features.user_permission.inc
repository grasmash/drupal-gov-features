<?php
/**
 * @file
 * gov_purge.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_purge_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'purge on-screen'.
  $permissions['purge on-screen'] = array(
    'name' => 'purge on-screen',
    'roles' => array(
      'cache purger' => 'cache purger',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'acquia_purge',
  );

  return $permissions;
}
