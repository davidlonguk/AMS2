<?php
/**
 * @file
 * Views include file with views hooks.
 */

/**
 * Implementation of hook_views_plugins().
 */
function ams_tp_push_views_plugins() {
  $path = drupal_get_path('module', 'ams_tp_push');

  $style_defaults = array(
    'path' => $path . '/plugins',
    'parent' => 'ams_tp_push',
    'theme' => 'ams_tp_push',
    'theme path' => $path . '/theme',
    'theme file' => 'ams_tp_push.theme.inc',
    'uses row plugin' => FALSE,
    'uses fields' => TRUE,
    'uses options' => TRUE,
    'type' => 'data_export',
  );

  return array(
    'display' => array (
      'ams_tp_push' => array(
        'title' => t('Data export'),
        'help' => t('Export the view results to a file. Can handle very large result sets.'),
        'path' => $path . '/plugins',
        'handler' => 'ams_tp_push_plugin_display_export',
        'parent' => 'feed',
        'uses hook menu' => TRUE,
        'use ajax' => FALSE,
        'use pager' => FALSE,
        'accept attachments' => FALSE,
        'admin' => t('Data export'),
        'help topic' => 'display-data-export',
      ),
    ),
    'style' => array(
      'ams_tp_push' => array(
        // this isn't really a display but is necessary so the file can
        // be included.
        'no ui' => TRUE,
        'handler' => 'ams_tp_push_plugin_style_export',
        'path' => $path . '/plugins',
        'theme path' => $path . '/theme',
        'theme file' => 'ams_tp_push.theme.inc',
        'type' => 'normal',
      ),
      'ams_tp_push_csv' => array(
        'title' => t('CSV file'),
        'help' => t('Display the view as a comma separated list.'),
        'handler' => 'ams_tp_push_plugin_style_export_csv',
        // Views Data Export element that will be used to set additional headers when serving the feed.
        'export headers' => array('Content-type' => 'text/csv; charset=utf-8'),
        // Views Data Export element mostly used for creating some additional classes and template names.
        'export feed type' => 'csv',
        'export feed text' => 'CSV',
        'export feed file' => '%view.csv',
        'export feed icon' => drupal_get_path('module', 'ams_tp_push') . '/images/csv.png',
        'additional themes' => array(
          'ams_tp_push_csv_header' => 'style',
          'ams_tp_push_csv_body' => 'style',
          'ams_tp_push_csv_footer' => 'style',
        ),
        'additional themes base' => 'ams_tp_push_csv',
      ) + $style_defaults,
      'ams_tp_push_doc' => array(
        'title' => t('DOC file'),
        'help' => t('Display the view as a doc file.'),
        'handler' => 'ams_tp_push_plugin_style_export',
        'export headers' => array('Content-Type' => 'application/msword'),
        'export feed type' => 'doc',
        'export feed text' => 'Word Document',
        'export feed file' => '%view.doc',
        'export feed icon' => drupal_get_path('module', 'ams_tp_push') . '/images/doc.png',
        'additional themes' => array(
          'ams_tp_push_doc_header' => 'style',
          'ams_tp_push_doc_body' => 'style',
          'ams_tp_push_doc_footer' => 'style',
        ),
        'additional themes base' => 'ams_tp_push_doc',
      ) + $style_defaults,
      'ams_tp_push_txt' => array(
        'title' => t('TXT file'),
        'help' => t('Display the view as a txt file.'),
        'handler' => 'ams_tp_push_plugin_style_export',
        'export headers' => array('Content-Type' => 'text/plain'),
        'export feed type' => 'txt',
        'export feed text' => 'Plain Text Document',
        'export feed file' => '%view.txt',
        'export feed icon' => drupal_get_path('module', 'ams_tp_push') . '/images/txt.png',
        'additional themes' => array(
          'ams_tp_push_txt_header' => 'style',
          'ams_tp_push_txt_body' => 'style',
          'ams_tp_push_txt_footer' => 'style',
        ),
        'additional themes base' => 'ams_tp_push_txt',
      ) + $style_defaults,
      'ams_tp_push_xls' => array(
        'title' => t('XLS file'),
        'help' => t('Display the view as a xls file.'),
        'handler' => 'ams_tp_push_plugin_style_export',
        'export headers' => array('Content-Type' => 'application/vnd.ms-excel'),
        'export feed type' => 'xls',
        'export feed text' => 'XLS',
        'export feed file' => '%view.xls',
        'export feed icon' => drupal_get_path('module', 'ams_tp_push') . '/images/xls.png',
        'additional themes' => array(
          'ams_tp_push_xls_header' => 'style',
          'ams_tp_push_xls_body' => 'style',
          'ams_tp_push_xls_footer' => 'style',
        ),
        'additional themes base' => 'ams_tp_push_xls',
      ) + $style_defaults,
      'ams_tp_push_xml' => array(
        'title' => t('XML file'),
        'help' => t('Display the view as a txt file.'),
        'handler' => 'ams_tp_push_plugin_style_export_xml',
        'export headers' => array('Content-Type' => 'text/xml'),
        'export feed type' => 'xml',
        'export feed text' => 'XML',
        'export feed file' => '%view.xml',
        'export feed icon' => drupal_get_path('module', 'ams_tp_push') . '/images/xml.png',
        'additional themes' => array(
          'ams_tp_push_xml_header' => 'style',
          'ams_tp_push_xml_body' => 'style',
          'ams_tp_push_xml_footer' => 'style',
        ),
        'additional themes base' => 'ams_tp_push_xml',
      ) + $style_defaults,
    ),
  );
}
