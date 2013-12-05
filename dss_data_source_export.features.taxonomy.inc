<?php
/**
 * @file
 * dss_data_source_export.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dss_data_source_export_taxonomy_default_vocabularies() {
  return array(
    'data_snapshot_data_set_frequency' => array(
      'name' => 'Data Snapshot Data Set Frequency',
      'machine_name' => 'data_snapshot_data_set_frequency',
      'description' => 'Image frequency for a Data Snapshot Data set.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'data_snapshots_themes' => array(
      'name' => 'Data Snapshots Themes',
      'machine_name' => 'data_snapshots_themes',
      'description' => 'The available Themes for Data Snapshots',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}