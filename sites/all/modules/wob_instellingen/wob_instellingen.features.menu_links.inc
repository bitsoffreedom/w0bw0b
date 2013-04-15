<?php
/**
 * @file
 * wob_instellingen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wob_instellingen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:node/add/wob
  $menu_links['user-menu:node/add/wob'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/wob',
    'router_path' => 'node/add/wob',
    'link_title' => 'Nieuw verzoek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nieuw verzoek');


  return $menu_links;
}
