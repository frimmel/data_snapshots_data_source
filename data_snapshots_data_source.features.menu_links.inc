<?php
/**
 * @file
 * dss_data_source_export.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dss_data_source_export_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/data-snapshot-data-source-dev
  $menu_links['navigation:node/add/data-snapshot-data-source-dev'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/data-snapshot-data-source-dev',
    'router_path' => 'node/add/data-snapshot-data-source-dev',
    'link_title' => 'Data Snapshot Data Source Dev',
    'options' => array(
      'attributes' => array(
        'title' => 'Dev content type for Data Snapshot Data Sources',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Data Snapshot Data Source Dev');


  return $menu_links;
}
