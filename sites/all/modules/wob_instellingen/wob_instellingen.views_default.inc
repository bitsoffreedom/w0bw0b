<?php
/**
 * @file
 * wob_instellingen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wob_instellingen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wob_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WOB overzicht';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overzicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_request_id' => 'field_request_id',
    'field_action_required_date' => 'field_action_required_date',
    'title' => 'title',
    'field_organisation_term' => 'field_organisation_term',
    'field_current_phase' => 'field_current_phase',
    'field_status_computed' => 'field_status_computed',
    'field_appeal_request_duration' => 'field_appeal_request_duration',
    'field_appeal_request_duration_co' => 'field_appeal_request_duration_co',
  );
  $handler->display->display_options['style_options']['default'] = 'field_action_required_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_request_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_action_required_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_term' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_phase' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_computed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_appeal_request_duration' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_appeal_request_duration_co' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Veld: Inhoud: Pad */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Veld: Inhoud: Kenmerk */
  $handler->display->display_options['fields']['field_request_id']['id'] = 'field_request_id';
  $handler->display->display_options['fields']['field_request_id']['table'] = 'field_data_field_request_id';
  $handler->display->display_options['fields']['field_request_id']['field'] = 'field_request_id';
  $handler->display->display_options['fields']['field_request_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_request_id']['alter']['path'] = '[path]';
  /* Veld: Inhoud: Actie in */
  $handler->display->display_options['fields']['field_action_required_date']['id'] = 'field_action_required_date';
  $handler->display->display_options['fields']['field_action_required_date']['table'] = 'field_data_field_action_required_date';
  $handler->display->display_options['fields']['field_action_required_date']['field'] = 'field_action_required_date';
  $handler->display->display_options['fields']['field_action_required_date']['type'] = 'custom_formatters_amount_of_days_date_future_';
  $handler->display->display_options['fields']['field_action_required_date']['settings'] = array(
    'interval' => '1',
    'interval_display' => 'raw time hence',
  );
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Beleid';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Organisatie */
  $handler->display->display_options['fields']['field_organisation_term']['id'] = 'field_organisation_term';
  $handler->display->display_options['fields']['field_organisation_term']['table'] = 'field_data_field_organisation_term';
  $handler->display->display_options['fields']['field_organisation_term']['field'] = 'field_organisation_term';
  $handler->display->display_options['fields']['field_organisation_term']['type'] = 'taxonomy_term_reference_link';
  /* Veld: Inhoud: Fase */
  $handler->display->display_options['fields']['field_current_phase']['id'] = 'field_current_phase';
  $handler->display->display_options['fields']['field_current_phase']['table'] = 'field_data_field_current_phase';
  $handler->display->display_options['fields']['field_current_phase']['field'] = 'field_current_phase';
  /* Veld: Inhoud: Status */
  $handler->display->display_options['fields']['field_status_computed']['id'] = 'field_status_computed';
  $handler->display->display_options['fields']['field_status_computed']['table'] = 'field_data_field_status_computed';
  $handler->display->display_options['fields']['field_status_computed']['field'] = 'field_status_computed';
  /* Veld: Inhoud: Duur alle fasen */
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['id'] = 'field_appeal_request_duration_co';
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['table'] = 'field_data_field_appeal_request_duration_co';
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['field'] = 'field_appeal_request_duration_co';
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['label'] = 'Looptijd';
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['type'] = 'custom_formatters_clone_of_amount_of_days_left_computed_int_';
  $handler->display->display_options['fields']['field_appeal_request_duration_co']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => '',
    'element_label_colon' => 0,
    'exclude' => 0,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 0,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 0,
      'ellipsis' => 0,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'hide_alter_empty' => 0,
    'click_sort_column' => 'value',
    'type' => '',
    'field_api_classes' => 0,
  );
  /* Sorteercriterium: Inhoud: Actie in (field_action_required_date) */
  $handler->display->display_options['sorts']['field_action_required_date_value']['id'] = 'field_action_required_date_value';
  $handler->display->display_options['sorts']['field_action_required_date_value']['table'] = 'field_data_field_action_required_date';
  $handler->display->display_options['sorts']['field_action_required_date_value']['field'] = 'field_action_required_date_value';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'wob' => 'wob',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtercriterium: Inhoud: Status (field_status_computed) */
  $handler->display->display_options['filters']['field_status_computed_value']['id'] = 'field_status_computed_value';
  $handler->display->display_options['filters']['field_status_computed_value']['table'] = 'field_data_field_status_computed';
  $handler->display->display_options['filters']['field_status_computed_value']['field'] = 'field_status_computed_value';
  $handler->display->display_options['filters']['field_status_computed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_computed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_computed_value']['expose']['operator_id'] = 'field_status_computed_value_op';
  $handler->display->display_options['filters']['field_status_computed_value']['expose']['label'] = 'Status (field_status_computed)';
  $handler->display->display_options['filters']['field_status_computed_value']['expose']['operator'] = 'field_status_computed_value_op';
  $handler->display->display_options['filters']['field_status_computed_value']['expose']['identifier'] = 'field_status_computed_value';
  $handler->display->display_options['filters']['field_status_computed_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_computed_value']['group_info']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_computed_value']['group_info']['identifier'] = 'field_status_computed_value';
  $handler->display->display_options['filters']['field_status_computed_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_status_computed_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Open',
      'operator' => '=',
      'value' => 'open',
    ),
    2 => array(
      'title' => 'Afgerond',
      'operator' => '=',
      'value' => 'afgerond',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filtercriterium: Inhoud: Organisatie (field_organisation_term) */
  $handler->display->display_options['filters']['field_organisation_term_tid']['id'] = 'field_organisation_term_tid';
  $handler->display->display_options['filters']['field_organisation_term_tid']['table'] = 'field_data_field_organisation_term';
  $handler->display->display_options['filters']['field_organisation_term_tid']['field'] = 'field_organisation_term_tid';
  $handler->display->display_options['filters']['field_organisation_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_term_tid']['expose']['operator_id'] = 'field_organisation_term_tid_op';
  $handler->display->display_options['filters']['field_organisation_term_tid']['expose']['label'] = 'Organisatie';
  $handler->display->display_options['filters']['field_organisation_term_tid']['expose']['operator'] = 'field_organisation_term_tid_op';
  $handler->display->display_options['filters']['field_organisation_term_tid']['expose']['identifier'] = 'field_organisation_term_tid';
  $handler->display->display_options['filters']['field_organisation_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_organisation_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organisation_term_tid']['vocabulary'] = 'organisation';
  /* Filtercriterium: Inhoud: Fase (field_current_phase) */
  $handler->display->display_options['filters']['field_current_phase_value']['id'] = 'field_current_phase_value';
  $handler->display->display_options['filters']['field_current_phase_value']['table'] = 'field_data_field_current_phase';
  $handler->display->display_options['filters']['field_current_phase_value']['field'] = 'field_current_phase_value';
  $handler->display->display_options['filters']['field_current_phase_value']['group'] = 1;
  $handler->display->display_options['filters']['field_current_phase_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_phase_value']['expose']['operator_id'] = 'field_current_phase_value_op';
  $handler->display->display_options['filters']['field_current_phase_value']['expose']['label'] = 'Fase';
  $handler->display->display_options['filters']['field_current_phase_value']['expose']['operator'] = 'field_current_phase_value_op';
  $handler->display->display_options['filters']['field_current_phase_value']['expose']['identifier'] = 'field_current_phase_value';
  $handler->display->display_options['filters']['field_current_phase_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'overzicht';
  $translatables['wob_overview'] = array(
    t('Master'),
    t('Overzicht'),
    t('meer'),
    t('Toepassen'),
    t('Opnieuw instellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Kenmerk'),
    t('Actie in'),
    t('Beleid'),
    t('Organisatie'),
    t('Fase'),
    t('Status'),
    t('Looptijd'),
    t('Status (field_status_computed)'),
    t('Page'),
  );
  $export['wob_overview'] = $view;

  return $export;
}
