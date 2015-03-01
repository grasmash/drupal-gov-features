<?php
/**
 * @file
 * gov_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable slideshow'.
  $permissions['create fieldable slideshow'] = array(
    'name' => 'create fieldable slideshow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slideshow'.
  $permissions['delete fieldable slideshow'] = array(
    'name' => 'delete fieldable slideshow',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slideshow'.
  $permissions['edit fieldable slideshow'] = array(
    'name' => 'edit fieldable slideshow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
