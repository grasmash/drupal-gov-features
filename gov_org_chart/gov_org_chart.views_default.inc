<?php
/**
 * @file
 * gov_org_chart.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gov_org_chart_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'org_chart';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Org Chart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Organizations (field_org_chart_organizations) */
  $handler->display->display_options['relationships']['field_org_chart_organizations_node']['id'] = 'field_org_chart_organizations_node';
  $handler->display->display_options['relationships']['field_org_chart_organizations_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_org_chart_organizations_node']['field'] = 'field_org_chart_organizations_node';
  $handler->display->display_options['relationships']['field_org_chart_organizations_node']['label'] = 'parent_node';
  $handler->display->display_options['relationships']['field_org_chart_organizations_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_org_chart_org_title']['id'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['field'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['text'] = '<a name="[item_id]"></a>[field_org_chart_org_title]
';
  $handler->display->display_options['fields']['field_org_chart_org_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['settings'] = array(
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
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_org_chart_org_desc']['id'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['table'] = 'field_data_field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['field'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_desc']['settings'] = array(
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#page-top">Return to Top</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Title (field_org_chart_org_title) */
  $handler->display->display_options['sorts']['field_org_chart_org_title_value']['id'] = 'field_org_chart_org_title_value';
  $handler->display->display_options['sorts']['field_org_chart_org_title_value']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['sorts']['field_org_chart_org_title_value']['field'] = 'field_org_chart_org_title_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_org_chart_organizations_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'org_chart' => 'org_chart',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;

  /* Display: List Header */
  $handler = $view->new_display('attachment', 'List Header', 'list_header');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_org_chart_org_title']['id'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['field'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['path'] = '#[item_id]';
  $handler->display->display_options['fields']['field_org_chart_org_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['settings'] = array(
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
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'default' => 0,
    'graphic' => 0,
  );

  /* Display: List */
  $handler = $view->new_display('block', 'List', 'list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_org_chart_org_title']['id'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['field'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['text'] = '<a name="[item_id]"></a>';
  $handler->display->display_options['fields']['field_org_chart_org_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['settings'] = array(
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
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_org_chart_org_desc']['id'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['table'] = 'field_data_field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['field'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_desc']['settings'] = array(
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="#page-top">Return to Top</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Graphic */
  $handler = $view->new_display('block', 'Graphic', 'graphic');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_org_chart_org_image']['id'] = 'field_org_chart_org_image';
  $handler->display->display_options['fields']['field_org_chart_org_image']['table'] = 'field_data_field_org_chart_org_image';
  $handler->display->display_options['fields']['field_org_chart_org_image']['field'] = 'field_org_chart_org_image';
  $handler->display->display_options['fields']['field_org_chart_org_image']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_org_chart_org_image']['settings'] = array(
    'image_style' => '',
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
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_org_chart_org_title']['id'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['field'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['settings'] = array(
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
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_org_chart_org_desc']['id'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['table'] = 'field_data_field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['field'] = 'field_org_chart_org_desc';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['label'] = '';
  $handler->display->display_options['fields']['field_org_chart_org_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_org_chart_org_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_desc']['settings'] = array(
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="org-desc">[field_org_chart_org_desc] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'bt-content';

  /* Display: Edit Orgs */
  $handler = $view->new_display('page', 'Edit Orgs', 'page_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_type' => 'host_entity_type',
    'host_entity_path' => 'host_entity_path',
    'field_org_chart_org_title' => 'field_org_chart_org_title',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing',
    'nothing_2' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_org_chart_org_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/field-collection/field-org-chart-organizations/add/node/!1?destination=node/!1">Add new organization</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_org_chart_org_title']['id'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['table'] = 'field_data_field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['field'] = 'field_org_chart_org_title';
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['alter']['text'] = '<a name="[item_id]"></a>[field_org_chart_org_title]
';
  $handler->display->display_options['fields']['field_org_chart_org_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_chart_org_title']['settings'] = array(
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_org_chart_organizations_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'org_chart' => 'org_chart',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['path'] = 'node/%/edit-orgs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Edit Organizations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['org_chart'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('parent_node'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('<a name="[item_id]"></a>[field_org_chart_org_title]
'),
    t('<a href="#page-top">Return to Top</a>'),
    t('All'),
    t('%1'),
    t('List Header'),
    t('List'),
    t('<a name="[item_id]"></a>'),
    t('Graphic'),
    t('<div class="org-desc">[field_org_chart_org_desc] </div>
'),
    t('Edit Orgs'),
    t('<a href="/field-collection/field-org-chart-organizations/add/node/!1?destination=node/!1">Add new organization</a>'),
    t('Title'),
    t('Operations'),
    t('Edit'),
    t('Delete'),
  );
  $export['org_chart'] = $view;

  return $export;
}
