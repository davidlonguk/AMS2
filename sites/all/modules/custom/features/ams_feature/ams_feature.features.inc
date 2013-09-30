<?php
/**
 * @file
 * ams_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ams_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function ams_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ams_feature_node_info() {
  $items = array(
    'ams_video' => array(
      'name' => t('AMS Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Video Name'),
      'help' => '',
    ),
  );
  return $items;
}
