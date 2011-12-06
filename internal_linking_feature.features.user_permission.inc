<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function internal_linking_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor
  $permissions['access ckeditor'] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'editor',
    ),
  );

  // Exported permission: access ckeditor link
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'editor',
    ),
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer ckeditor link
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
