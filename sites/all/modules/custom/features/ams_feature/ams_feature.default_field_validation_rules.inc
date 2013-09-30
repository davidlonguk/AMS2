<?php
/**
 * @file
 * ams_feature.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function ams_feature_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'unique ID';
  $rule->name = 'unique_id';
  $rule->field_name = 'field_platform_guid';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'ams_video';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'thePlatform ID must be unique';
  $export['unique_id'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique Show Guid';
  $rule->name = 'unique_show_guid';
  $rule->field_name = 'field_ams_guid';
  $rule->col = 'value';
  $rule->entity_type = 'taxonomy_term';
  $rule->bundle = 'ams_shows';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'The Show ID must be unique';
  $export['unique_show_guid'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique Site Section ID';
  $rule->name = 'unique_site_section_id';
  $rule->field_name = 'field_ams_guid';
  $rule->col = 'value';
  $rule->entity_type = 'taxonomy_term';
  $rule->bundle = 'ams_site_section';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Site Section ID must be unique';
  $export['unique_site_section_id'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'unique vertical id';
  $rule->name = 'unique_vertical_id';
  $rule->field_name = 'field_ams_guid';
  $rule->col = 'value';
  $rule->entity_type = 'taxonomy_term';
  $rule->bundle = 'ams_verticals';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please use a unique Vertical ID';
  $export['unique_vertical_id'] = $rule;

  return $export;
}
