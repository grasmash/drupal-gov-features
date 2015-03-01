<?php

/**
 * @file
 * Helper functions for GOV Purge module.
 */

/**
 * This will recursively find and add paths redirecting to $source_path.
 *
 * @param string $destination_path
 *   The destination path whose redirects should be purged.
 *
 * @return array
 *   A flat array of redirect paths to be purged.
 */
function gov_purge_get_redirects_paths($destination_path) {
  $redirect_paths = array();

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'redirect', '=')
    ->propertyCondition('redirect', $destination_path);
  $result = $query->execute();

  if (!empty($result['redirect'])) {
    $rids = array_keys($result['redirect']);
    $redirects = entity_load('redirect', $rids);
    foreach ($redirects as $redirect) {
      $redirect_paths[] = $redirect->source;

      // Recursively add redirects for this redirect.
      $redirect_paths = array_merge($redirect_paths, gov_purge_get_redirects_paths($redirect->source));
    }
  }

  return $redirect_paths;
}


/**
 * Gathers all redirect paths that are related.
 *
 * @param object $redirect
 *   The redirect object presented in redirect hooks.
 *
 * @return array
 *   The paths of any related redirects.
 */
function gov_purge_get_related_redirect_paths($redirect) {
  // Collect all paths and related paths.
  $paths = array();
  $related_paths = array();
  // Gather all possible source and destination paths from redirect object.
  $paths[] = !empty($redirect->source) ? $redirect->source : '';
  $paths[] = !empty($redirect->redirect) ? $redirect->redirect : '';
  $paths[] = !empty($redirect->original->source) ? $redirect->original->source : '';
  $paths[] = !empty($redirect->original->redirect) ? $redirect->original->redirect : '';
  $paths = array_filter($paths);
  // Each path may be related to other paths by other redirects, gather those.
  foreach ($paths as $path) {
    $related_paths = array_merge($related_paths, gov_purge_get_redirects_paths($path));
  }
  $paths = array_merge($paths, $related_paths);
  return array_unique($paths);
}

/**
 * Purges the redirect and related redirects.
 *
 * @param object $redirect
 *   The redirect object presented in redirect hooks.
 */
function gov_purge_purge_redirect($redirect) {
  if (_acquia_purge_are_we_allowed_to_purge()) {
    // Purge the old redirect pairs and the new redirect pairs.
    $paths = gov_purge_get_related_redirect_paths($redirect);
    // Now test path against our strict validation checks.
    foreach ($paths as $id => $path) {
      if (_acquia_purge_input_validate($path)) {
        unset($paths[$id]);
      }
    }
    watchdog('gov_purge', 'The following paths were set to be purged <pre>@print_r</pre>', array('@print_r' => print_r($paths, TRUE)));
    // Add all paths and dispatch processing to ap-process.
    acquia_purge_purge_paths($paths);
    if (_acquia_purge_queue_lock()) {
      do {
        $items = _acquia_purge_queue_pop('_acquia_purge_queue_processpurge');
      } while (count($items));
    }
  }
  else {
    watchdog('gov_purge', 'The following path was to be purged but was not allowed by acquia_purge: @path', array('@path' => $redirect->redirect));
  }
}
