<?php
/**
 * @file
 * jenkins_plugins_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jenkins_plugins_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jenkins_plugins_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jenkins_plugins_feature_node_info() {
  $items = array(
    'jenkins_plugin' => array(
      'name' => t('Jenkins Plugin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
