<?php
/**
 * @file
 * basic_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function basic_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-basic_page-field_basic_page_body'
  $field_instances['node-basic_page-field_basic_page_body'] = array(
    'bundle' => 'basic_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_basic_page_body',
    'label' => 'Basic page body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic page body');

  return $field_instances;
}
