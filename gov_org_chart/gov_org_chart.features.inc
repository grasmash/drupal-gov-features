<?php
/**
 * @file
 * gov_org_chart.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_org_chart_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gov_org_chart_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gov_org_chart_node_info() {
  $items = array(
    'org_chart' => array(
      'name' => t('Org Chart'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
