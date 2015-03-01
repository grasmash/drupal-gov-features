<?php
/**
 * @file
 * gov_image_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gov_image_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-image-field_image_pane_hover_image'
  $field_instances['fieldable_panels_pane-image-field_image_pane_hover_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => 'This image will appear when the user hovers over the regular image.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
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
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_image_pane_hover_image',
    'label' => 'Hover Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_required' => 0,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'image_panes/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
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
          'value' => '[fieldable_panels_pane:og-group-ref:field_org_abbreviation]/fieldable-panel-panes/image-panes/hover-images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '2 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
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
          'image' => 0,
          'image_component_icon' => 0,
          'image_gallery_slide' => 0,
          'image_gallery_thumbnail' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_medium' => 0,
          'image_slideshow' => 0,
          'image_square_thumbnail' => 0,
          'image_staff_profile' => 0,
          'image_thumbnail' => 0,
          'image_video_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-field_image_pane_image'
  $field_instances['fieldable_panels_pane-image-field_image_pane_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '[fieldable_panels_pane:field-image-pane-link:url]',
            'linked' => 1,
          ),
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_image_pane_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'image_panes/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
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
          'value' => '[fieldable_panels_pane:og-group-ref:field_org_abbreviation]/fieldable-panel-panes/image-panes/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
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
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
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
          'image' => 0,
          'image_component_icon' => 0,
          'image_gallery_slide' => 0,
          'image_gallery_thumbnail' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_medium' => 0,
          'image_slideshow' => 0,
          'image_square_thumbnail' => 0,
          'image_staff_profile' => 0,
          'image_thumbnail' => 0,
          'image_video_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-field_image_pane_link'
  $field_instances['fieldable_panels_pane-image-field_image_pane_link'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URL that the user will be take to after clicking on the image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_image_pane_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'exclude_cv' => FALSE,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-image-og_group_ref'
  $field_instances['fieldable_panels_pane-image-og_group_ref'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hover Image');
  t('Image');
  t('Link');
  t('Organization');
  t('The URL that the user will be take to after clicking on the image.');
  t('This image will appear when the user hovers over the regular image.');

  return $field_instances;
}
