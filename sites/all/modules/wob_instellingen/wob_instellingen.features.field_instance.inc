<?php
/**
 * @file
 * wob_instellingen.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wob_instellingen_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_page-comment_body'
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_wob-comment_body'
  $field_instances['comment-comment_node_wob-comment_body'] = array(
    'bundle' => 'comment_node_wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_changelog-field_description'
  $field_instances['field_collection_item-field_changelog-field_description'] = array(
    'bundle' => 'field_changelog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_changelog-field_timestamp'
  $field_instances['field_collection_item-field_changelog-field_timestamp'] = array(
    'bundle' => 'field_changelog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_timestamp',
    'label' => 'Timestamp',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-wob-body'
  $field_instances['node-wob-body'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De verzoeker vermeldt bij zijn verzoek de bestuurlijke aangelegenheid of het daarop betrekking hebbend document, waarover hij informatie wenst te ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel3">art. 3, lid 2 Wob</a>] Een bestuurlijke aangelegenheid is "een aangelegenheid die betrekking heeft op beleid van een bestuursorgaan, daaronder begrepen de voorbereiding en de uitvoering ervan." [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel1">art. 1, onder b Wob</a>] Zie ook de <a href="https://rejo.zenger.nl/files/Memorie-van-toelichting-Wet-openbaarheid-van-bestuur.pdf">Memorie van Toelichting</a>, (o.a. pag. 21-22)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Omschrijving',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-wob-field_action_required_date'
  $field_instances['node-wob-field_action_required_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_amount_of_days_date_future_',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_action_required_date',
    'label' => 'Actie in',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_case_number'
  $field_instances['node-wob-field_appeal_case_number'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_case_number',
    'label' => 'Beroep zaaknummer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_completed'
  $field_instances['node-wob-field_appeal_completed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_completed',
    'label' => 'Beroep afgerond',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_court'
  $field_instances['node-wob-field_appeal_court'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_court',
    'label' => 'Rechtbank',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_deadline'
  $field_instances['node-wob-field_appeal_deadline'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De termijn voor het indienen van een bezwaar- of beroepschrift bedraagt zes weken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel67/">artikel 6:7 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_deadline',
    'label' => 'Deadline beroepschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_duration'
  $field_instances['node-wob-field_appeal_duration'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_duration',
    'label' => 'Duur fase bezwaar',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_judgement'
  $field_instances['node-wob-field_appeal_judgement'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_judgement',
    'label' => 'Uitspraak rechter',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_received_date'
  $field_instances['node-wob-field_appeal_received_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_received_date',
    'label' => 'Ontvangstdatum beroep',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_request_duration'
  $field_instances['node-wob-field_appeal_request_duration'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_request_duration',
    'label' => 'Duur alle fasen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_request_duration_co'
  $field_instances['node-wob-field_appeal_request_duration_co'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_amount_of_days_left_computed_int_',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_request_duration_co',
    'label' => 'Duur alle fasen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_sent'
  $field_instances['node-wob-field_appeal_sent'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Het instellen van administratief beroep geschiedt door het indienen van een beroepschrift bij het beroepsorgaan. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel64/">artikel 6:4, lid 2 Awb</a>] Het [beroepschrift] wordt ondertekend en bevat ten minste: a) de naam en het adres van de indiener; b) de dagtekening; c) een omschrijving van het besluit waartegen het bezwaar of beroep is gericht; d) de gronden van het bezwaar of beroep. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 1 Awb</a>] Bij het beroepschrift wordt zo mogelijk een afschrift van het besluit waarop het geschil betrekking heeft, overgelegd. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 2 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_sent',
    'label' => 'Beroep aangetekend',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-wob-field_appeal_sent_date'
  $field_instances['node-wob-field_appeal_sent_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_appeal_sent_date',
    'label' => 'Dagtekening beroep',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'node-wob-field_changelog'
  $field_instances['node-wob-field_changelog'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_changelog',
    'label' => 'Notities',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-wob-field_current_phase'
  $field_instances['node-wob-field_current_phase'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_current_phase',
    'label' => 'Fase',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-wob-field_ending_reason'
  $field_instances['node-wob-field_ending_reason'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ending_reason',
    'label' => 'Reden beëindiging',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-wob-field_law'
  $field_instances['node-wob-field_law'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_law',
    'label' => 'Wetsvorm',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-wob-field_object_ommission_days'
  $field_instances['node-wob-field_object_ommission_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De termijn wordt opgeschort gerekend vanaf de dag na die waarop de indiener is verzocht een verzuim als bedoeld in artikel 6:6 te herstellen, tot de dag waarop het verzuim is hersteld of de daarvoor gestelde termijn ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_object_ommission_days',
    'label' => 'Aantal dagen herstel verzuim',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection'
  $field_instances['node-wob-field_objection'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Het maken van bezwaar geschiedt door het indienen van een bezwaarschrift bij het bestuursorgaan dat het besluit heeft genomen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel64/">artikel 6:4 Awb</a>] Het [bezwaarschrift] wordt ondertekend en bevat ten minste: a) de naam en het adres van de indiener; b) de dagtekening; c) een omschrijving van het besluit waartegen het bezwaar of beroep is gericht; d) de gronden van het bezwaar of beroep. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 1 Awb</a>] ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection',
    'label' => 'Bezwaar aangetekend',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 82,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_add_answer_recei'
  $field_instances['node-wob-field_objection_add_answer_recei'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_add_answer_recei',
    'label' => 'Ontvangstdatum aanvulling',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 91,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_add_answer_sent'
  $field_instances['node-wob-field_objection_add_answer_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_add_answer_sent',
    'label' => 'Verzenddatum aanvulling',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 90,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_add_answer_signe'
  $field_instances['node-wob-field_objection_add_answer_signe'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_add_answer_signe',
    'label' => 'Dagtekening aanvulling',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_add_deadline'
  $field_instances['node-wob-field_objection_add_deadline'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_add_deadline',
    'label' => 'Deadline aanvulling',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 88,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_addendum'
  $field_instances['node-wob-field_objection_addendum'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_addendum',
    'label' => 'Verzoek aanvulling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_adjourned'
  $field_instances['node-wob-field_objection_adjourned'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Het bestuursorgaan kan de beslissing voor ten hoogste zes weken verdagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 3 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_adjourned',
    'label' => 'Verdaging beslistermijn',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 89,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_adjourned_days'
  $field_instances['node-wob-field_objection_adjourned_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_adjourned_days',
    'label' => 'Aantal dagen verdaging',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_adjourned_receiv'
  $field_instances['node-wob-field_objection_adjourned_receiv'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_adjourned_receiv',
    'label' => 'Ontvangstdatum verdaging',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 94,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_adjourned_sent'
  $field_instances['node-wob-field_objection_adjourned_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_adjourned_sent',
    'label' => 'Verzenddatum verdaging',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 93,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_adjourned_signed'
  $field_instances['node-wob-field_objection_adjourned_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_adjourned_signed',
    'label' => 'Dagtekening verdaging',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal'
  $field_instances['node-wob-field_objection_appeal'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal',
    'label' => 'Beroep niet nemen beslissing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_case_nr'
  $field_instances['node-wob-field_objection_appeal_case_nr'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_case_nr',
    'label' => 'Zaaknummer beroep',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 98,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_court'
  $field_instances['node-wob-field_objection_appeal_court'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_court',
    'label' => 'Rechtbank',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 96,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_judgement'
  $field_instances['node-wob-field_objection_appeal_judgement'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_judgement',
    'label' => 'Uitspraak rechter',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_received'
  $field_instances['node-wob-field_objection_appeal_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_received',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 95,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_sent'
  $field_instances['node-wob-field_objection_appeal_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Voor de toepassing van wettelijke voorschriften over bezwaar en beroep worden met een besluit gelijkgesteld de schriftelijke weigering een besluit te nemen, en het niet tijdig nemen van een besluit. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling61/Artikel62/">artikel 6:2 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_sent',
    'label' => 'Verzenddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 94,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_appeal_signed'
  $field_instances['node-wob-field_objection_appeal_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_appeal_signed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 93,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_commission'
  $field_instances['node-wob-field_objection_commission'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '[V]an toepassing indien ten behoeve van de beslissing op het bezwaar een adviescommissie is ingesteld die bestaat uit een voorzitter en ten minste twee leden,  waarvan de voorzitter geen deel uitmaakt van en niet werkzaam is onder verantwoordelijkheid van het bestuursorgaan en die voldoet aan eventueel bij wettelijk voorschrift gestelde andere eisen. Indien een commissie over het bezwaar zal adviseren, deelt het bestuursorgaan dit zo spoedig mogelijk mede aan de indiener van het bezwaarschrift. [...] [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel713/">artikel 7:13 Awb</a>] Het bestuursorgaan beslist binnen zes weken of – indien een commissie als bedoeld in artikel 7:13 is ingesteld – binnen twaalf weken, gerekend vanaf de dag na die waarop de termijn voor het indienen van het bezwaarschrift is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 1 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_objection_commission',
    'label' => 'Adviescommissie ingesteld',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 91,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_coulance'
  $field_instances['node-wob-field_objection_coulance'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Verder uitstel is mogelijk voor zover alle belanghebbenden daarmee instemmen, de indiener van het bezwaarschrift daarmee instemt en andere belanghebbenden daardoor niet in hun belangen kunnen worden geschaad, of [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 4 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_coulance',
    'label' => 'Extra uitstel',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 92,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_date_addendum'
  $field_instances['node-wob-field_objection_date_addendum'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Het bezwaar of beroep kan niet-ontvankelijk worden verklaard [...] mits de indiener de gelegenheid heeft gehad het verzuim te herstellen binnen een hem daartoe gestelde termijn. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel66/">artikel 6:6 Awb</a>] De termijn wordt opgeschort gerekend vanaf de dag na die waarop de indiener is verzocht een verzuim als bedoeld in artikel 6:6 te herstellen, tot de dag waarop het verzuim is hersteld of de daarvoor gestelde termijn ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_date_addendum',
    'label' => 'Dagtekening verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_date_addendum_2'
  $field_instances['node-wob-field_objection_date_addendum_2'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De termijn wordt opgeschort gerekend vanaf de dag na die waarop de indiener is verzocht een verzuim als bedoeld in artikel 6:6 te herstellen, tot de dag waarop het verzuim is hersteld of de daarvoor gestelde termijn ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_date_addendum_2',
    'label' => 'Ontvangstdatum verzoek aanvulling',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 87,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_date_received'
  $field_instances['node-wob-field_objection_date_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_date_received',
    'label' => 'Ontvangstdatum bezwaarschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_date_sent'
  $field_instances['node-wob-field_objection_date_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_date_sent',
    'label' => 'Verzenddatum bezwaarschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_date_signed'
  $field_instances['node-wob-field_objection_date_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_date_signed',
    'label' => 'Dagtekening bezwaarschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_deadline_2'
  $field_instances['node-wob-field_objection_deadline_2'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_deadline_2',
    'label' => 'Deadline voor beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_deadline_date'
  $field_instances['node-wob-field_objection_deadline_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De termijn voor het indienen van een bezwaarschrift bedraagt zes weken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel67/">art. 6:7 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_deadline_date',
    'label' => 'Deadline aantekenen bezwaar',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 81,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_decision_date'
  $field_instances['node-wob-field_objection_decision_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_decision_date',
    'label' => 'Dagtekening beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 99,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_decision_receive'
  $field_instances['node-wob-field_objection_decision_receive'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_decision_receive',
    'label' => 'Ontvangstdatum beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_decision_sent'
  $field_instances['node-wob-field_objection_decision_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_decision_sent',
    'label' => 'Verzenddatum beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_forfeitedpenalty'
  $field_instances['node-wob-field_objection_forfeitedpenalty'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. De dwangsom bedraagt de eerste veertien dagen € 20 per dag, de daaropvolgende veertien dagen € 30 per dag en de overige dagen € 40 per dag. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_forfeitedpenalty',
    'label' => 'Berekende dwangsom',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_notice_default'
  $field_instances['node-wob-field_objection_notice_default'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>]  De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_notice_default',
    'label' => 'In gebreke gesteld',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 93,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_notice_received'
  $field_instances['node-wob-field_objection_notice_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_notice_received',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_notice_sent_date'
  $field_instances['node-wob-field_objection_notice_sent_date'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_notice_sent_date',
    'label' => 'Verzenddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_notice_signed'
  $field_instances['node-wob-field_objection_notice_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_notice_signed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_penalty_days_cal'
  $field_instances['node-wob-field_objection_penalty_days_cal'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_penalty_days_cal',
    'label' => 'Aantal dwangsom dagen',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_penalty_paid'
  $field_instances['node-wob-field_objection_penalty_paid'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_penalty_paid',
    'label' => 'Betaalde dwangsom',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'node-wob-field_objection_remaining_days'
  $field_instances['node-wob-field_objection_remaining_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_amount_of_days_left_int_',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_objection_remaining_days',
    'label' => 'Aantal resterende dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 98,
    ),
  );

  // Exported field_instance: 'node-wob-field_organisation_term'
  $field_instances['node-wob-field_organisation_term'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organisation_term',
    'label' => 'Organisatie',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-wob-field_penalty_days'
  $field_instances['node-wob-field_penalty_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom voor elke dag dat het in gebreke is, doch voor ten hoogste 42 dagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>]  De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_penalty_days',
    'label' => 'Aantal dwangsom dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'dag|dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_add_answer_receive'
  $field_instances['node-wob-field_request_add_answer_receive'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Datum waarop de aanvulling op het verzoek is ontvangen door het bestuursorgaan.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_add_answer_receive',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_add_answer_sent'
  $field_instances['node-wob-field_request_add_answer_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Datum waarop het verzoek aan het bestuursorgaan is verzonden.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_add_answer_sent',
    'label' => 'Verzenddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_add_answer_signed'
  $field_instances['node-wob-field_request_add_answer_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Dagtekening van de aanvulling.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_add_answer_signed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_addendum'
  $field_instances['node-wob-field_request_addendum'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_addendum',
    'label' => 'Verzoek aanvulling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_addendum_days'
  $field_instances['node-wob-field_request_addendum_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De termijn voor het geven van een beschikking wordt opgeschort met ingang van de dag na die waarop het bestuursorgaan: de aanvrager krachtens artikel 4:5 uitnodigt de aanvraag aan te vullen, tot de dag waarop de aanvraag is aangevuld of de daarvoor gestelde termijn ongebruikt is verstreken [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4131/Artikel415/">artikel 4:15 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_addendum_days',
    'label' => 'Aantal dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_addendum_deadline'
  $field_instances['node-wob-field_request_addendum_deadline'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De uiterste datum waarop het bestuursorgaan de aanvulling op het verzoek moet hebben ontvangen.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_addendum_deadline',
    'label' => 'Deadline',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_addendum_received'
  $field_instances['node-wob-field_request_addendum_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De datum waarop het verzoek om een aanvulling is ontvangen.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_addendum_received',
    'label' => 'Ontvangstdatum verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_addendum_signed'
  $field_instances['node-wob-field_request_addendum_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De dagtekening van het verzoek om een aanvulling.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_addendum_signed',
    'label' => 'Dagtekening verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_adjourned'
  $field_instances['node-wob-field_request_adjourned'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Het bestuursorgaan kan de beslissing voor ten hoogste vier weken verdagen. Van de verdaging wordt voor de afloop van de eerste termijn schriftelijk gemotiveerd mededeling gedaan aan de verzoeker. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 2, Wob</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_adjourned',
    'label' => 'Verdaging beslissing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_adjourned_days'
  $field_instances['node-wob-field_request_adjourned_days'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_adjourned_days',
    'label' => 'Aantal dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_adjourned_received'
  $field_instances['node-wob-field_request_adjourned_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_adjourned_received',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_adjourned_sent'
  $field_instances['node-wob-field_request_adjourned_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_adjourned_sent',
    'label' => 'Verzenddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_adjourned_signed'
  $field_instances['node-wob-field_request_adjourned_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_adjourned_signed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal'
  $field_instances['node-wob-field_request_appeal'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal',
    'label' => 'Beroep niet nemen beslissing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_case_number'
  $field_instances['node-wob-field_request_appeal_case_number'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_case_number',
    'label' => 'Zaaknummer beroep',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_court'
  $field_instances['node-wob-field_request_appeal_court'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_court',
    'label' => 'Rechtbank',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_judgement'
  $field_instances['node-wob-field_request_appeal_judgement'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_judgement',
    'label' => 'Uitspraak rechter',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_received'
  $field_instances['node-wob-field_request_appeal_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_received',
    'label' => 'Ontvangstdatum beroepschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_sent'
  $field_instances['node-wob-field_request_appeal_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'Voor de toepassing van wettelijke voorschriften over bezwaar en beroep worden met een besluit gelijkgesteld de schriftelijke weigering een besluit te nemen, en het niet tijdig nemen van een besluit. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling61/Artikel62/">artikel 6:2 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_sent',
    'label' => 'Verzenddatum beroepschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_appeal_signed'
  $field_instances['node-wob-field_request_appeal_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_appeal_signed',
    'label' => 'Dagtekening beroepschrift',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_date_received'
  $field_instances['node-wob-field_request_date_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De datum waarop het bestuursorgaan het verzoek heeft ontvangen. Het bestuursorgaan beslist op het verzoek om informatie zo spoedig mogelijk, doch uiterlijk binnen vier weken gerekend vanaf de dag na die waarop het verzoek is ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 1, Wob</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_date_received',
    'label' => 'Ontvangstdatum verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_date_sent'
  $field_instances['node-wob-field_request_date_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De datum van de verzending van het verzoek.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_date_sent',
    'label' => 'Verzenddatum verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_date_signed'
  $field_instances['node-wob-field_request_date_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => 'De datum die op het verzoek staat.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_date_signed',
    'label' => 'Dagtekening verzoek',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_days_left_calc'
  $field_instances['node-wob-field_request_days_left_calc'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_amount_of_days_left_computed_int_',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_days_left_calc',
    'label' => 'Aantal resterende dagen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_days_left_int'
  $field_instances['node-wob-field_request_days_left_int'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_days_left_int',
    'label' => 'Aantal resterende dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_decision'
  $field_instances['node-wob-field_request_decision'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_decision',
    'label' => 'Dagtekening beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_decision_deadline2'
  $field_instances['node-wob-field_request_decision_deadline2'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_decision_deadline2',
    'label' => 'Deadline voor beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_decision_received'
  $field_instances['node-wob-field_request_decision_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_decision_received',
    'label' => 'Ontvangstdatum beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_decision_sent'
  $field_instances['node-wob-field_request_decision_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_decision_sent',
    'label' => 'Verzenddatum beslissing',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_forfeited_penalty'
  $field_instances['node-wob-field_request_forfeited_penalty'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. De dwangsom bedraagt de eerste veertien dagen € 20 per dag, de daaropvolgende veertien dagen € 30 per dag en de overige dagen € 40 per dag. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_forfeited_penalty',
    'label' => 'Berekende dwangsom',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_id'
  $field_instances['node-wob-field_request_id'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_id',
    'label' => 'Kenmerk',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_leniency'
  $field_instances['node-wob-field_request_leniency'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'De termijn voor het geven van een beschikking wordt voorts opgeschort gedurende de termijn waarvoor de aanvrager schriftelijk met uitstel heeft ingestemd [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4131/Artikel415/">artikel 4:15 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_leniency',
    'label' => 'Extra uitstel beslissing',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_notice_of_default'
  $field_instances['node-wob-field_request_notice_of_default'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>]  De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_notice_of_default',
    'label' => 'In gebreke gesteld',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_notice_received'
  $field_instances['node-wob-field_request_notice_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_notice_received',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_notice_sent'
  $field_instances['node-wob-field_request_notice_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_notice_sent',
    'label' => 'Verzenddatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_notice_singed'
  $field_instances['node-wob-field_request_notice_singed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_notice_singed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_penalty_days_calc'
  $field_instances['node-wob-field_request_penalty_days_calc'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'custom_formatters',
        'settings' => array(),
        'type' => 'custom_formatters_clone_of_amount_of_days_left_computed_int_',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_penalty_days_calc',
    'label' => 'Aantal dwangsom dagen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_penalty_days_int'
  $field_instances['node-wob-field_request_penalty_days_int'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom voor elke dag dat het in gebreke is, doch voor ten hoogste 42 dagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>] De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_penalty_days_int',
    'label' => 'Aantal dwangsom dagen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_penalty_paid'
  $field_instances['node-wob-field_request_penalty_paid'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_penalty_paid',
    'label' => 'Betaalde dwangsom',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_suspension'
  $field_instances['node-wob-field_request_suspension'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Het bestuursorgaan kan een belanghebbende vragen of deze bezwaar heeft tegen het openbaar maken van bepaalde documenten. Dat kan voorkomen als een rapport, opgesteld door de overheid, betrekking heeft op bedrijfsgeheimen van een private partij. De termijn voor het nemen van een beslissing op het verzoek wordt in zo\'n geval opgeschort met het aantal dagen tussen het verzoek aan een derde om een zienswijze en de dag waarop die zienswijze wordt ontvangen of de termijn daarvoor ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 3, Wob</a> en <a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling412/Artikel48/>artikel 4:8 Awb</a>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_suspension',
    'label' => 'Opschorting beslissing',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'node-wob-field_request_suspension_enabled'
  $field_instances['node-wob-field_request_suspension_enabled'] = array(
    'bundle' => 'wob',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_request_suspension_enabled',
    'label' => 'Opschorting beslissing',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-wob-field_stats_appeal_duration'
  $field_instances['node-wob-field_stats_appeal_duration'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_stats_appeal_duration',
    'label' => 'Duur fase beroep',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-wob-field_stats_objection_duration'
  $field_instances['node-wob-field_stats_objection_duration'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_stats_objection_duration',
    'label' => 'Duur fase bezwaar',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-wob-field_stats_penalty_calculated'
  $field_instances['node-wob-field_stats_penalty_calculated'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_stats_penalty_calculated',
    'label' => 'Som berekende dwangsommen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-wob-field_stats_penalty_received'
  $field_instances['node-wob-field_stats_penalty_received'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_stats_penalty_received',
    'label' => 'Som ontvangen dwangsommen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '€ ',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-wob-field_stats_request_duration'
  $field_instances['node-wob-field_stats_request_duration'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_stats_request_duration',
    'label' => 'Duur fase verzoek',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' dag| dagen',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-wob-field_status'
  $field_instances['node-wob-field_status'] = array(
    'bundle' => 'wob',
    'default_value' => NULL,
    'default_value_function' => 'open',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-wob-field_status_computed'
  $field_instances['node-wob-field_status_computed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status_computed',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-wob-field_susp_third_party_deadline'
  $field_instances['node-wob-field_susp_third_party_deadline'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_susp_third_party_deadline',
    'label' => 'Deadline zienswijze',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'node-wob-field_susp_third_party_received'
  $field_instances['node-wob-field_susp_third_party_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_susp_third_party_received',
    'label' => 'Ontvangstdatum zienswijze',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'node-wob-field_susp_third_party_sent'
  $field_instances['node-wob-field_susp_third_party_sent'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_susp_third_party_sent',
    'label' => 'Verzenddatum verzoek zienswijze',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'node-wob-field_suspension_notice_received'
  $field_instances['node-wob-field_suspension_notice_received'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_suspension_notice_received',
    'label' => 'Ontvangstdatum',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'node-wob-field_suspension_signed'
  $field_instances['node-wob-field_suspension_signed'] = array(
    'bundle' => 'wob',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_suspension_signed',
    'label' => 'Dagtekening',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 135,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal dagen');
  t('Aantal dagen herstel verzuim');
  t('Aantal dagen verdaging');
  t('Aantal dwangsom dagen');
  t('Aantal resterende dagen');
  t('Actie in');
  t('Adviescommissie ingesteld');
  t('Berekende dwangsom');
  t('Beroep aangetekend');
  t('Beroep afgerond');
  t('Beroep niet nemen beslissing');
  t('Beroep zaaknummer');
  t('Betaalde dwangsom');
  t('Bezwaar aangetekend');
  t('Body');
  t('Comment');
  t('Dagtekening');
  t('Dagtekening aanvulling');
  t('Dagtekening beroep');
  t('Dagtekening beroepschrift');
  t('Dagtekening beslissing');
  t('Dagtekening bezwaarschrift');
  t('Dagtekening van de aanvulling.');
  t('Dagtekening verdaging');
  t('Dagtekening verzoek');
  t('Datum waarop de aanvulling op het verzoek is ontvangen door het bestuursorgaan.');
  t('Datum waarop het verzoek aan het bestuursorgaan is verzonden.');
  t('De dagtekening van het verzoek om een aanvulling.');
  t('De datum die op het verzoek staat.');
  t('De datum van de verzending van het verzoek.');
  t('De datum waarop het bestuursorgaan het verzoek heeft ontvangen. Het bestuursorgaan beslist op het verzoek om informatie zo spoedig mogelijk, doch uiterlijk binnen vier weken gerekend vanaf de dag na die waarop het verzoek is ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 1, Wob</a>]');
  t('De datum waarop het verzoek om een aanvulling is ontvangen.');
  t('De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. De dwangsom bedraagt de eerste veertien dagen € 20 per dag, de daaropvolgende veertien dagen € 30 per dag en de overige dagen € 40 per dag. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17 Awb</a>]');
  t('De termijn voor het geven van een beschikking wordt opgeschort met ingang van de dag na die waarop het bestuursorgaan: de aanvrager krachtens artikel 4:5 uitnodigt de aanvraag aan te vullen, tot de dag waarop de aanvraag is aangevuld of de daarvoor gestelde termijn ongebruikt is verstreken [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4131/Artikel415/">artikel 4:15 Awb</a>]');
  t('De termijn voor het geven van een beschikking wordt voorts opgeschort gedurende de termijn waarvoor de aanvrager schriftelijk met uitstel heeft ingestemd [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4131/Artikel415/">artikel 4:15 Awb</a>]');
  t('De termijn voor het indienen van een bezwaar- of beroepschrift bedraagt zes weken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel67/">artikel 6:7 Awb</a>]');
  t('De termijn voor het indienen van een bezwaarschrift bedraagt zes weken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel67/">art. 6:7 Awb</a>]');
  t('De termijn wordt opgeschort gerekend vanaf de dag na die waarop de indiener is verzocht een verzuim als bedoeld in artikel 6:6 te herstellen, tot de dag waarop het verzuim is hersteld of de daarvoor gestelde termijn ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10 Awb</a>]');
  t('De uiterste datum waarop het bestuursorgaan de aanvulling op het verzoek moet hebben ontvangen.');
  t('De verzoeker vermeldt bij zijn verzoek de bestuurlijke aangelegenheid of het daarop betrekking hebbend document, waarover hij informatie wenst te ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel3">art. 3, lid 2 Wob</a>] Een bestuurlijke aangelegenheid is "een aangelegenheid die betrekking heeft op beleid van een bestuursorgaan, daaronder begrepen de voorbereiding en de uitvoering ervan." [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel1">art. 1, onder b Wob</a>] Zie ook de <a href="https://rejo.zenger.nl/files/Memorie-van-toelichting-Wet-openbaarheid-van-bestuur.pdf">Memorie van Toelichting</a>, (o.a. pag. 21-22)');
  t('Deadline');
  t('Deadline aantekenen bezwaar');
  t('Deadline aanvulling');
  t('Deadline beroepschrift');
  t('Deadline voor beslissing');
  t('Deadline zienswijze');
  t('Description');
  t('Duur alle fasen');
  t('Duur fase beroep');
  t('Duur fase bezwaar');
  t('Duur fase verzoek');
  t('Extra uitstel');
  t('Extra uitstel beslissing');
  t('Fase');
  t('Het bestuursorgaan kan de beslissing voor ten hoogste vier weken verdagen. Van de verdaging wordt voor de afloop van de eerste termijn schriftelijk gemotiveerd mededeling gedaan aan de verzoeker. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 2, Wob</a>]');
  t('Het bestuursorgaan kan de beslissing voor ten hoogste zes weken verdagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 3 Awb</a>]');
  t('Het bestuursorgaan kan een belanghebbende vragen of deze bezwaar heeft tegen het openbaar maken van bepaalde documenten. Dat kan voorkomen als een rapport, opgesteld door de overheid, betrekking heeft op bedrijfsgeheimen van een private partij. De termijn voor het nemen van een beslissing op het verzoek wordt in zo\'n geval opgeschort met het aantal dagen tussen het verzoek aan een derde om een zienswijze en de dag waarop die zienswijze wordt ontvangen of de termijn daarvoor ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005252/#HoofdstukIII_Artikel6">artikel 6, lid 3, Wob</a> en <a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling412/Artikel48/>artikel 4:8 Awb</a>]');
  t('Het bezwaar of beroep kan niet-ontvankelijk worden verklaard [...] mits de indiener de gelegenheid heeft gehad het verzuim te herstellen binnen een hem daartoe gestelde termijn. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel66/">artikel 6:6 Awb</a>] De termijn wordt opgeschort gerekend vanaf de dag na die waarop de indiener is verzocht een verzuim als bedoeld in artikel 6:6 te herstellen, tot de dag waarop het verzuim is hersteld of de daarvoor gestelde termijn ongebruikt is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10 Awb</a>]');
  t('Het instellen van administratief beroep geschiedt door het indienen van een beroepschrift bij het beroepsorgaan. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel64/">artikel 6:4, lid 2 Awb</a>] Het [beroepschrift] wordt ondertekend en bevat ten minste: a) de naam en het adres van de indiener; b) de dagtekening; c) een omschrijving van het besluit waartegen het bezwaar of beroep is gericht; d) de gronden van het bezwaar of beroep. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 1 Awb</a>] Bij het beroepschrift wordt zo mogelijk een afschrift van het besluit waarop het geschil betrekking heeft, overgelegd. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 2 Awb</a>]');
  t('Het maken van bezwaar geschiedt door het indienen van een bezwaarschrift bij het bestuursorgaan dat het besluit heeft genomen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel64/">artikel 6:4 Awb</a>] Het [bezwaarschrift] wordt ondertekend en bevat ten minste: a) de naam en het adres van de indiener; b) de dagtekening; c) een omschrijving van het besluit waartegen het bezwaar of beroep is gericht; d) de gronden van het bezwaar of beroep. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling62/Artikel65/">artikel 6:5, lid 1 Awb</a>] ');
  t('In gebreke gesteld');
  t('Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>]  De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]');
  t('Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom voor elke dag dat het in gebreke is, doch voor ten hoogste 42 dagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>]  De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]');
  t('Indien een beschikking op aanvraag niet tijdig wordt gegeven, verbeurt het bestuursorgaan aan de aanvrager een dwangsom voor elke dag dat het in gebreke is, doch voor ten hoogste 42 dagen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 1, Awb</a>] De eerste dag waarover de dwangsom verschuldigd is, is de dag waarop twee weken zijn verstreken na de dag waarop de termijn voor het geven van de beschikking is verstreken en het bestuursorgaan van de aanvrager een schriftelijke ingebrekestelling heeft ontvangen. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk4/Titel41/Afdeling413/4132/Artikel417/">artikel 4:17, lid 3, Awb</a>]');
  t('Kenmerk');
  t('Notities');
  t('Omschrijving');
  t('Ontvangstdatum');
  t('Ontvangstdatum aanvulling');
  t('Ontvangstdatum beroep');
  t('Ontvangstdatum beroepschrift');
  t('Ontvangstdatum beslissing');
  t('Ontvangstdatum bezwaarschrift');
  t('Ontvangstdatum verdaging');
  t('Ontvangstdatum verzoek');
  t('Ontvangstdatum verzoek aanvulling');
  t('Ontvangstdatum zienswijze');
  t('Opschorting beslissing');
  t('Organisatie');
  t('Rechtbank');
  t('Reden beëindiging');
  t('Som berekende dwangsommen');
  t('Som ontvangen dwangsommen');
  t('Status');
  t('Timestamp');
  t('Uitspraak rechter');
  t('Verdaging beslissing');
  t('Verdaging beslistermijn');
  t('Verder uitstel is mogelijk voor zover alle belanghebbenden daarmee instemmen, de indiener van het bezwaarschrift daarmee instemt en andere belanghebbenden daardoor niet in hun belangen kunnen worden geschaad, of [...]. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 4 Awb</a>]');
  t('Verzenddatum');
  t('Verzenddatum aanvulling');
  t('Verzenddatum beroepschrift');
  t('Verzenddatum beslissing');
  t('Verzenddatum bezwaarschrift');
  t('Verzenddatum verdaging');
  t('Verzenddatum verzoek');
  t('Verzenddatum verzoek zienswijze');
  t('Verzoek aanvulling');
  t('Voor de toepassing van wettelijke voorschriften over bezwaar en beroep worden met een besluit gelijkgesteld de schriftelijke weigering een besluit te nemen, en het niet tijdig nemen van een besluit. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk6/Afdeling61/Artikel62/">artikel 6:2 Awb</a>]');
  t('Wetsvorm');
  t('Zaaknummer beroep');
  t('[V]an toepassing indien ten behoeve van de beslissing op het bezwaar een adviescommissie is ingesteld die bestaat uit een voorzitter en ten minste twee leden,  waarvan de voorzitter geen deel uitmaakt van en niet werkzaam is onder verantwoordelijkheid van het bestuursorgaan en die voldoet aan eventueel bij wettelijk voorschrift gestelde andere eisen. Indien een commissie over het bezwaar zal adviseren, deelt het bestuursorgaan dit zo spoedig mogelijk mede aan de indiener van het bezwaarschrift. [...] [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel713/">artikel 7:13 Awb</a>] Het bestuursorgaan beslist binnen zes weken of – indien een commissie als bedoeld in artikel 7:13 is ingesteld – binnen twaalf weken, gerekend vanaf de dag na die waarop de termijn voor het indienen van het bezwaarschrift is verstreken. [<a href="http://wetten.overheid.nl/BWBR0005537/Hoofdstuk7/Afdeling72/Artikel710/">artikel 7:10, lid 1 Awb</a>]');

  return $field_instances;
}
