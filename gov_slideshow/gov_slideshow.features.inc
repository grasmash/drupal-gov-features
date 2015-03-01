<?php
/**
 * @file
 * gov_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gov_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'label' => 'Slideshow Slide',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 796,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
