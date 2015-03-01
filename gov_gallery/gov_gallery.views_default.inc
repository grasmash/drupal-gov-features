<?php
/**
 * @file
 * gov_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gov_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Galleries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Images (field_gallery_images) */
  $handler->display->display_options['relationships']['field_gallery_images_value']['id'] = 'field_gallery_images_value';
  $handler->display->display_options['relationships']['field_gallery_images_value']['table'] = 'field_data_field_gallery_images';
  $handler->display->display_options['relationships']['field_gallery_images_value']['field'] = 'field_gallery_images_value';
  $handler->display->display_options['relationships']['field_gallery_images_value']['label'] = 'field_collection';
  $handler->display->display_options['relationships']['field_gallery_images_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_gallery_images_value']['delta'] = '0';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_gallery_image_image']['id'] = 'field_gallery_image_image';
  $handler->display->display_options['fields']['field_gallery_image_image']['table'] = 'field_data_field_gallery_image_image';
  $handler->display->display_options['fields']['field_gallery_image_image']['field'] = 'field_gallery_image_image';
  $handler->display->display_options['fields']['field_gallery_image_image']['relationship'] = 'field_gallery_images_value';
  $handler->display->display_options['fields']['field_gallery_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image_image']['alter']['text'] = '<a href="[path]">[field_gallery_image_image]</a>';
  $handler->display->display_options['fields']['field_gallery_image_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_gallery_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_image']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_gallery_date']['id'] = 'field_gallery_date';
  $handler->display->display_options['fields']['field_gallery_date']['table'] = 'field_data_field_gallery_date';
  $handler->display->display_options['fields']['field_gallery_date']['field'] = 'field_gallery_date';
  $handler->display->display_options['fields']['field_gallery_date']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_date']['settings'] = array(
    'format_type' => 'next_event',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Date (field_gallery_date) */
  $handler->display->display_options['sorts']['field_gallery_date_value']['id'] = 'field_gallery_date_value';
  $handler->display->display_options['sorts']['field_gallery_date_value']['table'] = 'field_data_field_gallery_date';
  $handler->display->display_options['sorts']['field_gallery_date_value']['field'] = 'field_gallery_date_value';
  $handler->display->display_options['sorts']['field_gallery_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2009:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_gallery_date.field_gallery_date_value' => 'field_data_field_gallery_date.field_gallery_date_value',
  );
  /* Filter criterion: Field: Organization (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['og_group_ref_target_id']['value'] = array(
    1664 => '1664',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'opa/galleries';
  $translatables['galleries'] = array(
    t('Master'),
    t('Photo Galleries'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_collection'),
    t('OG membership from node'),
    t('<a href="[path]">[field_gallery_image_image]</a>'),
    t('Date'),
    t('Page'),
  );
  $export['galleries'] = $view;

  return $export;
}
