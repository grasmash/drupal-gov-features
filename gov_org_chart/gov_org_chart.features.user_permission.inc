<?php
/**
 * @file
 * gov_org_chart.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_org_chart_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node org_chart defaults'.
  $permissions['administer panelizer node org_chart defaults'] = array(
    'name' => 'administer panelizer node org_chart defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create org_chart content'.
  $permissions['create org_chart content'] = array(
    'name' => 'create org_chart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any org_chart content'.
  $permissions['delete any org_chart content'] = array(
    'name' => 'delete any org_chart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own org_chart content'.
  $permissions['delete own org_chart content'] = array(
    'name' => 'delete own org_chart content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any org_chart content'.
  $permissions['edit any org_chart content'] = array(
    'name' => 'edit any org_chart content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own org_chart content'.
  $permissions['edit own org_chart content'] = array(
    'name' => 'edit own org_chart content',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter org_chart revision log entry'.
  $permissions['enter org_chart revision log entry'] = array(
    'name' => 'enter org_chart revision log entry',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart authored by option'.
  $permissions['override org_chart authored by option'] = array(
    'name' => 'override org_chart authored by option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart authored on option'.
  $permissions['override org_chart authored on option'] = array(
    'name' => 'override org_chart authored on option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart published option'.
  $permissions['override org_chart published option'] = array(
    'name' => 'override org_chart published option',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart revision option'.
  $permissions['override org_chart revision option'] = array(
    'name' => 'override org_chart revision option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart sticky option'.
  $permissions['override org_chart sticky option'] = array(
    'name' => 'override org_chart sticky option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
