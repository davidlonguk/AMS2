<?php
/**
 * @file
 * ams_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ams_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ams_video_summary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AMS Video Summary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AMS Video Summary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'showTax';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ams_shows' => 'ams_shows',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'verticalTax';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'ams_verticals' => 'ams_verticals',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_2']['id'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['term_node_tid_2']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_2']['field'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Platform guid */
  $handler->display->display_options['fields']['field_platform_guid']['id'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['field'] = 'field_platform_guid';
  /* Field: Content: Platform PID */
  $handler->display->display_options['fields']['field_platform_pid']['id'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['table'] = 'field_data_field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['field'] = 'field_platform_pid';
  /* Field: Content: Brightcove ID */
  $handler->display->display_options['fields']['field_brightcove_id']['id'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['table'] = 'field_data_field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['field'] = 'field_brightcove_id';
  /* Field: Content: ams show ref */
  $handler->display->display_options['fields']['field_ams_show_ref']['id'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['table'] = 'field_data_field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['field'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['label'] = 'Show';
  /* Field: Content: Season Number */
  $handler->display->display_options['fields']['field_season_number']['id'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['table'] = 'field_data_field_season_number';
  $handler->display->display_options['fields']['field_season_number']['field'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: ams image path */
  $handler->display->display_options['fields']['field_ams_image_path']['id'] = 'field_ams_image_path';
  $handler->display->display_options['fields']['field_ams_image_path']['table'] = 'field_data_field_ams_image_path';
  $handler->display->display_options['fields']['field_ams_image_path']['field'] = 'field_ams_image_path';
  $handler->display->display_options['fields']['field_ams_image_path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ams_image_path']['alter']['text'] = '<img src="[field_ams_image_path-value]" alt="STILL: [title]" />';
  /* Field: Field: ams site section */
  $handler->display->display_options['fields']['field_ams_site_section']['id'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['table'] = 'field_data_field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['field'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['label'] = 'Site section';
  $handler->display->display_options['fields']['field_ams_site_section']['delta_offset'] = '0';
  /* Field: Content: ams vertical ref */
  $handler->display->display_options['fields']['field_ams_vertical_ref']['id'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['table'] = 'field_data_field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['field'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['label'] = 'Vertical ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['delta_offset'] = '0';
  /* Field: Field: ams vertical section */
  $handler->display->display_options['fields']['field_ams_vertical_section']['id'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['table'] = 'field_data_field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['field'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['delta_offset'] = '0';
  /* Field: Content: ams categories ref */
  $handler->display->display_options['fields']['field_ams_categories_ref']['id'] = 'field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['table'] = 'field_data_field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['field'] = 'field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['delta_offset'] = '0';
  /* Field: Content: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: ams url */
  $handler->display->display_options['fields']['field_ams_url']['id'] = 'field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['table'] = 'field_data_field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['field'] = 'field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ams_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_ams_url']['alter']['alt'] = 'View on site';
  $handler->display->display_options['fields']['field_ams_url']['alter']['target'] = '_blank';
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Geo Restriction */
  $handler->display->display_options['fields']['field_geo_restriction']['id'] = 'field_geo_restriction';
  $handler->display->display_options['fields']['field_geo_restriction']['table'] = 'field_data_field_geo_restriction';
  $handler->display->display_options['fields']['field_geo_restriction']['field'] = 'field_geo_restriction';
  /* Field: Content: Longform */
  $handler->display->display_options['fields']['field_longform']['id'] = 'field_longform';
  $handler->display->display_options['fields']['field_longform']['table'] = 'field_data_field_longform';
  $handler->display->display_options['fields']['field_longform']['field'] = 'field_longform';
  /* Field: Field: ams people */
  $handler->display->display_options['fields']['field_ams_people']['id'] = 'field_ams_people';
  $handler->display->display_options['fields']['field_ams_people']['table'] = 'field_data_field_ams_people';
  $handler->display->display_options['fields']['field_ams_people']['field'] = 'field_ams_people';
  $handler->display->display_options['fields']['field_ams_people']['label'] = 'People';
  $handler->display->display_options['fields']['field_ams_people']['delta_offset'] = '0';
  /* Field: Field: ams tags */
  $handler->display->display_options['fields']['field_ams_tags']['id'] = 'field_ams_tags';
  $handler->display->display_options['fields']['field_ams_tags']['table'] = 'field_data_field_ams_tags';
  $handler->display->display_options['fields']['field_ams_tags']['field'] = 'field_ams_tags';
  $handler->display->display_options['fields']['field_ams_tags']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_ams_tags']['delta_offset'] = '0';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid']['id'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_ams_guid']['label'] = 'seriesID';
  $handler->display->display_options['fields']['field_ams_guid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date Created (field_date_created) */
  $handler->display->display_options['sorts']['field_date_created_value']['id'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['sorts']['field_date_created_value']['field'] = 'field_date_created_value';
  $handler->display->display_options['sorts']['field_date_created_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ams_video' => 'ams_video',
  );
  /* Filter criterion: Content: Platform guid (field_platform_guid) */
  $handler->display->display_options['filters']['field_platform_guid_value']['id'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['filters']['field_platform_guid_value']['field'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['operator_id'] = 'field_platform_guid_value_op';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['label'] = 'Platform guid (field_platform_guid)';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['operator'] = 'field_platform_guid_value_op';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['identifier'] = 'field_platform_guid_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ams-video-summary';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'AMS';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'camel';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'showTax';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ams_shows' => 'ams_shows',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'verticalArticleTax';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'ams_verticals' => 'ams_verticals',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_2']['id'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['term_node_tid_2']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_2']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_2']['label'] = 'siteSectionTax';
  $handler->display->display_options['relationships']['term_node_tid_2']['vocabularies'] = array(
    'ams_site_section' => 'ams_site_section',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_vertical_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_3']['id'] = 'term_node_tid_3';
  $handler->display->display_options['relationships']['term_node_tid_3']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_3']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_3']['label'] = 'verticalSecTax';
  $handler->display->display_options['relationships']['term_node_tid_3']['vocabularies'] = array(
    'ams_vertical_section' => 'ams_vertical_section',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_site_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Platform guid */
  $handler->display->display_options['fields']['field_platform_guid']['id'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['field'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['label'] = 'guid';
  $handler->display->display_options['fields']['field_platform_guid']['element_label_colon'] = FALSE;
  /* Field: Content: Platform PID */
  $handler->display->display_options['fields']['field_platform_pid']['id'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['table'] = 'field_data_field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['field'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['label'] = 'pid';
  $handler->display->display_options['fields']['field_platform_pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform_pid']['element_label_colon'] = FALSE;
  /* Field: Content: Brightcove ID */
  $handler->display->display_options['fields']['field_brightcove_id']['id'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['table'] = 'field_data_field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['field'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['label'] = 'Brightcove I D';
  $handler->display->display_options['fields']['field_brightcove_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_brightcove_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brightcove_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_brightcove_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_brightcove_id']['type'] = 'text_plain';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid']['id'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_ams_guid']['label'] = 'series I D';
  $handler->display->display_options['fields']['field_ams_guid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid']['type'] = 'text_plain';
  /* Field: Content: ams show ref */
  $handler->display->display_options['fields']['field_ams_show_ref']['id'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['table'] = 'field_data_field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['field'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['label'] = 'series Name';
  $handler->display->display_options['fields']['field_ams_show_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_show_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Season Number */
  $handler->display->display_options['fields']['field_season_number']['id'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['table'] = 'field_data_field_season_number';
  $handler->display->display_options['fields']['field_season_number']['field'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['label'] = 'season';
  $handler->display->display_options['fields']['field_season_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_season_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_2']['id'] = 'field_ams_guid_2';
  $handler->display->display_options['fields']['field_ams_guid_2']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_2']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_2']['relationship'] = 'term_node_tid_2';
  $handler->display->display_options['fields']['field_ams_guid_2']['label'] = 'section I D';
  $handler->display->display_options['fields']['field_ams_guid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid_2']['type'] = 'text_plain';
  /* Field: Field: ams site section */
  $handler->display->display_options['fields']['field_ams_site_section']['id'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['table'] = 'field_data_field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['field'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['label'] = 'section Name';
  $handler->display->display_options['fields']['field_ams_site_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_site_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_site_section']['delta_offset'] = '0';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_3']['id'] = 'field_ams_guid_3';
  $handler->display->display_options['fields']['field_ams_guid_3']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_3']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_3']['relationship'] = 'term_node_tid_3';
  $handler->display->display_options['fields']['field_ams_guid_3']['label'] = 'vertical I D';
  $handler->display->display_options['fields']['field_ams_guid_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid_3']['type'] = 'text_plain';
  /* Field: Field: ams vertical section */
  $handler->display->display_options['fields']['field_ams_vertical_section']['id'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['table'] = 'field_data_field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['field'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['label'] = 'vertical Name';
  $handler->display->display_options['fields']['field_ams_vertical_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_vertical_section']['delta_offset'] = '0';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_1']['id'] = 'field_ams_guid_1';
  $handler->display->display_options['fields']['field_ams_guid_1']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_1']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['field_ams_guid_1']['label'] = 'verticalCategoryID';
  $handler->display->display_options['fields']['field_ams_guid_1']['alter']['text'] = '<verticalCategory>
<verticalCategoryID>[field_ams_guid_1]</verticalCategoryID>
<verticalCategoryName>[field_ams_vertical_ref]</verticalCategoryName>
</verticalCategory>';
  $handler->display->display_options['fields']['field_ams_guid_1']['element_label_colon'] = FALSE;
  /* Field: Content: ams vertical ref */
  $handler->display->display_options['fields']['field_ams_vertical_ref']['id'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['table'] = 'field_data_field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['field'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['label'] = 'vertical Category Name';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['alter']['text'] = '<verticalCategory>
<verticalCategoryID>[field_ams_guid_1]<verticalCategoryID>
<verticalCategoryName>[field_ams_vertical_ref]</verticalCategoryName>
</verticalCategory>';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ams_video' => 'ams_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Platform guid (field_platform_guid) */
  $handler->display->display_options['filters']['field_platform_guid_value']['id'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['filters']['field_platform_guid_value']['field'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['operator'] = 'not empty';
  /* Filter criterion: Content: ams show ref (field_ams_show_ref) */
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['id'] = 'field_ams_show_ref_tid';
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['table'] = 'field_data_field_ams_show_ref';
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['field'] = 'field_ams_show_ref_tid';
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ams_show_ref_tid']['vocabulary'] = 'ams_shows';
  $handler->display->display_options['path'] = 'ams-feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: editor picks */
  $handler = $view->new_display('views_data_export', 'editor picks', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'videos manually set to sticky';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'camel';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'showTax';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ams_shows' => 'ams_shows',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'verticalArticleTax';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'ams_verticals' => 'ams_verticals',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_site_section' => 0,
    'ams_vertical_section' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_2']['id'] = 'term_node_tid_2';
  $handler->display->display_options['relationships']['term_node_tid_2']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_2']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_2']['label'] = 'siteSectionTax';
  $handler->display->display_options['relationships']['term_node_tid_2']['vocabularies'] = array(
    'ams_site_section' => 'ams_site_section',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_vertical_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_3']['id'] = 'term_node_tid_3';
  $handler->display->display_options['relationships']['term_node_tid_3']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_3']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_3']['label'] = 'verticalSecTax';
  $handler->display->display_options['relationships']['term_node_tid_3']['vocabularies'] = array(
    'ams_vertical_section' => 'ams_vertical_section',
    'ams_categories' => 0,
    'ams_channel_brands' => 0,
    'ams_people' => 0,
    'ams_shows' => 0,
    'ams_site_section' => 0,
    'ams_verticals' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  /* Field: Content: Platform guid */
  $handler->display->display_options['fields']['field_platform_guid']['id'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['field'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['label'] = 'guid';
  $handler->display->display_options['fields']['field_platform_guid']['element_label_colon'] = FALSE;
  /* Field: Content: Platform PID */
  $handler->display->display_options['fields']['field_platform_pid']['id'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['table'] = 'field_data_field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['field'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['label'] = 'pid';
  $handler->display->display_options['fields']['field_platform_pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform_pid']['element_label_colon'] = FALSE;
  /* Field: Content: Brightcove ID */
  $handler->display->display_options['fields']['field_brightcove_id']['id'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['table'] = 'field_data_field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['field'] = 'field_brightcove_id';
  $handler->display->display_options['fields']['field_brightcove_id']['label'] = 'Brightcove I D';
  $handler->display->display_options['fields']['field_brightcove_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_brightcove_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brightcove_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_brightcove_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_brightcove_id']['type'] = 'text_plain';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid']['id'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_ams_guid']['label'] = 'series I D';
  $handler->display->display_options['fields']['field_ams_guid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid']['type'] = 'text_plain';
  /* Field: Content: ams show ref */
  $handler->display->display_options['fields']['field_ams_show_ref']['id'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['table'] = 'field_data_field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['field'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['label'] = 'series Name';
  $handler->display->display_options['fields']['field_ams_show_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_show_ref']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Season Number */
  $handler->display->display_options['fields']['field_season_number']['id'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['table'] = 'field_data_field_season_number';
  $handler->display->display_options['fields']['field_season_number']['field'] = 'field_season_number';
  $handler->display->display_options['fields']['field_season_number']['label'] = 'season';
  $handler->display->display_options['fields']['field_season_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_season_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_2']['id'] = 'field_ams_guid_2';
  $handler->display->display_options['fields']['field_ams_guid_2']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_2']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_2']['relationship'] = 'term_node_tid_2';
  $handler->display->display_options['fields']['field_ams_guid_2']['label'] = 'section I D';
  $handler->display->display_options['fields']['field_ams_guid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid_2']['type'] = 'text_plain';
  /* Field: Field: ams site section */
  $handler->display->display_options['fields']['field_ams_site_section']['id'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['table'] = 'field_data_field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['field'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['label'] = 'section Name';
  $handler->display->display_options['fields']['field_ams_site_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_site_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_site_section']['delta_offset'] = '0';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_3']['id'] = 'field_ams_guid_3';
  $handler->display->display_options['fields']['field_ams_guid_3']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_3']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_3']['relationship'] = 'term_node_tid_3';
  $handler->display->display_options['fields']['field_ams_guid_3']['label'] = 'vertical I D';
  $handler->display->display_options['fields']['field_ams_guid_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_guid_3']['type'] = 'text_plain';
  /* Field: Field: ams vertical section */
  $handler->display->display_options['fields']['field_ams_vertical_section']['id'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['table'] = 'field_data_field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['field'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['label'] = 'vertical Name';
  $handler->display->display_options['fields']['field_ams_vertical_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_vertical_section']['delta_offset'] = '0';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid_1']['id'] = 'field_ams_guid_1';
  $handler->display->display_options['fields']['field_ams_guid_1']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_1']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['field_ams_guid_1']['label'] = 'verticalCategoryID';
  $handler->display->display_options['fields']['field_ams_guid_1']['alter']['text'] = '<verticalCategory>
<verticalCategoryID>[field_ams_guid_1]</verticalCategoryID>
<verticalCategoryName>[field_ams_vertical_ref]</verticalCategoryName>
</verticalCategory>';
  $handler->display->display_options['fields']['field_ams_guid_1']['element_label_colon'] = FALSE;
  /* Field: Content: ams vertical ref */
  $handler->display->display_options['fields']['field_ams_vertical_ref']['id'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['table'] = 'field_data_field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['field'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['label'] = 'vertical Category Name';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['alter']['text'] = '<verticalCategory>
<verticalCategoryID>[field_ams_guid_1]<verticalCategoryID>
<verticalCategoryName>[field_ams_vertical_ref]</verticalCategoryName>
</verticalCategory>';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ams_vertical_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['multi_type'] = 'ol';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ams_video' => 'ams_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Platform guid (field_platform_guid) */
  $handler->display->display_options['filters']['field_platform_guid_value']['id'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['filters']['field_platform_guid_value']['field'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['path'] = 'ams-feed2';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: Video guid search */
  $handler = $view->new_display('page', 'Video guid search', 'page_1');
  $handler->display->display_options['display_description'] = 'Method for finding videos by ID';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Platform guid */
  $handler->display->display_options['fields']['field_platform_guid']['id'] = 'field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['fields']['field_platform_guid']['field'] = 'field_platform_guid';
  /* Field: Content: Platform PID */
  $handler->display->display_options['fields']['field_platform_pid']['id'] = 'field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['table'] = 'field_data_field_platform_pid';
  $handler->display->display_options['fields']['field_platform_pid']['field'] = 'field_platform_pid';
  /* Field: Content: ams show ref */
  $handler->display->display_options['fields']['field_ams_show_ref']['id'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['table'] = 'field_data_field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['field'] = 'field_ams_show_ref';
  $handler->display->display_options['fields']['field_ams_show_ref']['label'] = 'Show';
  /* Field: Field: ams site section */
  $handler->display->display_options['fields']['field_ams_site_section']['id'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['table'] = 'field_data_field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['field'] = 'field_ams_site_section';
  $handler->display->display_options['fields']['field_ams_site_section']['label'] = 'Site section';
  $handler->display->display_options['fields']['field_ams_site_section']['delta_offset'] = '0';
  /* Field: Content: ams vertical ref */
  $handler->display->display_options['fields']['field_ams_vertical_ref']['id'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['table'] = 'field_data_field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['field'] = 'field_ams_vertical_ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['label'] = 'Vertical ref';
  $handler->display->display_options['fields']['field_ams_vertical_ref']['delta_offset'] = '0';
  /* Field: Field: ams vertical section */
  $handler->display->display_options['fields']['field_ams_vertical_section']['id'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['table'] = 'field_data_field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['field'] = 'field_ams_vertical_section';
  $handler->display->display_options['fields']['field_ams_vertical_section']['delta_offset'] = '0';
  /* Field: Content: ams categories ref */
  $handler->display->display_options['fields']['field_ams_categories_ref']['id'] = 'field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['table'] = 'field_data_field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['field'] = 'field_ams_categories_ref';
  $handler->display->display_options['fields']['field_ams_categories_ref']['delta_offset'] = '0';
  /* Field: Content: Date Created */
  $handler->display->display_options['fields']['field_date_created']['id'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['table'] = 'field_data_field_date_created';
  $handler->display->display_options['fields']['field_date_created']['field'] = 'field_date_created';
  $handler->display->display_options['fields']['field_date_created']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: ams url */
  $handler->display->display_options['fields']['field_ams_url']['id'] = 'field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['table'] = 'field_data_field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['field'] = 'field_ams_url';
  $handler->display->display_options['fields']['field_ams_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_ams_url']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_ams_url']['alter']['alt'] = 'View on site';
  $handler->display->display_options['fields']['field_ams_url']['alter']['target'] = '_blank';
  /* Field: Taxonomy term: ams guid */
  $handler->display->display_options['fields']['field_ams_guid']['id'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['table'] = 'field_data_field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['field'] = 'field_ams_guid';
  $handler->display->display_options['fields']['field_ams_guid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_ams_guid']['label'] = 'seriesID';
  $handler->display->display_options['fields']['field_ams_guid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ams_video' => 'ams_video',
  );
  /* Filter criterion: Content: Platform guid (field_platform_guid) */
  $handler->display->display_options['filters']['field_platform_guid_value']['id'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['table'] = 'field_data_field_platform_guid';
  $handler->display->display_options['filters']['field_platform_guid_value']['field'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['value'] = 'bc_23645658001';
  $handler->display->display_options['filters']['field_platform_guid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['operator_id'] = 'field_platform_guid_value_op';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['label'] = 'Platform guid (field_platform_guid)';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['operator'] = 'field_platform_guid_value_op';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['identifier'] = 'field_platform_guid_value';
  $handler->display->display_options['filters']['field_platform_guid_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'video-search';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Video Search';
  $handler->display->display_options['menu']['description'] = 'Search videos by guid';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['ams_video_summary'] = $view;

  return $export;
}
