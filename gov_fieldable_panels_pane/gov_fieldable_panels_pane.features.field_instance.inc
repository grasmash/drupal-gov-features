<?php
/**
 * @file
 * gov_fieldable_panels_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gov_fieldable_panels_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-fieldable_panels_pane-field_fpp_basic_image'
  $field_instances['fieldable_panels_pane-fieldable_panels_pane-field_fpp_basic_image'] = array(
    'bundle' => 'fieldable_panels_pane',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_fpp_basic_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'file_directory' => 'basic_panes/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[fieldable_panels_pane:og-group-ref:field_org_abbreviation]/fieldable-panel-panes/basic-panes/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_required' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__component_icon' => 0,
          'colorbox__gallery_slide' => 0,
          'colorbox__gallery_thumbnail' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__medium' => 0,
          'colorbox__slideshow' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__staff_profile' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__video_thumbnail' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_component_icon' => 0,
          'image_gallery_slide' => 0,
          'image_gallery_thumbnail' => 0,
          'image_large' => 'image_large',
          'image_linkit_thumb' => 0,
          'image_medium' => 'image_medium',
          'image_slideshow' => 0,
          'image_square_thumbnail' => 0,
          'image_staff_profile' => 0,
          'image_thumbnail' => 'image_thumbnail',
          'image_video_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-fieldable_panels_pane-field_fpp_body'
  $field_instances['fieldable_panels_pane-fieldable_panels_pane-field_fpp_body'] = array(
    'bundle' => 'fieldable_panels_pane',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_fpp_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-fieldable_panels_pane-og_group_ref'
  $field_instances['fieldable_panels_pane-fieldable_panels_pane-og_group_ref'] = array(
    'bundle' => 'fieldable_panels_pane',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'og_group_ref',
    'label' => 'Organization',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Organization');

  return $field_instances;
}
