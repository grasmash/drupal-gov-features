<?php
/**
 * @file
 * gov_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gov_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer Terms and Conditions'.
  $permissions['administer Terms and Conditions'] = array(
    'name' => 'administer Terms and Conditions',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'legal',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'global administrator' => 'global administrator',
      'site architect' => 'site architect',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change other user\'s password'.
  $permissions['change other user\'s password'] = array(
    'name' => 'change other user\'s password',
    'roles' => array(),
    'module' => 'useraccount_permissions',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'useraccount_permissions',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'edit other user\'s email address'.
  $permissions['edit other user\'s email address'] = array(
    'name' => 'edit other user\'s email address',
    'roles' => array(),
    'module' => 'useraccount_permissions',
  );

  // Exported permission: 'edit own email address'.
  $permissions['edit own email address'] = array(
    'name' => 'edit own email address',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'useraccount_permissions',
  );

  // Exported permission: 'edit own user account'.
  $permissions['edit own user account'] = array(
    'name' => 'edit own user account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'useraccount_permissions',
  );

  // Exported permission: 'override blog_entry promote to front page option'.
  $permissions['override blog_entry promote to front page option'] = array(
    'name' => 'override blog_entry promote to front page option',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override case promote to front page option'.
  $permissions['override case promote to front page option'] = array(
    'name' => 'override case promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override court_decision promote to front page option'.
  $permissions['override court_decision promote to front page option'] = array(
    'name' => 'override court_decision promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override event promote to front page option'.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override gallery promote to front page option'.
  $permissions['override gallery promote to front page option'] = array(
    'name' => 'override gallery promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override historical_bio promote to front page option'.
  $permissions['override historical_bio promote to front page option'] = array(
    'name' => 'override historical_bio promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override image_map promote to front page option'.
  $permissions['override image_map promote to front page option'] = array(
    'name' => 'override image_map promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override landing_page promote to front page option'.
  $permissions['override landing_page promote to front page option'] = array(
    'name' => 'override landing_page promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override opinion promote to front page option'.
  $permissions['override opinion promote to front page option'] = array(
    'name' => 'override opinion promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override org_chart promote to front page option'.
  $permissions['override org_chart promote to front page option'] = array(
    'name' => 'override org_chart promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override organization promote to front page option'.
  $permissions['override organization promote to front page option'] = array(
    'name' => 'override organization promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override press_release promote to front page option'.
  $permissions['override press_release promote to front page option'] = array(
    'name' => 'override press_release promote to front page option',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override resource promote to front page option'.
  $permissions['override resource promote to front page option'] = array(
    'name' => 'override resource promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override sidebar promote to front page option'.
  $permissions['override sidebar promote to front page option'] = array(
    'name' => 'override sidebar promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speech promote to front page option'.
  $permissions['override speech promote to front page option'] = array(
    'name' => 'override speech promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override staff_profile promote to front page option'.
  $permissions['override staff_profile promote to front page option'] = array(
    'name' => 'override staff_profile promote to front page option',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override vacancy_announcement promote to front page option'.
  $permissions['override vacancy_announcement promote to front page option'] = array(
    'name' => 'override vacancy_announcement promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override webform promote to front page option'.
  $permissions['override webform promote to front page option'] = array(
    'name' => 'override webform promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override youtube_video promote to front page option'.
  $permissions['override youtube_video promote to front page option'] = array(
    'name' => 'override youtube_video promote to front page option',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'site architect' => 'site architect',
    ),
    'module' => 'user',
  );

  // Exported permission: 'view Terms and Conditions'.
  $permissions['view Terms and Conditions'] = array(
    'name' => 'view Terms and Conditions',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'site architect' => 'site architect',
    ),
    'module' => 'legal',
  );

  return $permissions;
}
