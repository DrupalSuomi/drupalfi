<?php
/**
 * @file
 * drupal_company.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupal_company_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'companies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Companies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Yritykset';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Kenttä: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'field-wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_address',
    2 => 'field_company_description',
    3 => 'field_website_url',
    4 => 'nothing',
    5 => 'field_contact_person_title',
    6 => 'field_contact_person_name',
    7 => 'field_contact_person_email',
    8 => 'field_contact_phone_number',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Kenttä: Sisältö: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Kenttä: Sisältö: Company description */
  $handler->display->display_options['fields']['field_company_description']['id'] = 'field_company_description';
  $handler->display->display_options['fields']['field_company_description']['table'] = 'field_data_field_company_description';
  $handler->display->display_options['fields']['field_company_description']['field'] = 'field_company_description';
  $handler->display->display_options['fields']['field_company_description']['label'] = '';
  $handler->display->display_options['fields']['field_company_description']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['label'] = '';
  $handler->display->display_options['fields']['field_website_url']['alter']['text'] = '<a href="[field_website_url-value]">[field_website_url-title]</a>';
  $handler->display->display_options['fields']['field_website_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_url']['settings'] = array(
    'trim_length' => '80',
    'nofollow' => 0,
  );
  /* Kenttä: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>Ota Yhteyttä:</h4>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Contact person title */
  $handler->display->display_options['fields']['field_contact_person_title']['id'] = 'field_contact_person_title';
  $handler->display->display_options['fields']['field_contact_person_title']['table'] = 'field_data_field_contact_person_title';
  $handler->display->display_options['fields']['field_contact_person_title']['field'] = 'field_contact_person_title';
  $handler->display->display_options['fields']['field_contact_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_contact_person_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Contact person name */
  $handler->display->display_options['fields']['field_contact_person_name']['id'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['table'] = 'field_data_field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['field'] = 'field_contact_person_name';
  $handler->display->display_options['fields']['field_contact_person_name']['label'] = '';
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_person_name']['alter']['text'] = '[field_contact_person_name], [field_contact_person_title]';
  $handler->display->display_options['fields']['field_contact_person_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_person_name']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Contact person email */
  $handler->display->display_options['fields']['field_contact_person_email']['id'] = 'field_contact_person_email';
  $handler->display->display_options['fields']['field_contact_person_email']['table'] = 'field_data_field_contact_person_email';
  $handler->display->display_options['fields']['field_contact_person_email']['field'] = 'field_contact_person_email';
  $handler->display->display_options['fields']['field_contact_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_person_email']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Contact person phone number */
  $handler->display->display_options['fields']['field_contact_phone_number']['id'] = 'field_contact_phone_number';
  $handler->display->display_options['fields']['field_contact_phone_number']['table'] = 'field_data_field_contact_phone_number';
  $handler->display->display_options['fields']['field_contact_phone_number']['field'] = 'field_contact_phone_number';
  $handler->display->display_options['fields']['field_contact_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone_number']['delta_offset'] = '0';
  /* Sort criterion: Sisältö: Otsikko */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'yritykset';
  $translatables['companies'] = array(
    t('Master'),
    t('Yritykset'),
    t('more'),
    t('Apply'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field-wrapper'),
    t('<a href="[field_website_url-value]">[field_website_url-title]</a>'),
    t('<h4>Ota Yhteyttä:</h4>'),
    t('[field_contact_person_name], [field_contact_person_title]'),
    t('Page'),
  );
  $export['companies'] = $view;

  return $export;
}
