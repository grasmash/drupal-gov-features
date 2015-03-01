<?php
/**
 * @file
 * gov_fieldable_panels_pane.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_fieldable_panels_pane_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer fieldable panels panes'.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable fieldable_panels_pane'.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable fieldable_panels_pane'.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable fieldable_panels_pane'.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
