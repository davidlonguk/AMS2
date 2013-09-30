<?php
/**
 * @file
 * ams_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ams_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_people';
  $feeds_importer->config = array(
    'name' => 'CSV People',
    'description' => 'Importer from AMS 1 People',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'People Name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Character Name',
            'target' => 'field_ams_character_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Gender',
            'target' => 'field_gender',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Keywords',
            'target' => 'field_ams_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_people',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_people'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_shows';
  $feeds_importer->config = array(
    'name' => 'CSV Shows',
    'description' => 'Importer from AMS 1 Shows',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'field_ams_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Show Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Show Page Link',
            'target' => 'field_ams_url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Show image',
            'target' => 'field_ams_image:fig',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Keywords',
            'target' => 'field_ams_tags',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Channels',
            'target' => 'field_ams_show_chan',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'People',
            'target' => 'field_ams_people',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_shows',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_shows'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_site_sections';
  $feeds_importer->config = array(
    'name' => 'CSV Site Sections',
    'description' => 'Site Sections imported from AMS 1',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'field_ams_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Site Sections Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_site_section',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_site_sections'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_vertical_section';
  $feeds_importer->config = array(
    'name' => 'CSV Vertical Section',
    'description' => 'Vertical Section importer from AMS 1',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'field_ams_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Vertical Section Name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Site Section',
            'target' => 'field_ams_site_section',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_vertical_section',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_vertical_section'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_verticals';
  $feeds_importer->config = array(
    'name' => 'CSV Verticals',
    'description' => 'Importer from AMS 1 Verticals',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'field_ams_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Vertical Sub Category',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Vertical Section',
            'target' => 'field_ams_vertical_section',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Vertical Article Tags',
            'target' => 'field_ams_tags',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Vertical Link',
            'target' => 'field_ams_url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_verticals',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_verticals'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_video';
  $feeds_importer->config = array(
    'name' => 'CSV Video',
    'description' => 'Import Video Records from AMS 1',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '53',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Video Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Video Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Brightcove ID',
            'target' => 'field_brightcove_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Vertical Section',
            'target' => 'field_ams_vertical_section',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Verticals',
            'target' => 'field_ams_vertical_ref',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Show',
            'target' => 'field_ams_show_ref',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Season Number',
            'target' => 'field_season_number',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Thumbnail',
            'target' => 'field_ams_image:fig',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'thePlatform guid',
            'target' => 'field_platform_guid',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'thePlatform PID',
            'target' => 'field_platform_pid',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'People',
            'target' => 'field_ams_people',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Keywords',
            'target' => 'field_ams_tags',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Categories',
            'target' => 'field_ams_categories_ref',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Transcript/quote',
            'target' => 'field_transcript_quote',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'link',
            'target' => 'field_ams_url',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Longform',
            'target' => 'field_longform',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Date Created',
            'target' => 'field_date_created:start',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Duration',
            'target' => 'field_duration',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_video'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'keywords';
  $feeds_importer->config = array(
    'name' => 'CSV Keywords',
    'description' => 'Import Keywords into the tags taxonomy',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'keywords Name',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tags',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['keywords'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'knack_video_categories';
  $feeds_importer->config = array(
    'name' => 'CSV Video Categories',
    'description' => 'Importer from AMS 1 Categories',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Category Name',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_categories',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['knack_video_categories'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'theplatform_feed_importer_history_account';
  $feeds_importer->config = array(
    'name' => 'thePlatform Feed Importer History Account',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'guid',
          'xpathparser:9' => 'title',
          'xpathparser:8' => 'description',
          'xpathparser:7' => 'pl:added',
          'xpathparser:6' => 'media:group/media:content[last()]/@duration',
          'xpathparser:3' => 'media:group/media:content[last()]/plfile:release/plrelease:pid',
          'xpathparser:4' => 'plmedia:defaultThumbnailUrl',
          'xpathparser:5' => 'AETN:bcItemID',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:9' => 0,
          'xpathparser:8' => 0,
          'xpathparser:7' => 0,
          'xpathparser:6' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
        ),
        'context' => '/rss/channel//item',
        'exp' => array(
          'errors' => 1,
          'tidy' => 1,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:9' => 'xpathparser:9',
            'context' => 0,
            'xpathparser:8' => 0,
            'xpathparser:7' => 0,
            'xpathparser:6' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '19',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_platform_guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:9',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:8',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_date_created:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_duration',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_platform_pid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_ams_image_path',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_brightcove_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ams_video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['theplatform_feed_importer_history_account'] = $feeds_importer;

  return $export;
}
