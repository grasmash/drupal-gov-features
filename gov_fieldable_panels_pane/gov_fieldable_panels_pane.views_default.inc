<?php
/**
 * @file
 * gov_fieldable_panels_pane.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gov_fieldable_panels_pane_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fieldable_pane_entities_admin';
  $view->description = 'Administrative view to show a list of fieldable pane entities and administer them.';
  $view->tag = 'admin';
  $view->base_table = 'fieldable_panels_panes';
  $view->human_name = 'fieldable_pane_entities_admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Panes in your Groups\' Panels';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer fieldable panels panes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'view_entity' => 'view_entity',
    'edit_entity' => 'view_entity',
    'delete_entity' => 'view_entity',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_entity' => array(
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 1,
    ),
    'edit_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no entities of this type.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Fieldable pane: Administrative title */
  $handler->display->display_options['fields']['admin_title']['id'] = 'admin_title';
  $handler->display->display_options['fields']['admin_title']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['admin_title']['field'] = 'admin_title';
  $handler->display->display_options['fields']['admin_title']['label'] = 'Admin title';
  /* Field: Fieldable pane: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pane title';
  /* Field: Fieldable pane: changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Fieldable pane: Administrative link */
  $handler->display->display_options['fields']['view_entity']['id'] = 'view_entity';
  $handler->display->display_options['fields']['view_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['view_entity']['field'] = 'view_entity';
  /* Field: Fieldable pane: Administrative edit link */
  $handler->display->display_options['fields']['edit_entity']['id'] = 'edit_entity';
  $handler->display->display_options['fields']['edit_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['edit_entity']['field'] = 'edit_entity';
  /* Field: Fieldable pane: Administrative delete link */
  $handler->display->display_options['fields']['delete_entity']['id'] = 'delete_entity';
  $handler->display->display_options['fields']['delete_entity']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['fields']['delete_entity']['field'] = 'delete_entity';
  /* Contextual filter: Fieldable pane: Bundle */
  $handler->display->display_options['arguments']['bundle']['id'] = 'bundle';
  $handler->display->display_options['arguments']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['bundle']['field'] = 'bundle';
  $handler->display->display_options['arguments']['bundle']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['bundle']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bundle']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bundle']['summary_options']['items_per_page'] = '50';
  /* Filter criterion: Fieldable pane: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['exposed'] = TRUE;
  $handler->display->display_options['filters']['bundle']['expose']['operator_id'] = 'bundle_op';
  $handler->display->display_options['filters']['bundle']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['bundle']['expose']['operator'] = 'bundle_op';
  $handler->display->display_options['filters']['bundle']['expose']['identifier'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['fieldable_pane_entities_admin'] = array(
    t('Master'),
    t('Panes in your Groups\' Panels'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are currently no entities of this type.'),
    t('Admin title'),
    t('Pane title'),
    t('Updated'),
    t('Administrative link'),
    t('Administrative edit link'),
    t('Administrative delete link'),
    t('All'),
    t('Type'),
    t('Block'),
  );
  $export['fieldable_pane_entities_admin'] = $view;

  return $export;
}
