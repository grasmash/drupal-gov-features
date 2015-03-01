<?php
/**
 * @file
 * gov_org_chart.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gov_org_chart_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_org_chart_organizations-field_org_chart_org_desc'
  $field_instances['field_collection_item-field_org_chart_organizations-field_org_chart_org_desc'] = array(
    'bundle' => 'field_org_chart_organizations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_org_chart_org_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_org_chart_organizations-field_org_chart_org_image'
  $field_instances['field_collection_item-field_org_chart_organizations-field_org_chart_org_image'] = array(
    'bundle' => 'field_org_chart_organizations',
    'deleted' => 0,
    'description' => 'An image, such as a logo or a seal, for this organization.',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_org_chart_org_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'org-charts/orgs/images',
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
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '',
      'max_resolution' => '175x55',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_org_chart_organizations-field_org_chart_org_title'
  $field_instances['field_collection_item-field_org_chart_organizations-field_org_chart_org_title'] = array(
    'bundle' => 'field_org_chart_organizations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_org_chart_org_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_archived'
  $field_instances['node-org_chart-field_archived'] = array(
    'bundle' => 'org_chart',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'When content is archived, it will still be publicly accessible. However, it will be removed from all views and its path will be prepended with "/archives".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_archived',
    'label' => 'Archived',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_displays'
  $field_instances['node-org_chart-field_org_chart_displays'] = array(
    'bundle' => 'org_chart',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose which displays are available for this Org Chart. The list view is required.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
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
        'type' => 'list_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_chart_displays',
    'label' => 'Displays',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_footer'
  $field_instances['node-org_chart-field_org_chart_footer'] = array(
    'bundle' => 'org_chart',
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
        'weight' => 2,
      ),
      'full' => array(
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
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_chart_footer',
    'label' => 'Footer',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_header'
  $field_instances['node-org_chart-field_org_chart_header'] = array(
    'bundle' => 'org_chart',
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
      'full' => array(
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
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_chart_header',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_image'
  $field_instances['node-org_chart-field_org_chart_image'] = array(
    'bundle' => 'org_chart',
    'deleted' => 0,
    'description' => 'The image that will be displayed. Combined with the textual data and the imagemap, this permits users to hover and click on the image to get information.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_org_chart_image',
    'label' => 'Chart Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'org-charts/images',
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
          'value' => '[node:og-group-ref:field_org_abbreviation]/org-charts/orgs/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_imagemap'
  $field_instances['node-org_chart-field_org_chart_imagemap'] = array(
    'bundle' => 'org_chart',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is where the area(s) for the image map are specified.
<em>Examples:</em><br />
<area shape="rect" coords="311,-1,461,47" alt="Office of the Attorney General">
<area shape="rect" coords="310,52,459,97" alt="Office of the Deputy Attorney General">

In order to associate an <area> tag with an organization, the organization must have a "Title" that <em>exactly matches</em> the area\'s "alt" tag.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_chart_imagemap',
    'label' => 'Map Areas',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-org_chart-field_org_chart_organizations'
  $field_instances['node-org_chart-field_org_chart_organizations'] = array(
    'bundle' => 'org_chart',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The textual data for the organizations represented in the chart image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_org_chart_organizations',
    'label' => 'Organizations',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-org_chart-og_group_ref'
  $field_instances['node-org_chart-og_group_ref'] = array(
    'bundle' => 'org_chart',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The parent organization to which this chart belongs.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
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
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
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
  t('An image, such as a logo or a seal, for this organization.');
  t('Archived');
  t('Chart Image');
  t('Choose which displays are available for this Org Chart. The list view is required.');
  t('Description');
  t('Displays');
  t('Footer');
  t('Header');
  t('Image');
  t('Map Areas');
  t('Organization');
  t('Organizations');
  t('The image that will be displayed. Combined with the textual data and the imagemap, this permits users to hover and click on the image to get information.');
  t('The parent organization to which this chart belongs.');
  t('The textual data for the organizations represented in the chart image.');
  t('This is where the area(s) for the image map are specified.
<em>Examples:</em><br />
<area shape="rect" coords="311,-1,461,47" alt="Office of the Attorney General">
<area shape="rect" coords="310,52,459,97" alt="Office of the Deputy Attorney General">

In order to associate an <area> tag with an organization, the organization must have a "Title" that <em>exactly matches</em> the area\'s "alt" tag.');
  t('Title');
  t('When content is archived, it will still be publicly accessible. However, it will be removed from all views and its path will be prepended with "/archives".');

  return $field_instances;
}
