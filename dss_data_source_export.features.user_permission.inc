<?php
/**
 * @file
 * dss_data_source_export.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dss_data_source_export_user_default_permissions() {
  $permissions = array();

  // Exported permission: create data_snapshot_data_source_dev content.
  $permissions['create data_snapshot_data_source_dev content'] = array(
    'name' => 'create data_snapshot_data_source_dev content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any data_snapshot_data_source_dev content.
  $permissions['delete any data_snapshot_data_source_dev content'] = array(
    'name' => 'delete any data_snapshot_data_source_dev content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own data_snapshot_data_source_dev content.
  $permissions['delete own data_snapshot_data_source_dev content'] = array(
    'name' => 'delete own data_snapshot_data_source_dev content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any data_snapshot_data_source_dev content.
  $permissions['edit any data_snapshot_data_source_dev content'] = array(
    'name' => 'edit any data_snapshot_data_source_dev content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own data_snapshot_data_source_dev content.
  $permissions['edit own data_snapshot_data_source_dev content'] = array(
    'name' => 'edit own data_snapshot_data_source_dev content',
    'roles' => array(
      0 => 'Publisher',
      1 => 'administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
