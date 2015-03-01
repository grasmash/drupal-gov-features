<?php
/**
 * @file
 * gov_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gov_user_user_default_roles() {
  $roles = array();

  // Exported role: cache purger.
  $roles['cache purger'] = array(
    'name' => 'cache purger',
    'weight' => 9,
  );

  // Exported role: global administrator.
  $roles['global administrator'] = array(
    'name' => 'global administrator',
    'weight' => 7,
  );

  // Exported role: site architect.
  $roles['site architect'] = array(
    'name' => 'site architect',
    'weight' => 8,
  );

  // Exported role: user administrator.
  $roles['user administrator'] = array(
    'name' => 'user administrator',
    'weight' => 6,
  );

  return $roles;
}
