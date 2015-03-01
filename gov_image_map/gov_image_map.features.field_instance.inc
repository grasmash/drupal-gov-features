<?php
/**
 * @file
 * gov_image_map.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gov_image_map_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-image_map-field_archived'
  $field_instances['node-image_map-field_archived'] = array(
    'bundle' => 'image_map',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_footer'
  $field_instances['node-image_map-field_imap_footer'] = array(
    'bundle' => 'image_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Footer text appears below both the image map and the body, but above the site-wide footer.',
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
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imap_footer',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_header'
  $field_instances['node-image_map-field_imap_header'] = array(
    'bundle' => 'image_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is for the text that appears above the image map.',
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
    'field_name' => 'field_imap_header',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_map'
  $field_instances['node-image_map-field_imap_map'] = array(
    'bundle' => 'image_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is where the area(s) for the image map are specified.
<em>Examples:</em><br>
 &lt;area shape="rect" coords="0,0,82,126" href="#district12" alt="District 12" title="Jump to District 12."&gt;<br>
 &lt;area shape="circle" coords="90,58,3" href="/oip/reference" alt="Office of Information Policy" title="Go to Office of Information Policy Reference."&gt;<br>
 &lt;area shape="circle" coords="17,200,18" href="http://www.whitehouse.gov" alt="The White House" title="Go to the White House website."&gt;
',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imap_map',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_map_image'
  $field_instances['node-image_map-field_imap_map_image'] = array(
    'bundle' => 'image_map',
    'deleted' => 0,
    'description' => 'Upload the image to be used as the clickable image map.  <strong>CAUTION:</strong> It can not be wider than 960px or it will get resized to 960px width but your area coordinates will not match so the links will not be properly positioned.  ',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_imap_map_image',
    'label' => 'Map Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => 'image-maps/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
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
          'value' => '[node:og-group-ref:field_org_abbreviation]/image-maps/images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '2 MB',
      'max_resolution' => '960x2000',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_map_type'
  $field_instances['node-image_map-field_imap_map_type'] = array(
    'bundle' => 'image_map',
    'default_value' => array(
      0 => array(
        'value' => 'usa',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the type of image map to build.  Choose <em>USA</em> to build a map of the United States with States linked.  Choose <em>Custom</em> for any other image map.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_imap_map_type',
    'label' => 'Image Map Type',
    'required' => 1,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-image_map-field_imap_state_links'
  $field_instances['node-image_map-field_imap_state_links'] = array(
    'bundle' => 'image_map',
    'default_value' => array(
      0 => array(
        'value' => 'AK|
AL|
AR|
AS|
AZ|
CA|
CO|
CT|
DC|
DE|
FL|
GA|
GU|
HI|
IA|
ID|
IL|
IN|
KS|
KY|
LA|
MA|
MD|
ME|
MI|
MN|
MO|
MP|
MS|
MT|
NC|
ND|
NE|
NH|
NJ|
NM|
NV|
NY|
OH|
OK|
OR|
PA|
PR|
RI|
SC|
SD|
TN|
TX|
UT|
VA|
VI|
VT|
WA|
WI|
WV|
WY|
PR|
VI|
GU|
AS|
MP|',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is pipe delimited list of State abbreviations,URLs, and link titles for the USA state map. <br/>
<strong>Pattern:</strong><br/>
State Abbreviation | URL | Title hover tool tip <br/>
<strong>Examples:</strong><br/>
NY  <em>// Results in NO hoverable or clickable region over New York state. </em><br/>
NY | http://www.ny.gov/ | Visit the New York State Government website.  <em>// Results in a hoverable and clickable region over New York state.</em><br/>
NY | /oip/reference   <em>// Results in a clickable region over New York state linking to internal content.</em><br/>
NY | http://www.ny.gov/   <em>// Results in a clickable region over New York state linking to external content.</em><br/>
NY | #ny-state   <em>// Results in a clickable region over New York state linking to an anchor on this page named \'ny-state\'</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_imap_state_links',
    'label' => 'State Links',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-image_map-og_group_ref'
  $field_instances['node-image_map-og_group_ref'] = array(
    'bundle' => 'image_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the organization to which this image map belongs.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
  t('Archived');
  t('Choose the organization to which this image map belongs.');
  t('Choose the type of image map to build.  Choose <em>USA</em> to build a map of the United States with States linked.  Choose <em>Custom</em> for any other image map.');
  t('Footer');
  t('Footer text appears below both the image map and the body, but above the site-wide footer.');
  t('Header');
  t('Image Map Type');
  t('Map Areas');
  t('Map Image');
  t('Organization');
  t('State Links');
  t('This is for the text that appears above the image map.');
  t('This is pipe delimited list of State abbreviations,URLs, and link titles for the USA state map. <br/>
<strong>Pattern:</strong><br/>
State Abbreviation | URL | Title hover tool tip <br/>
<strong>Examples:</strong><br/>
NY  <em>// Results in NO hoverable or clickable region over New York state. </em><br/>
NY | http://www.ny.gov/ | Visit the New York State Government website.  <em>// Results in a hoverable and clickable region over New York state.</em><br/>
NY | /oip/reference   <em>// Results in a clickable region over New York state linking to internal content.</em><br/>
NY | http://www.ny.gov/   <em>// Results in a clickable region over New York state linking to external content.</em><br/>
NY | #ny-state   <em>// Results in a clickable region over New York state linking to an anchor on this page named \'ny-state\'</em>');
  t('This is where the area(s) for the image map are specified.
<em>Examples:</em><br>
 &lt;area shape="rect" coords="0,0,82,126" href="#district12" alt="District 12" title="Jump to District 12."&gt;<br>
 &lt;area shape="circle" coords="90,58,3" href="/oip/reference" alt="Office of Information Policy" title="Go to Office of Information Policy Reference."&gt;<br>
 &lt;area shape="circle" coords="17,200,18" href="http://www.whitehouse.gov" alt="The White House" title="Go to the White House website."&gt;
');
  t('Upload the image to be used as the clickable image map.  <strong>CAUTION:</strong> It can not be wider than 960px or it will get resized to 960px width but your area coordinates will not match so the links will not be properly positioned.  ');
  t('When content is archived, it will still be publicly accessible. However, it will be removed from all views and its path will be prepended with "/archives".');

  return $field_instances;
}
