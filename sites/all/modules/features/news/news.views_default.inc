<?php
/**
 * @file
 * news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Uutiset';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'drupalfi_date_formats_date_only';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Sisältö: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'news' => 'news',
  );

  /* Display: Uutiset block */
  $handler = $view->new_display('block', 'Uutiset block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Katso lisää';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Sisältö: News tags (field_news_tags) */
  $handler->display->display_options['filters']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['filters']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_news_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['operator_id'] = 'field_news_tags_tid_op';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['label'] = 'News tags (field_news_tags)';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['operator'] = 'field_news_tags_tid_op';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['identifier'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_news_tags_tid']['vocabulary'] = 'news_tags';

  /* Display: Uutiset page */
  $handler = $view->new_display('page', 'Uutiset page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'drupalfi_date_formats_date_only';
  /* Kenttä: Sisältö: News body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'uutiset';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Uutiset';
  $handler->display->display_options['menu']['description'] = 'Uutiset';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Asiakirjat page */
  $handler = $view->new_display('page', 'Asiakirjat page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Asiakirjat';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'drupalfi_date_formats_date_only';
  /* Kenttä: Sisältö: News body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Sisältö: News tags (field_news_tags) */
  $handler->display->display_options['filters']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['filters']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['operator_id'] = 'field_news_tags_tid_op';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['label'] = 'News tags (field_news_tags)';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['operator'] = 'field_news_tags_tid_op';
  $handler->display->display_options['filters']['field_news_tags_tid']['expose']['identifier'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['vocabulary'] = 'news_tags';
  $handler->display->display_options['path'] = 'asiakirjat';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Asiakirjat';
  $handler->display->display_options['menu']['description'] = 'Asiakirjat';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'menu-footer-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['news'] = array(
    t('Master'),
    t('Uutiset'),
    t('more'),
    t('Apply'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Uutiset block'),
    t('Katso lisää'),
    t('News tags (field_news_tags)'),
    t('Uutiset page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ edellinen'),
    t('seuraava ›'),
    t('viimeinen »'),
    t('Asiakirjat page'),
    t('Asiakirjat'),
  );
  $export['news'] = $view;

  return $export;
}
