<?php
/**
 * @file
 * gov_search_pane.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_search_pane_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable usasearch'.
  $permissions['create fieldable usasearch'] = array(
    'name' => 'create fieldable usasearch',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable usasearch'.
  $permissions['delete fieldable usasearch'] = array(
    'name' => 'delete fieldable usasearch',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable usasearch'.
  $permissions['edit fieldable usasearch'] = array(
    'name' => 'edit fieldable usasearch',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
