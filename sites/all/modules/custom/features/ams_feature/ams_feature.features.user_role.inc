<?php
/**
 * @file
 * ams_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ams_feature_user_default_roles() {
  $roles = array();

  // Exported role: automated controller.
  $roles['automated controller'] = array(
    'name' => 'automated controller',
    'weight' => 3,
  );

  return $roles;
}
