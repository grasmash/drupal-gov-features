<?php
/**
 * @file
 * gov_search_pane.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gov_search_pane_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-usasearch-field_usasearch_affiliate'
  $field_instances['fieldable_panels_pane-usasearch-field_usasearch_affiliate'] = array(
    'bundle' => 'usasearch',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'usasearch_field',
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
        'type' => 'usasearch_field_affiliate_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_usasearch_affiliate',
    'label' => 'Affiliate ID',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'usasearch_field',
      'settings' => array(),
      'type' => 'usasearch_field_affiliate_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-usasearch-og_group_ref'
  $field_instances['fieldable_panels_pane-usasearch-og_group_ref'] = array(
    'bundle' => 'usasearch',
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
  t('Affiliate ID');
  t('Organization');

  return $field_instances;
}
