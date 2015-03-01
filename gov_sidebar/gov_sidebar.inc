<?php

/**
 * @file
 * Contains functions that are not hook implementations.
 */

/**
 * Creates a new sidebar node for a given organization node.
 *
 * @param object $org
 *   A node of type organization.
 *
 * @return object
 *   The created sidebar entity.
 */
function gov_sidebar_create_sidebar($org) {

  $values = array(
    'type' => 'sidebar',
    'uid' => 1,
    'status' => 1,
    'comment' => 0,
    'promote' => 0,
  );
  $entity = entity_create('node', $values);

  // Now create an entity_metadata_wrapper around the new node entity
  // to make getting and setting values easier.
  $ewrapper = entity_metadata_wrapper('node', $entity);
  $ewrapper->title->set(substr($org->title . ' Sidebar', 0, 255));
  $ewrapper->og_group_ref->set(intval($org->nid));

  try {
    $ewrapper->save();
  }
  catch (Exception $e) {
    watchdog('gov_sidebar', 'Sidebar node could not be created for @org. \n' . $e->getMessage(), array('@org' => $org->title), WATCHDOG_ERROR);
  }

  return $ewrapper->value();
}
