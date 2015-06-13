<?php
/**
 * @file
 * frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Yleinen: Kenttäryhmä */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_liftup_body',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'wrapper';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Kenttä: Sisältö: Liftup body */
  $handler->display->display_options['fields']['field_liftup_body']['id'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['table'] = 'field_data_field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['field'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_liftup_body']['element_class'] = 'body';
  $handler->display->display_options['fields']['field_liftup_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_body']['element_default_classes'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Liftup weight (field_liftup_weight) */
  $handler->display->display_options['sorts']['field_liftup_weight_value']['id'] = 'field_liftup_weight_value';
  $handler->display->display_options['sorts']['field_liftup_weight_value']['table'] = 'field_data_field_liftup_weight';
  $handler->display->display_options['sorts']['field_liftup_weight_value']['field'] = 'field_liftup_weight_value';
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  /* Suodatinkriteeri: Sisältö: Published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'frontpage';

  /* Display: Top bg */
  $handler = $view->new_display('block', 'Top bg', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Yleinen: Kenttäryhmä */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_liftup_body',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'wrapper';
  /* Kenttä: Sisältö: Liftup body */
  $handler->display->display_options['fields']['field_liftup_body']['id'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['table'] = 'field_data_field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['field'] = 'field_liftup_body';
  $handler->display->display_options['fields']['field_liftup_body']['label'] = '';
  $handler->display->display_options['fields']['field_liftup_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_liftup_body']['element_class'] = 'body';
  $handler->display->display_options['fields']['field_liftup_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liftup_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_liftup_body']['element_default_classes'] = FALSE;

  /* Display: Tapahtumat */
  $handler = $view->new_display('block', 'Tapahtumat', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>Tapahtumat</h4>
<span class="stripe"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'drupalfi_date_formats_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
 <a class="view-all" href="/tapahtumat">Katso Kaikki</a>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Lähetetty */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Uutiset */
  $handler = $view->new_display('block', 'Uutiset', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>Uutiset</h4>
<span class="stripe"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Lähetetty */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'drupalfi_date_formats_date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'drupalfi_date_formats_date_only';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
 <a class="view-all" href="/uutiset">Katso Kaikki</a>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Lähetetty */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['frontpage_view'] = array(
    t('Master'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Kenttäryhmä'),
    t('Page'),
    t('Top bg'),
    t('Tapahtumat'),
    t('<h4>Tapahtumat</h4>
<span class="stripe"></span>'),
    t('[title]
 <a class="view-all" href="/tapahtumat">Katso Kaikki</a>'),
    t('Uutiset'),
    t('<h4>Uutiset</h4>
<span class="stripe"></span>'),
    t('[title]
 <a class="view-all" href="/uutiset">Katso Kaikki</a>'),
  );
  $export['frontpage_view'] = $view;

  return $export;
}
