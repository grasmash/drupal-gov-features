<?php
/**
 * @file
 * gov_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gov_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gov_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gov_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_slide.
  $styles['gallery_slide'] = array(
    'name' => 'gallery_slide',
    'label' => 'Gallery Slide',
    'effects' => array(),
  );

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'name' => 'gallery_thumbnail',
    'label' => 'Gallery Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension based on the type of anchor selected.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 128,
          'height' => 96,
          'anchor' => 'center-top',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gov_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
