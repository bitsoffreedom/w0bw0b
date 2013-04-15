<?php

function wob_theme_date_combo($variables) {
  unset($variables['element']['#description']);
  return theme('form_element', $variables);
}

function wob_theme_preprocess_page(&$vars) {
	$vars['primary_local_tasks'] = $vars['tabs'];
	unset($vars['primary_local_tasks']['#secondary']);
	$vars['secondary_local_tasks'] = array(
		'#theme' => 'menu_local_tasks',
		'#secondary' => $vars['tabs']['#secondary'],
	);
}


