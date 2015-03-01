<?php
/**
 * @file
 * gov_image_pane.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_image_pane_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable image'.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable image'.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable image'.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
