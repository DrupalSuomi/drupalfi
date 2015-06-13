<?php
/**
 * @file
 * event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
