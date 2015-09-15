<?php
/**
 * @file
 * drupalfi_commerce.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalfi_commerce_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_commerce_item'
  $field_bases['field_commerce_item'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_commerce_item',
    'foreign keys' => array(
      'product_id' => array(
        'columns' => array(
          'product_id' => 'product_id',
        ),
        'table' => 'commerce_product',
      ),
    ),
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'options_list_limit' => '',
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  return $field_bases;
}
