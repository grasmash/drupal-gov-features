<?php

/**
 * @file
 * Contains functions for preparing display of an image map node.
 */

/**
 * Prepares an image map node of type 'usa' for display.
 */
function gov_image_map_usa_prepare($node, $view_mode) {

  // Create map image.
  $image = array(
    '#theme' => 'image',
    '#path' => drupal_get_path('module', 'gov_image_map') . '/images/usa.jpg',
    '#attributes' => array(
      'usemap' => '#usa',
      'class' => array('jq_maphilight'),
    ),
  );

  // Create <map> tag.
  $map = array(
    '#theme' => 'html_tag',
    '#tag' => 'map',
    '#value' => file_get_contents(drupal_get_path('module', 'gov_image_map') . '/includes/area.html'),
    '#attributes' => array(
      'name' => 'usa',
    ),
  );

  $image_map_field_instance = field_info_instance('node', 'field_imap_map_image', 'image_map');
  $display = field_get_display($image_map_field_instance, $view_mode, $node);
  $node->content['field_imap_map_image'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => 'image-map-wrapper',
    ),
    'image' => $image,
    'map' => $map,
    '#weight' => $display['weight'],
  );

  // Prepare javascript settings for associating USA states with image
  // map tags.
  gov_image_map_usa_js_prepare($node);
}

/**
 * Prepares the USA states data for an image map of type 'usa'.
 *
 * Add states data to Drupal.settings and loads custom JS file for associating
 * URLs and tiles defined in field_imap_state_links with <area> tags in <map>.
 *
 * @param obj $node
 *   The image map node to be prepared.
 */
function gov_image_map_usa_js_prepare($node) {

  // Use javascript to apply URLs and titles defined in
  // field_imap_state_links to <area> tags in <map>.
  $types = field_get_items('node', $node, 'field_imap_state_links');
  $states_raw_data = explode("\n", check_plain($types['0']['value']));

  $states_data = array();
  foreach ($states_raw_data as $state) {
    $values = explode('|', $state);
    // Strip whitespace and empty rows from array.
    $values = array_filter(array_map('trim', $values));

    // Extract state abbreviation.
    $state_abbr = $values[0];

    // Extract url and title values from array based on array size.
    switch (count($values)) {
      case 3:
        $title = $values[2];
        $states_data[$state_abbr]['title'] = $title;
      case 2:
        $parsed_url = gov_image_map_parse_url($values[1]);
        $options = array();

        // Grab the fragment/hash if it exists.
        if (!empty($parsed_url['fragment'])) {
          $options['fragment'] = $parsed_url['fragment'];
        }
        // Grab the query params if any exist.
        if (!empty($parsed_url['query_array'])) {
          $options['query'] = $parsed_url['query_array'];
        }

        $states_data[$state_abbr]['url'] = url($parsed_url['drupal_url'], $options);

        break;
    }
  }

  // Add states data to Drupal.settings and load custom JS file.
  $settings = array(
    'gov_image_map' => array(
      'states_data' => $states_data,
    ),
  );
  drupal_add_js($settings, 'setting');
  drupal_add_js(drupal_get_path('module', 'gov_image_map') . '/js/gov_image_map.js');
}

/**
 * Prepares the custom image map data for display.
 *
 * @param obj $node
 *   The image map node to be prepared.
 */
function gov_image_map_custom_prepare($node) {
  // Add necessary attributes to custom image to enable image map
  // features.
  $node->content['field_imap_map_image'][0]['#item']['attributes'] = array(
    'usemap' => '#custom-map',
    'class' => array('jq_maphilight'),
  );

  // Prepare <area> tags in field_imap_map by sanitizing and wrapping
  // in a <map> tag.
  $map = field_get_items('node', $node, 'field_imap_map');
  $area_tags = filter_xss($map['0']['value'], array('area'));
  $node->content['field_imap_map'] = array(
    '#theme' => 'html_tag',
    '#tag' => 'map',
    '#value' => $area_tags,
    '#attributes' => array(
      'name' => 'custom-map',
    ),
  );
}


/**
 * Takes a string and converts it to url components for drupal.
 *
 * @param string $url_to_parse
 *   The url or path the parse.
 *
 * @return array
 *   Array of URL components.
 */
function gov_image_map_parse_url($url_to_parse) {
  $parsed_url = parse_url($url_to_parse);
  $scheme   = isset($parsed_url['scheme']) ? $parsed_url['scheme'] . '://' : '';
  $host     = isset($parsed_url['host']) ? $parsed_url['host'] : '';
  $port     = isset($parsed_url['port']) ? ':' . $parsed_url['port'] : '';
  $user     = isset($parsed_url['user']) ? $parsed_url['user'] : '';
  $pass     = isset($parsed_url['pass']) ? ':' . $parsed_url['pass'] : '';
  $pass     = ($user || $pass) ? "$pass@" : '';
  $path     = isset($parsed_url['path']) ? $parsed_url['path'] : '';

  $parsed_url['query_array'] = array();
  // Extract query params and turn them into a query array.
  if (!empty($parsed_url['query'])) {
    // Query string is coming from Drupal so may have encoded characters.
    $parsed_url['query'] = html_entity_decode(urldecode($parsed_url['query']));
    parse_str($parsed_url['query'], $parsed_url['query_array']);
  }

  // Check for fragment link intended for an anchor on this page.
  if (empty($scheme) && empty($host) && empty($path)) {
    // There is only a fragment so treat it as an on-page anchor.
    // Set the path to the current path.
    $path = check_plain($_SERVER['REQUEST_URI']);
  }

  // If internal URL, strip root slash if present to make it Drupal compliant.
  if (empty($scheme)) {
    // Scheme is empty so treat as internal path.
    $path = ltrim($path, '/');
  }

  $parsed_url['drupal_url'] = $scheme . $user . $pass . $host . $port . $path;

  return $parsed_url;
}
