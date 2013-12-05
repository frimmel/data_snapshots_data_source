<?php
/**
 * @file
 * dss_data_source_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dss_data_source_export_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dss_data_source_export_node_info() {
  $items = array(
    'data_snapshot_data_source_dev' => array(
      'name' => t('Data Snapshot Data Source Dev'),
      'base' => 'node_content',
      'description' => t('Dev content type for Data Snapshot Data Sources'),
      'has_title' => '1',
      'title_label' => t('Public Name for Dataset'),
      'help' => '',
    ),
  );
  return $items;
}
