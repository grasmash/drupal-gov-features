<?php
/**
 * @file
 * gov_archive.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gov_archive_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'archived_node';
  $context->description = 'Handles display of archived nodes.';
  $context->tag = 'archives';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:12:{s:4:"node";s:4:"node";s:11:"menu_custom";i:0;s:21:"fieldable_panels_pane";i:0;s:21:"field_collection_item";i:0;s:18:"og_membership_type";i:0;s:13:"og_membership";i:0;s:8:"redirect";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:31:"workbench_moderation_transition";i:0;}',
        'field_name' => 'field_archived',
        'field_value' => '1',
        'field_empty' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-50',
        ),
        'menu-menu-og-310001' => array(
          'module' => 'menu',
          'delta' => 'menu-og-310001',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Handles display of archived nodes.');
  t('archives');
  $export['archived_node'] = $context;

  return $export;
}
