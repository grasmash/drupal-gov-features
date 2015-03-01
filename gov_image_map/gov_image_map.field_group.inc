<?php
/**
 * @file
 * gov_image_map.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gov_image_map_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_map|node|image_map|form';
  $field_group->group_name = 'group_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image_map';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '3',
    'children' => array(
      0 => 'field_imap_map',
      1 => 'field_imap_map_image',
      2 => 'field_imap_map_type',
      3 => 'field_imap_state_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-map field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_map|node|image_map|form'] = $field_group;

  return $export;
}
