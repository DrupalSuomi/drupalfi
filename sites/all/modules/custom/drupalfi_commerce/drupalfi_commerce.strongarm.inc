<?php
/**
 * @file
 * drupalfi_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalfi_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_default_currency';
  $strongarm->value = 'EUR';
  $export['commerce_default_currency'] = $strongarm;

  return $export;
}
