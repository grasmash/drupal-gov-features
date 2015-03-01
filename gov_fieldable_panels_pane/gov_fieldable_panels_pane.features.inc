<?php
/**
 * @file
 * gov_fieldable_panels_pane.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_fieldable_panels_pane_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gov_fieldable_panels_pane_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
