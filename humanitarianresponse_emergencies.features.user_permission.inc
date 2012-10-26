<?php
/**
 * @file
 * humanitarianresponse_emergencies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_emergencies_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer emergencies vocabulary terms.
  $permissions['administer emergencies vocabulary terms'] = array(
    'name' => 'administer emergencies vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
