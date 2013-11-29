<?php
/**
 * @file
 * wob_instellingen.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function wob_instellingen_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'amount_of_days_date_future_';
  $formatter->label = 'Amount of days (date, future)';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'date, datestamp, datetime';
  $formatter->code = '$now = new DateObject();
$date = new DateObject($variables[\'#items\'][0][\'value\']);

$multiply = 1;
if ($now > $date)
  $multiply = -1;

$days = $multiply * $date->difference($now, \'days\');
//if ($days == 0)
//  return "";

$display = format_plural($days, "@count day", "@count days");
if ($days >= 0)
  return \'<span class="on-time">\' . $display . \'</span>\';
else
  return \'<span class="overdue">\' . $display . \'</span>\';';
  $formatter->fapi = '';
  $export['amount_of_days_date_future_'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'amount_of_days_left_computed_int_';
  $formatter->label = 'Amount of days left (computed int)';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'computed';
  $formatter->code = '$days = $variables[\'#items\'][0][\'value\'];
if ($days >= 0)
  return \'<span class="on-time">\' . format_plural(abs($days), "@count day left", "@count days left") . \'</span>\';
else
  return \'<span class="overdue">\' . format_plural(abs($days), "@count day too late", "@count days too late") . \'</span>\';';
  $formatter->fapi = '';
  $export['amount_of_days_left_computed_int_'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'amount_of_days_left_int_';
  $formatter->label = 'Amount of days left (int)';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'number_integer';
  $formatter->code = '$days = $variables[\'#items\'][0][\'value\'];
if ($days >= 0)
  return \'<span class="on-time">\' . format_plural(abs($days), "@count day left", "@count days left") . \'</span>\';
else
  return \'<span class="overdue">\' . format_plural(abs($days), "@count day too late", "@count days too late") . \'</span>\';';
  $formatter->fapi = '';
  $export['amount_of_days_left_int_'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'clone_of_amount_of_days_left_computed_int_';
  $formatter->label = 'Amount of days (computed int)';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'computed';
  $formatter->code = '$days = $variables[\'#items\'][0][\'value\'];
return \'<span>\' . format_plural(abs($days), "@count day", "@count days") . \'</span>\';';
  $formatter->fapi = '';
  $export['clone_of_amount_of_days_left_computed_int_'] = $formatter;

  return $export;
}
