<?php
/**
 * @file
 * jenkins_plugins_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jenkins_plugins_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'jenkins_plugin_importer';
  $feeds_importer->config = array(
    'name' => 'Jenkins Plugin Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.plugins.*',
        'sources' => array(
          'jsonpath_parser:1' => 'gav',
          'jsonpath_parser:0' => 'excerpt',
          'jsonpath_parser:2' => 'labels.*',
          'jsonpath_parser:3' => 'requiredCore',
          'jsonpath_parser:4' => 'title',
          'jsonpath_parser:5' => 'name',
          'jsonpath_parser:6' => 'url',
          'jsonpath_parser:7' => 'version',
          'jsonpath_parser:8' => 'wiki',
          'jsonpath_parser:9' => 'developers.*.name',
        ),
        'debug' => array(
          'options' => array(
            'jsonpath_parser:0' => 'jsonpath_parser:0',
            'context' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'field_excerpt',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_labels',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_required_core',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'title',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_version',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_wiki_url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_developers',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_gav',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'jenkins_plugin',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['jenkins_plugin_importer'] = $feeds_importer;

  return $export;
}
