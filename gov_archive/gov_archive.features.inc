<?php
/**
 * @file
 * gov_archive.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_archive_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
