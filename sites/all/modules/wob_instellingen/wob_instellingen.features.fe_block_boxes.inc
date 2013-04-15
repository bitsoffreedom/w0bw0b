<?php
/**
 * @file
 * wob_instellingen.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function wob_instellingen_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer text';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_text';
  $fe_block_boxes->body = 'w0bw0b! is ontwikkeld door <a href=\'https://www.bof.nl\'>Bits of Freedom</a> en kan gedownload worden van <a href=\'https://github.com/bitsoffreedom/w0bw0b\'>GitHub</a>.';

  $export['footer_text'] = $fe_block_boxes;

  return $export;
}
