<?php
/**
 * @file
 * base_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function base_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Drupal.fi';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_drupalfi_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'drupalfi_tabs' => 1,
    'drupalfi_breadcrumb' => 'yes',
    'drupalfi_breadcrumb_separator' => '',
    'drupalfi_breadcrumb_home' => 0,
    'drupalfi_breadcrumb_trailing' => 0,
    'drupalfi_breadcrumb_title' => 0,
    'drupalfi_ie_enabled' => 0,
    'drupalfi_ie_enabled_versions' => array(
      'ie8' => 0,
      'ie9' => 0,
      'ie10' => 0,
    ),
    'clear_registry' => 0,
  );
  $export['theme_drupalfi_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  return $export;
}
