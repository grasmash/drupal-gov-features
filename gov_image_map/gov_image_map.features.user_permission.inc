<?php
/**
 * @file
 * gov_image_map.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_image_map_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create image_map content'.
  $permissions['create image_map content'] = array(
    'name' => 'create image_map content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image_map content'.
  $permissions['delete any image_map content'] = array(
    'name' => 'delete any image_map content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image_map content'.
  $permissions['delete own image_map content'] = array(
    'name' => 'delete own image_map content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image_map content'.
  $permissions['edit any image_map content'] = array(
    'name' => 'edit any image_map content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image_map content'.
  $permissions['edit own image_map content'] = array(
    'name' => 'edit own image_map content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  return $permissions;
}
