<?php
/**
 * @file
 * ams_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ams_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:ams-video-summary
  $menu_links['main-menu:ams-video-summary'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ams-video-summary',
    'router_path' => 'ams-video-summary',
    'link_title' => 'AMS',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AMS');


  return $menu_links;
}
