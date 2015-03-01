<?php
/**
 * @file
 * gov_search_pane.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_search_pane_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
