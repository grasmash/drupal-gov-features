<?php
/**
 * @file
 * gov_organization.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function gov_organization_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:organization:administrator'.
  $roles['node:organization:administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organization',
    'name' => 'administrator',
  );

  // Exported OG Role: 'node:organization:content administrator'.
  $roles['node:organization:content administrator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organization',
    'name' => 'content administrator',
  );

  // Exported OG Role: 'node:organization:content approver'.
  $roles['node:organization:content approver'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organization',
    'name' => 'content approver',
  );

  // Exported OG Role: 'node:organization:content creator'.
  $roles['node:organization:content creator'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organization',
    'name' => 'content creator',
  );

  // Exported OG Role: 'node:organization:content publisher'.
  $roles['node:organization:content publisher'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'organization',
    'name' => 'content publisher',
  );

  return $roles;
}
