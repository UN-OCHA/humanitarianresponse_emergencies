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

  // Exported permission: clear csv_emergencies feeds.
  $permissions['clear csv_emergencies feeds'] = array(
    'name' => 'clear csv_emergencies feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_emergencies feeds.
  $permissions['import csv_emergencies feeds'] = array(
    'name' => 'import csv_emergencies feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_emergencies feeds.
  $permissions['unlock csv_emergencies feeds'] = array(
    'name' => 'unlock csv_emergencies feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
