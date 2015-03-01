<?php
/**
 * @file
 * gov_sidebar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_sidebar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gov_sidebar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gov_sidebar_node_info() {
  $items = array(
    'sidebar' => array(
      'name' => t('Sidebar'),
      'base' => 'node_content',
      'description' => t('Sidebars are panelized and assigned to a specific Organic Group, giving group administrator the ability to modify their group\'s sidebar. It is assigned to a region via the Context module, reacting to the OG Context condition.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
