<?php
/**
 * @file
 * gov_slideshow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gov_slideshow_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_text|field_collection_item|field_slides|form';
  $field_group->group_name = 'group_slide_text';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_slides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '4',
    'children' => array(
      0 => 'field_slide_caption',
      1 => 'field_slide_text_width',
      2 => 'field_slide_text_position',
      3 => 'field_slide_text_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slide-text field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide_text|field_collection_item|field_slides|form'] = $field_group;

  return $export;
}
