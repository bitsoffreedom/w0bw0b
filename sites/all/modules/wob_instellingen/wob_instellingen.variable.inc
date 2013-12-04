<?php
/**
 * @file
 * wob_instellingen.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function wob_instellingen_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  'additional_settings__active_tab_documentation' => 'edit-submission',
  'additional_settings__active_tab_page' => 'edit-menu',
  'additional_settings__active_tab_wob' => 'edit-submission',
  'admin_theme' => 'wob_theme',
  'anonymous' => 'Anonymous',
  'clean_url' => 1,
  'comment_anonymous_page' => 0,
  'comment_anonymous_wob' => 0,
  'comment_default_mode_page' => 1,
  'comment_default_mode_wob' => 1,
  'comment_default_per_page_page' => 50,
  'comment_default_per_page_wob' => 50,
  'comment_form_location_page' => 1,
  'comment_form_location_wob' => 1,
  'comment_page' => 0,
  'comment_preview_page' => 1,
  'comment_preview_wob' => 1,
  'comment_subject_field_page' => 1,
  'comment_subject_field_wob' => 1,
  'comment_wob' => 1,
  'configurable_timezones' => 0,
  'cron_key' => 'ROtqQrtYZuKC-i9AfImrfhqOrxhOL2SUNL0OoJNycGQ',
  'cron_last' => 1386156746,
  'css_js_query_string' => 'mxa89z',
  'ctools_last_cron' => 1386156751,
  'date_api_use_iso8601' => 0,
  'date_api_version' => 7.2,
  'date_default_timezone' => 'Europe/Amsterdam',
  'date_first_day' => 1,
  'date_format_date_only' => 'Y-m-d H:i',
  'date_format_long' => 'l, j F, Y - H:i',
  'date_format_medium' => 'D, m/d/Y - H:i',
  'date_format_short' => 'm/d/Y - H:i',
  'date_format_short_date' => 'j F Y',
  'default_field_group' => array(
    'group_information|node|wob|form' => FALSE,
    'group_request|node|wob|form' => FALSE,
    'group_tabs|node|wob|form' => FALSE,
    'group_objection|node|wob|form' => FALSE,
    'group_appeal|node|wob|form' => FALSE,
    'group_request|node|wob|default' => FALSE,
    'group_objection|node|wob|default' => FALSE,
    'group_appeal|node|wob|default' => FALSE,
    'group_information|node|wob|default' => FALSE,
    'group_tabs|node|wob|default' => FALSE,
    'group_info_tabs|node|wob|default' => FALSE,
    'group_info_tabs|node|wob|form' => FALSE,
    'group_statistics|node|wob|default' => FALSE,
    'group_statistics|node|wob|form' => FALSE,
    'group_request_adjourned|node|wob|form' => FALSE,
    'group_left|node|wob|default' => FALSE,
    'group_right|node|wob|default' => FALSE,
    'group_request_adjourned|node|wob|default' => FALSE,
    'group_left|node|wob|form' => FALSE,
    'group_right|node|wob|form' => FALSE,
    'group_request_notice|node|wob|form' => FALSE,
    'group_request_appeal|node|wob|form' => FALSE,
    'group_request_addendum|node|wob|form' => FALSE,
    'group_objection_addendum|node|wob|form' => FALSE,
    'group_objection_adjourned|node|wob|form' => FALSE,
    'group_objection_notice|node|wob|form' => FALSE,
    'group_objection_appeal|node|wob|form' => FALSE,
    'group_request_addendum|node|wob|default' => FALSE,
    'group_request_notice|node|wob|default' => FALSE,
    'group_request_appeal|node|wob|default' => FALSE,
    'group_objection_addendum|node|wob|default' => FALSE,
    'group_objection_adjourned|node|wob|default' => FALSE,
    'group_objection_notice|node|wob|default' => FALSE,
    'group_objection_appeal|node|wob|default' => FALSE,
    'group_objection_wrapper|node|wob|form' => FALSE,
    'group_appeal_wrapper|node|wob|form' => FALSE,
    'group_opschorting_beslissing|node|wob|form' => TRUE,
    'group_request_suspension|node|wob|form' => FALSE,
    'group_opschorting_beslissing|node|wob|default' => FALSE,
  ),
  'default_nodes_main' => 10,
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => 'tH2Y5AmxJwzfbkcCcwGAPZWTlyeLQaxFvHAfZfFuu7Q',
  'email__active_tab' => 'edit-email-admin-created',
  'empty_timezone_message' => 0,
  'features_codecache' => array(
    'wob_instellingen' => array(
      'field_base' => 'dc188236599a4e8bfe256b286b6e1071',
      'field_instance' => 'e12f325a3b6c29b2beb89744c1a5b3c1',
      'menu_custom' => '0506f9bdc8905c69b7c3bcbf1cede7ef',
      'menu_links' => '180f7c7c27791a3105e5c1a5be316360',
      'taxonomy' => '4303370ed831aae0e75cc77f6a3fcb28',
      'dependencies' => FALSE,
      'formatters' => 'b042e360d4f91935638324af960b6190',
      'node' => '0cfd560389505e80dc424cded8e70cb6',
      'field_group' => '554566a6e9aa67af76919dc7cb684209',
      'variable_realm' => 'c5d83bda1cb9882f2fbbf4573c9528ed',
      'conditional_fields' => 'ec4888b93d3a0f5b3ea5604692c0aead',
      'views_view' => '8abc44f63465ae3667a7a0b9a4965c87',
      'fe_block_settings' => '0b48744ba8a92708272b8d90f24eea3f',
      'fe_block_boxes' => 'f4ca961da10653172109ec5b4af494d6',
      'language' => '09613e6ca4fe9efe1382da72a88ff762',
    ),
  ),
  'features_ignored_orphans' => array(),
  'features_semaphore' => array(),
  'field_bundle_settings_field_collection_item__field_changelog' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__wob' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 3,
        ),
        'path' => array(
          'weight' => 4,
        ),
      ),
      'display' => array(),
    ),
  ),
  'file_default_scheme' => 'public',
  'file_private_path' => '',
  'file_public_path' => 'sites/default/files',
  'file_temporary_path' => '/var/www/virtual/uncinc.nl/wob/phptmp/',
  'filter_fallback_format' => 'plain_text',
  'i18n_node_extended_page' => 1,
  'i18n_node_extended_wob' => 1,
  'i18n_node_options_page' => array(),
  'i18n_node_options_wob' => array(),
  'i18n_string_allowed_formats' => array(
    'plain_text' => 'plain_text',
    'filtered_html' => 0,
    'full_html' => 0,
  ),
  'i18n_string_source_language' => 'nl',
  'install_profile' => 'standard',
  'install_task' => 'done',
  'install_time' => 1363006988,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/devel/devel_krumo_path.js',
    4 => 'misc/ui/jquery.ui.core.min.js',
    5 => 'misc/ui/jquery.ui.datepicker.min.js',
    6 => 'modules/locale/locale.datepicker.js',
    7 => 'sites/all/modules/date/date_popup/jquery.timeentry.pack.js',
    8 => 'sites/all/modules/date/date_popup/date_popup.js',
    9 => 'modules/contextual/contextual.js',
    10 => 'misc/autocomplete.js',
    11 => 'modules/field/modules/text/text.js',
    12 => 'misc/textarea.js',
    13 => 'sites/all/modules/field_group/horizontal-tabs/horizontal-tabs.js',
    14 => 'misc/jquery.cookie.js',
    15 => 'misc/jquery.form.js',
    16 => 'misc/progress.js',
    17 => 'misc/ajax.js',
    18 => 'misc/tableheader.js',
    19 => 'misc/tabledrag.js',
    20 => 'misc/states.js',
    21 => 'misc/form.js',
    22 => 'misc/collapse.js',
    23 => 'modules/menu/menu.js',
    24 => 'sites/all/modules/pathauto/pathauto.js',
    25 => 'modules/node/node.js',
    26 => 'modules/comment/comment-node-form.js',
    27 => 'misc/vertical-tabs.js',
    28 => 'sites/all/modules/calculated_field/js/calculated_field.js',
    29 => 'sites/all/modules/conditional_fields/js/conditional_fields.js',
    30 => 'sites/all/modules/field_group/field_group.js',
    31 => 'modules/toolbar/toolbar.js',
    32 => 'sites/all/modules/ctools/js/auto-submit.js',
    33 => 'sites/all/modules/views/js/views-contextual.js',
    34 => 'sites/all/modules/views/js/base.js',
    35 => 'sites/all/modules/views/js/ajax.js',
    36 => 'sites/all/modules/ctools/js/dropbutton.js',
    37 => 'misc/ui/jquery.ui.widget.min.js',
    38 => 'misc/ui/jquery.ui.tabs.min.js',
    39 => 'misc/ui/jquery.ui.button.min.js',
    40 => 'misc/ui/jquery.ui.mouse.min.js',
    41 => 'misc/ui/jquery.ui.draggable.min.js',
    42 => 'misc/ui/jquery.ui.position.min.js',
    43 => 'misc/ui/jquery.ui.resizable.min.js',
    44 => 'misc/ui/jquery.ui.dialog.min.js',
    45 => 'sites/all/modules/views/js/jquery.ui.dialog.patch.js',
    46 => 'sites/all/modules/ctools/js/dependent.js',
    47 => 'sites/all/modules/ctools/js/collapsible-div.js',
    48 => 'sites/all/modules/views/js/views-admin.js',
    49 => 'sites/all/modules/features/features.js',
  ),
  'language_content_type_documentation' => 0,
  'language_content_type_page' => 0,
  'language_content_type_wob' => 0,
  'language_count' => 2,
  'language_default' => (object) array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 0,
    'javascript' => 'jxsr441Rm4uf2FUfZvTDYDHSzgOXbnIaxRQ0K3wOax8',
    'provider' => 'language-default',
  ),
  'language_negotiation_language' => array(),
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 501,
    1 => 493,
    2 => 490,
    3 => 250,
    4 => 247,
    5 => 246,
    6 => 245,
    7 => 238,
    8 => 234,
    9 => 126,
    10 => 125,
    11 => 124,
    12 => 123,
    13 => 122,
    14 => 121,
    15 => 119,
    16 => 117,
    17 => 63,
    18 => 62,
    19 => 61,
    20 => 60,
    21 => 59,
    22 => 58,
    23 => 44,
    24 => 31,
    25 => 30,
    26 => 29,
    27 => 28,
    28 => 27,
    29 => 26,
    30 => 24,
    31 => 21,
    32 => 15,
    33 => 14,
    34 => 13,
    35 => 11,
    36 => 7,
    37 => 6,
    38 => 5,
    39 => 3,
    40 => 2,
    41 => 1,
  ),
  'menu_options_documentation' => array(),
  'menu_options_page' => array(
    0 => 'main-menu',
    1 => 'user-menu',
  ),
  'menu_options_wob' => array(
    0 => 'main-menu',
  ),
  'menu_parent_documentation' => 'main-menu:0',
  'menu_parent_page' => 'main-menu:0',
  'menu_parent_wob' => 'main-menu:0',
  'node_admin_theme' => 1,
  'node_cron_last' => 1385722525,
  'node_options_documentation' => array(
    0 => 'status',
  ),
  'node_options_page' => array(
    0 => 'status',
  ),
  'node_options_wob' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_preview_page' => 1,
  'node_preview_wob' => 0,
  'node_submitted_documentation' => 0,
  'node_submitted_page' => 0,
  'node_submitted_wob' => 1,
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_node_page_pattern' => '',
  'pathauto_node_pattern' => '[node:title]',
  'pathauto_node_wob_pattern' => 'wob/[node:title]',
  'pathauto_punctuation_hyphen' => 1,
  'pathauto_taxonomy_term_laws_pattern' => '',
  'pathauto_taxonomy_term_organisation_pattern' => '',
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_taxonomy_term_rechtbank_pattern' => '',
  'pathauto_taxonomy_term_tags_pattern' => '',
  'pathauto_user_pattern' => 'users/[user:name]',
  'path_alias_whitelist' => array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  ),
  'save_continue_documentation' => 'Save and add fields',
  'save_continue_wob' => 'Save and add fields',
  'site_403' => '',
  'site_404' => '',
  'site_default_country' => 'NL',
  'site_frontpage' => 'overzicht',
  'site_mail' => 'wob@bof.nl',
  'site_name' => 'w0bw0b!',
  'site_slogan' => 'This is Rumour Control. Here are the facts!',
  'theme_default' => 'wob_theme',
  'theme_wob_theme_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  ),
  'update_last_check' => 1386156761,
  'user_admin_role' => 3,
  'user_cancel_method' => 'user_cancel_block',
  'user_default_timezone' => 0,
  'user_email_verification' => 1,
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_pictures' => 0,
  'user_picture_default' => '',
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_guidelines' => '',
  'user_picture_path' => 'pictures',
  'user_picture_style' => 'thumbnail',
  'user_register' => 0,
  'user_signatures' => 0,
  'variable_module_list' => array(
    'locale' => array(
      0 => 'language_content_type_page',
      1 => 'language_default',
    ),
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_page',
      3 => 'i18n_node_extended_page',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_language',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_language',
    ),
    'i18n_variable' => array(
      0 => 'i18n_variable_conf',
      1 => 'i18n_variable_list',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
);

return $realm_variables;
}
