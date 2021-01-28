<?php
/**
 * Site alias configuration for Drupal installations.
 */

/*
$sites = array(
  'hostname' => 'site_directory',
);
*/

if (file_exists(__DIR__ . '/sites.local.php')) {
  include __DIR__ . '/sites.local.php';
}
