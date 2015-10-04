<?php
/**
 * @file
 * drupalfi_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalfi_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
