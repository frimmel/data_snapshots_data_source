<?php
/**
 * @file
 * dss_data_source_export.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dss_data_source_export_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_metadata|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Data set Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'field_dssds_dev_official_name',
      1 => 'field_dssds_dev_themes',
      2 => 'field_dssds_dev_catalog_url',
      3 => 'field_dssds_dev_image_frequency',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_metadata|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_processing|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_processing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Processing Environment',
    'weight' => '3',
    'children' => array(
      0 => 'field_dssds_dev_processing_steps',
      1 => 'field_dssds_dev_processing_envir',
      2 => 'field_dssds_dev_technical_commen',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_processing|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_provider|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_provider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Data Provider',
    'weight' => '4',
    'children' => array(
      0 => 'field_dssds_dev_data_access_url',
      1 => 'field_dssds_dev_data_format',
      2 => 'field_dssds_dev_data_provider',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_provider|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_tabs|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Form Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_dssds_dev_text',
      1 => 'group_dssds_people',
      2 => 'group_dssds_dev_provider',
      3 => 'group_dssds_dev_metadata',
      4 => 'group_dssds_dev_processing',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_dssds_dev_tabs|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_dev_text|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_dev_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'Editable Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_dssds_dev_colors',
      1 => 'field_dssds_dev_data_matters',
      2 => 'field_dssds_dev_editorial_commen',
      3 => 'field_dssds_dev_references',
      4 => 'field_dssds_dev_framing_question',
      5 => 'field_dssds_dev_english_descript',
      6 => 'field_dssds_dev_plain_english_an',
      7 => 'field_dssds_dev_secondary_questi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_dev_text|node|data_snapshot_data_source_dev|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dssds_people|node|data_snapshot_data_source_dev|form';
  $field_group->group_name = 'group_dssds_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_snapshot_data_source_dev';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dssds_dev_tabs';
  $field_group->data = array(
    'label' => 'People Involved',
    'weight' => '6',
    'children' => array(
      0 => 'field_dssds_dev_reviewer_affilia',
      1 => 'field_dssds_dev_description_auth',
      2 => 'field_dssds_dev_reviewer',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dssds_people|node|data_snapshot_data_source_dev|form'] = $field_group;

  return $export;
}
