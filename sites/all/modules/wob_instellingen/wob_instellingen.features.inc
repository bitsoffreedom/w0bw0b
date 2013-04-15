<?php
/**
 * @file
 * wob_instellingen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wob_instellingen_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wob_instellingen_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wob_instellingen_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wob' => array(
      'name' => t('Wet openbaarheid van bestuur'),
      'base' => 'node_content',
      'description' => t('Verzoeken op grond van de Wet openbaarheid van bestuur.'),
      'has_title' => '1',
      'title_label' => t('Beleid'),
      'help' => '',
    ),
  );
  return $items;
}
