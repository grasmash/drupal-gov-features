<?php
/**
 * @file
 * gov_image_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_image_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gov_image_map_node_info() {
  $items = array(
    'image_map' => array(
      'name' => t('Image Map'),
      'base' => 'node_content',
      'description' => t('Image map nodes display clickable images. A map of the United States with clickable states is provided by default.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
