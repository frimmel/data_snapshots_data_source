<?php
/**
 * @file
 * dss_data_source_export.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dss_data_source_third_test_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__data_snapshot_data_source_dev';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
         ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__data_snapshot_data_source_dev'] = $strongarm;

  return $export;
}
