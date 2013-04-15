<?php
/**
 * @file
 * wob_instellingen.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function wob_instellingen_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_text'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_text',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wob_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wob_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wob_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'wob_theme',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
