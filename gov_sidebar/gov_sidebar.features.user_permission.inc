<?php
/**
 * @file
 * gov_sidebar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_sidebar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node sidebar content'.
  $permissions['administer panelizer node sidebar content'] = array(
    'name' => 'administer panelizer node sidebar content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node sidebar context'.
  $permissions['administer panelizer node sidebar context'] = array(
    'name' => 'administer panelizer node sidebar context',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node sidebar defaults'.
  $permissions['administer panelizer node sidebar defaults'] = array(
    'name' => 'administer panelizer node sidebar defaults',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node sidebar layout'.
  $permissions['administer panelizer node sidebar layout'] = array(
    'name' => 'administer panelizer node sidebar layout',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node sidebar overview'.
  $permissions['administer panelizer node sidebar overview'] = array(
    'name' => 'administer panelizer node sidebar overview',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node sidebar settings'.
  $permissions['administer panelizer node sidebar settings'] = array(
    'name' => 'administer panelizer node sidebar settings',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create sidebar content'.
  $permissions['create sidebar content'] = array(
    'name' => 'create sidebar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sidebar content'.
  $permissions['delete any sidebar content'] = array(
    'name' => 'delete any sidebar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sidebar content'.
  $permissions['delete own sidebar content'] = array(
    'name' => 'delete own sidebar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sidebar content'.
  $permissions['edit any sidebar content'] = array(
    'name' => 'edit any sidebar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sidebar content'.
  $permissions['edit own sidebar content'] = array(
    'name' => 'edit own sidebar content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
