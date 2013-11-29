<?php
/**
 * @file
 * wob_instellingen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wob_instellingen_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appeal_wrapper|node|wob|form';
  $field_group->group_name = 'group_appeal_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_appeal';
  $field_group->data = array(
    'label' => 'Beroep wrapper',
    'weight' => '128',
    'children' => array(
      0 => 'field_appeal_sent_date',
      1 => 'field_appeal_received_date',
      2 => 'field_appeal_case_number',
      3 => 'field_appeal_completed',
      4 => 'field_appeal_court',
      5 => 'field_appeal_judgement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Beroep wrapper',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'no-display',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_appeal_wrapper|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appeal|node|wob|default';
  $field_group->group_name = 'group_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Beroep',
    'weight' => '5',
    'children' => array(
      0 => 'field_appeal_sent',
      1 => 'field_appeal_deadline',
      2 => 'field_appeal_sent_date',
      3 => 'field_appeal_received_date',
      4 => 'field_appeal_case_number',
      5 => 'field_appeal_completed',
      6 => 'field_appeal_court',
      7 => 'field_appeal_judgement',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_appeal|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_appeal|node|wob|form';
  $field_group->group_name = 'group_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Beroep',
    'weight' => '5',
    'children' => array(
      0 => 'field_appeal_sent',
      1 => 'field_appeal_deadline',
      2 => 'group_appeal_wrapper',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_appeal|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_tabs|node|wob|default';
  $field_group->group_name = 'group_info_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left';
  $field_group->data = array(
    'label' => 'Info tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_info_tabs|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_tabs|node|wob|form';
  $field_group->group_name = 'group_info_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_left';
  $field_group->data = array(
    'label' => 'Info tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_information',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_info_tabs|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|wob|default';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_tabs';
  $field_group->data = array(
    'label' => 'Informatie',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_law',
      2 => 'field_action_required_date',
      3 => 'field_organisation_term',
      4 => 'field_ending_reason',
      5 => 'field_current_phase',
      6 => 'field_request_id',
      7 => 'field_status_computed',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|wob|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_tabs';
  $field_group->data = array(
    'label' => 'Informatie',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_law',
      2 => 'field_status',
      3 => 'field_action_required_date',
      4 => 'field_organisation_term',
      5 => 'field_ending_reason',
      6 => 'field_current_phase',
      7 => 'field_request_id',
      8 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|wob|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_changelog',
      1 => 'group_info_tabs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'classes' => 'fivecol',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|wob|form';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_changelog',
      1 => 'group_info_tabs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'fivecol',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_addendum|node|wob|default';
  $field_group->group_name = 'group_objection_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_objection';
  $field_group->data = array(
    'label' => 'Verzoek aanvulling',
    'weight' => '12',
    'children' => array(
      0 => 'field_objection_date_addendum',
      1 => 'field_objection_date_addendum_2',
      2 => 'field_object_ommission_days',
      3 => 'field_objection_add_deadline',
      4 => 'field_objection_add_answer_signe',
      5 => 'field_objection_add_answer_sent',
      6 => 'field_objection_add_answer_recei',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_objection_addendum|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_addendum|node|wob|form';
  $field_group->group_name = 'group_objection_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_objection_wrapper';
  $field_group->data = array(
    'label' => 'Verzoek aanvulling',
    'weight' => '88',
    'children' => array(
      0 => 'field_objection_date_addendum',
      1 => 'field_objection_date_addendum_2',
      2 => 'field_object_ommission_days',
      3 => 'field_objection_add_deadline',
      4 => 'field_objection_add_answer_signe',
      5 => 'field_objection_add_answer_sent',
      6 => 'field_objection_add_answer_recei',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objection_addendum|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_adjourned|node|wob|default';
  $field_group->group_name = 'group_objection_adjourned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_objection';
  $field_group->data = array(
    'label' => 'Verdaging beslistermijn',
    'weight' => '14',
    'children' => array(
      0 => 'field_objection_adjourned_signed',
      1 => 'field_objection_adjourned_days',
      2 => 'field_objection_adjourned_sent',
      3 => 'field_objection_adjourned_receiv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_objection_adjourned|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_adjourned|node|wob|form';
  $field_group->group_name = 'group_objection_adjourned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_objection_wrapper';
  $field_group->data = array(
    'label' => 'Verdaging beslistermijn',
    'weight' => '90',
    'children' => array(
      0 => 'field_objection_adjourned_signed',
      1 => 'field_objection_adjourned_days',
      2 => 'field_objection_adjourned_sent',
      3 => 'field_objection_adjourned_receiv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Verdaging beslistermijn',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_objection_adjourned|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_appeal|node|wob|default';
  $field_group->group_name = 'group_objection_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_objection';
  $field_group->data = array(
    'label' => 'Beroep niet nemen beslissing',
    'weight' => '20',
    'children' => array(
      0 => 'field_objection_appeal_sent',
      1 => 'field_objection_appeal_received',
      2 => 'field_objection_appeal_case_nr',
      3 => 'field_objection_appeal_signed',
      4 => 'field_objection_appeal_court',
      5 => 'field_objection_appeal_judgement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_objection_appeal|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_appeal|node|wob|form';
  $field_group->group_name = 'group_objection_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_objection_wrapper';
  $field_group->data = array(
    'label' => 'Beroep niet nemen beslissing',
    'weight' => '96',
    'children' => array(
      0 => 'field_objection_appeal_sent',
      1 => 'field_objection_appeal_received',
      2 => 'field_objection_appeal_case_nr',
      3 => 'field_objection_appeal_signed',
      4 => 'field_objection_appeal_court',
      5 => 'field_objection_appeal_judgement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objection_appeal|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_notice|node|wob|default';
  $field_group->group_name = 'group_objection_notice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_objection';
  $field_group->data = array(
    'label' => 'Ingebreke gesteld',
    'weight' => '18',
    'children' => array(
      0 => 'field_objection_notice_sent_date',
      1 => 'field_objection_notice_received',
      2 => 'field_penalty_days',
      3 => 'field_objection_forfeitedpenalty',
      4 => 'field_objection_penalty_paid',
      5 => 'field_objection_notice_signed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_objection_notice|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_notice|node|wob|form';
  $field_group->group_name = 'group_objection_notice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_objection_wrapper';
  $field_group->data = array(
    'label' => 'Ingebreke gesteld',
    'weight' => '94',
    'children' => array(
      0 => 'field_objection_notice_sent_date',
      1 => 'field_objection_notice_received',
      2 => 'field_penalty_days',
      3 => 'field_objection_forfeitedpenalty',
      4 => 'field_objection_penalty_paid',
      5 => 'field_objection_notice_signed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objection_notice|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection_wrapper|node|wob|form';
  $field_group->group_name = 'group_objection_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_objection';
  $field_group->data = array(
    'label' => 'Bezwaar wrapper',
    'weight' => '83',
    'children' => array(
      0 => 'field_objection_adjourned',
      1 => 'field_objection_commission',
      2 => 'field_objection_coulance',
      3 => 'field_objection_notice_default',
      4 => 'field_objection_deadline_2',
      5 => 'field_objection_decision_date',
      6 => 'field_objection_remaining_days',
      7 => 'field_objection_date_sent',
      8 => 'field_objection_decision_sent',
      9 => 'field_objection_decision_receive',
      10 => 'field_objection_date_signed',
      11 => 'field_objection_date_received',
      12 => 'field_objection_addendum',
      13 => 'field_objection_appeal',
      14 => 'group_objection_addendum',
      15 => 'group_objection_adjourned',
      16 => 'group_objection_appeal',
      17 => 'group_objection_notice',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bezwaar wrapper',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'no-display',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_objection_wrapper|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection|node|wob|default';
  $field_group->group_name = 'group_objection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Bezwaar',
    'weight' => '3',
    'children' => array(
      0 => 'field_objection',
      1 => 'field_objection_adjourned',
      2 => 'field_objection_deadline_date',
      3 => 'field_objection_commission',
      4 => 'field_objection_coulance',
      5 => 'field_objection_notice_default',
      6 => 'field_objection_deadline_2',
      7 => 'field_objection_decision_date',
      8 => 'field_objection_remaining_days',
      9 => 'field_objection_date_sent',
      10 => 'field_objection_decision_sent',
      11 => 'field_objection_decision_receive',
      12 => 'field_objection_date_signed',
      13 => 'field_objection_date_received',
      14 => 'field_objection_addendum',
      15 => 'field_objection_appeal',
      16 => 'group_objection_addendum',
      17 => 'group_objection_adjourned',
      18 => 'group_objection_appeal',
      19 => 'group_objection_notice',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objection|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objection|node|wob|form';
  $field_group->group_name = 'group_objection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Bezwaar',
    'weight' => '3',
    'children' => array(
      0 => 'field_objection',
      1 => 'field_objection_deadline_date',
      2 => 'group_objection_wrapper',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objection|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opschorting_beslissing|node|wob|default';
  $field_group->group_name = 'group_opschorting_beslissing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Opschorting beslissing',
    'weight' => '34',
    'children' => array(
      0 => 'field_request_suspension',
      1 => 'field_suspension_signed',
      2 => 'field_suspension_notice_received',
      3 => 'field_susp_third_party_sent',
      4 => 'field_susp_third_party_deadline',
      5 => 'field_susp_third_party_received',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_opschorting_beslissing|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_addendum|node|wob|default';
  $field_group->group_name = 'group_request_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Verzoek aanvulling',
    'weight' => '28',
    'children' => array(
      0 => 'field_request_addendum_signed',
      1 => 'field_request_addendum_received',
      2 => 'field_request_add_answer_sent',
      3 => 'field_request_addendum_days',
      4 => 'field_request_addendum_deadline',
      5 => 'field_request_add_answer_receive',
      6 => 'field_request_add_answer_signed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_request_addendum|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_addendum|node|wob|form';
  $field_group->group_name = 'group_request_addendum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Verzoek aanvulling',
    'weight' => '54',
    'children' => array(
      0 => 'field_request_addendum_signed',
      1 => 'field_request_addendum_received',
      2 => 'field_request_add_answer_sent',
      3 => 'field_request_addendum_days',
      4 => 'field_request_addendum_deadline',
      5 => 'field_request_add_answer_receive',
      6 => 'field_request_add_answer_signed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request_addendum|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_adjourned|node|wob|default';
  $field_group->group_name = 'group_request_adjourned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Verdaging beslissing',
    'weight' => '30',
    'children' => array(
      0 => 'field_request_adjourned_signed',
      1 => 'field_request_adjourned_days',
      2 => 'field_request_adjourned_sent',
      3 => 'field_request_adjourned_received',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_request_adjourned|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_adjourned|node|wob|form';
  $field_group->group_name = 'group_request_adjourned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Verdaging beslissing',
    'weight' => '56',
    'children' => array(
      0 => 'field_request_adjourned_signed',
      1 => 'field_request_adjourned_days',
      2 => 'field_request_adjourned_sent',
      3 => 'field_request_adjourned_received',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Verdaging beslissing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_request_adjourned|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_appeal|node|wob|default';
  $field_group->group_name = 'group_request_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Beroep niet tijdig nemen beslissing',
    'weight' => '43',
    'children' => array(
      0 => 'field_request_appeal_sent',
      1 => 'field_request_appeal_received',
      2 => 'field_request_appeal_case_number',
      3 => 'field_request_appeal_signed',
      4 => 'field_request_appeal_court',
      5 => 'field_request_appeal_judgement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_request_appeal|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_appeal|node|wob|form';
  $field_group->group_name = 'group_request_appeal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Beroep niet nemen beslissing',
    'weight' => '64',
    'children' => array(
      0 => 'field_request_appeal_sent',
      1 => 'field_request_appeal_received',
      2 => 'field_request_appeal_case_number',
      3 => 'field_request_appeal_signed',
      4 => 'field_request_appeal_court',
      5 => 'field_request_appeal_judgement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request_appeal|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_notice|node|wob|default';
  $field_group->group_name = 'group_request_notice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Ingebreke gesteld',
    'weight' => '32',
    'children' => array(
      0 => 'field_request_notice_sent',
      1 => 'field_request_notice_received',
      2 => 'field_request_forfeited_penalty',
      3 => 'field_request_penalty_paid',
      4 => 'field_request_notice_singed',
      5 => 'field_request_penalty_days_calc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_request_notice|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_notice|node|wob|form';
  $field_group->group_name = 'group_request_notice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Ingebreke gesteld',
    'weight' => '58',
    'children' => array(
      0 => 'field_request_notice_sent',
      1 => 'field_request_notice_received',
      2 => 'field_request_forfeited_penalty',
      3 => 'field_request_penalty_days_int',
      4 => 'field_request_penalty_paid',
      5 => 'field_request_notice_singed',
      6 => 'field_request_penalty_days_calc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request_notice|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_suspension|node|wob|form';
  $field_group->group_name = 'group_request_suspension';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_request';
  $field_group->data = array(
    'label' => 'Opschorting beslissing',
    'weight' => '61',
    'children' => array(
      0 => 'field_request_suspension',
      1 => 'field_suspension_signed',
      2 => 'field_suspension_notice_received',
      3 => 'field_susp_third_party_sent',
      4 => 'field_susp_third_party_deadline',
      5 => 'field_susp_third_party_received',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request_suspension|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request|node|wob|default';
  $field_group->group_name = 'group_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Verzoek',
    'weight' => '2',
    'children' => array(
      0 => 'field_request_date_sent',
      1 => 'field_request_date_received',
      2 => 'field_request_adjourned',
      3 => 'field_request_notice_of_default',
      4 => 'field_request_leniency',
      5 => 'field_request_decision',
      6 => 'field_request_decision_deadline2',
      7 => 'field_request_decision_sent',
      8 => 'field_request_decision_received',
      9 => 'field_request_date_signed',
      10 => 'field_request_appeal',
      11 => 'field_request_addendum',
      12 => 'field_request_days_left_calc',
      13 => 'field_request_suspension_enabled',
      14 => 'group_request_addendum',
      15 => 'group_request_adjourned',
      16 => 'group_request_appeal',
      17 => 'group_request_notice',
      18 => 'group_opschorting_beslissing',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request|node|wob|form';
  $field_group->group_name = 'group_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Verzoek',
    'weight' => '2',
    'children' => array(
      0 => 'field_request_date_sent',
      1 => 'field_request_date_received',
      2 => 'field_request_adjourned',
      3 => 'field_request_notice_of_default',
      4 => 'field_request_leniency',
      5 => 'field_request_decision',
      6 => 'field_request_days_left_int',
      7 => 'field_request_decision_deadline2',
      8 => 'field_request_decision_sent',
      9 => 'field_request_decision_received',
      10 => 'field_request_date_signed',
      11 => 'field_request_appeal',
      12 => 'field_request_addendum',
      13 => 'field_request_days_left_calc',
      14 => 'field_request_suspension_enabled',
      15 => 'group_request_addendum',
      16 => 'group_request_adjourned',
      17 => 'group_request_appeal',
      18 => 'group_request_notice',
      19 => 'group_request_suspension',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_request|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|wob|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '1',
    'children' => array(
      0 => 'group_tabs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'classes' => 'sevencol last clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|wob|form';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '1',
    'children' => array(
      0 => 'group_tabs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'sevencol last clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statistics|node|wob|default';
  $field_group->group_name = 'group_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Statistiek',
    'weight' => '6',
    'children' => array(
      0 => 'field_stats_appeal_duration',
      1 => 'field_stats_objection_duration',
      2 => 'field_stats_penalty_calculated',
      3 => 'field_stats_penalty_received',
      4 => 'field_stats_request_duration',
      5 => 'field_appeal_request_duration_co',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_statistics|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statistics|node|wob|form';
  $field_group->group_name = 'group_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Statistiek',
    'weight' => '6',
    'children' => array(
      0 => 'field_appeal_request_duration',
      1 => 'field_stats_appeal_duration',
      2 => 'field_stats_objection_duration',
      3 => 'field_stats_penalty_calculated',
      4 => 'field_stats_penalty_received',
      5 => 'field_stats_request_duration',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_statistics|node|wob|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|wob|default';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_appeal',
      1 => 'group_objection',
      2 => 'group_request',
      3 => 'group_statistics',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|wob|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|wob|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wob';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_appeal',
      1 => 'group_objection',
      2 => 'group_request',
      3 => 'group_statistics',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|wob|form'] = $field_group;

  return $export;
}
