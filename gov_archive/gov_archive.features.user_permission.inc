<?php
/**
 * @file
 * gov_archive.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_archive_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_archived'.
  $permissions['create field_archived'] = array(
    'name' => 'create field_archived',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_archived'.
  $permissions['edit field_archived'] = array(
    'name' => 'edit field_archived',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_archived'.
  $permissions['edit own field_archived'] = array(
    'name' => 'edit own field_archived',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_archived'.
  $permissions['view field_archived'] = array(
    'name' => 'view field_archived',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_archived'.
  $permissions['view own field_archived'] = array(
    'name' => 'view own field_archived',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
