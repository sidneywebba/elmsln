<?php
/**
 * @file
 * elmsmedia_section_perms.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function elmsmedia_section_perms_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:section:instructor'.
  $roles['node:section:instructor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'section',
    'name' => 'instructor',
  );

  // Exported OG Role: 'node:section:lead instructor'.
  $roles['node:section:lead instructor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'section',
    'name' => 'lead instructor',
  );

  return $roles;
}
