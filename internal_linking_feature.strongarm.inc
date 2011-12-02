<?php

/**
 * Implementation of hook_strongarm().
 */
function internal_linking_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_menus';
  $strongarm->value = array(
    '- any -' => 0,
    'admin' => 0,
    'menu-all-content' => 0,
    'features' => 0,
    'menu-ilssc-navigation' => 0,
    'navigation' => 0,
    'primary-links' => 0,
    'secondary-links' => 0,
    'menu-staffnavigation' => 0,
  );
  $export['ckeditor_link_autocomplete_menus'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_node_types';
  $strongarm->value = array(
    'data_definition' => 'data_definition',
    'diagram' => 'diagram',
    'how_to' => 'how_to',
    'macros' => 'macros',
    'procedures' => 'procedures',
    '- any -' => 0,
    'book' => 0,
    'image' => 0,
    'page' => 0,
    'story' => 0,
    'features_test' => 0,
    'webform' => 0,
  );
  $export['ckeditor_link_autocomplete_node_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_autocomplete_vocabularies';
  $strongarm->value = array(
    '- any -' => 0,
    3 => 0,
    10 => 0,
    9 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    11 => 0,
    6 => 0,
  );
  $export['ckeditor_link_autocomplete_vocabularies'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_type_name';
  $strongarm->value = 'Internal path';
  $export['ckeditor_link_type_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_link_type_selected';
  $strongarm->value = 1;
  $export['ckeditor_link_type_selected'] = $strongarm;

  return $export;
}
