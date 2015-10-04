<?php
/**
 * @file
 * drupalfi_commerce.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalfi_commerce_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_customer_profile-membership-field_email'
  $field_instances['commerce_customer_profile-membership-field_email'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_email',
    'label' => 'Sähköposti',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-membership-field_firstname'
  $field_instances['commerce_customer_profile-membership-field_firstname'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_firstname',
    'label' => 'Etunimi',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-membership-field_lastname'
  $field_instances['commerce_customer_profile-membership-field_lastname'] = array(
    'bundle' => 'membership',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_lastname',
    'label' => 'Sukunimi',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'commerce_customer_profile-membership-field_privacy_settings'
  $field_instances['commerce_customer_profile-membership-field_privacy_settings'] = array(
    'bundle' => 'membership',
    'default_value' => array(
      0 => array(
        'value' => 'create_account',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_privacy_settings',
    'label' => 'Yksityisyys asetukset',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-basic_page-field_commerce_item'
  $field_instances['node-basic_page-field_commerce_item'] = array(
    'bundle' => 'basic_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_commerce_item',
    'label' => 'Commerce item',
    'required' => FALSE,
    'settings' => array(
      'field_injection' => TRUE,
      'referenceable_types' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Commerce item');
  t('Etunimi');
  t('Sukunimi');
  t('Sähköposti');
  t('Yksityisyys asetukset');

  return $field_instances;
}
