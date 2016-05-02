<?php

/**
 * @file
 * Admin page callbacks and functions for the Hartford Custom module.
 */

/**
 * Callback for Admin settings for NYU Webfonts
 */ 
function nyu_webfonts_callback($form, &$form_state) {
  $form['nyu_webfonts_css_path'] = array(
    '#title' => t('CSS Path'),
    '#description' => t('Project CSS Path provided by H&Co. Gotham Webfont at NYU'),
    '#type' => 'textfield',
    '#default_value' => variable_get('nyu_webfonts_css_path'),
  );

  $form = system_settings_form($form);
  return $form;
}
