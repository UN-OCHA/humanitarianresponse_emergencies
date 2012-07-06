<?php
/**
 * @file
 * humanitarianresponse_emergencies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_emergencies_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'emergencies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Emergencies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emergencies';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Disaster type */
  $handler->display->display_options['fields']['field_emergency_disaster_type']['id'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['field'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emergency_disaster_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['field_api_classes'] = 0;
  /* Field: Taxonomy term: GLIDE Number */
  $handler->display->display_options['fields']['field_emergency_glide_number']['id'] = 'field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['table'] = 'field_data_field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['field'] = 'field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_emergency_glide_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_emergency_glide_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_emergency_glide_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_emergency_glide_number']['field_api_classes'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'emergencies' => 'emergencies',
  );
  /* Filter criterion: Taxonomy term: Disaster type (field_emergency_disaster_type) */
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['id'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['field'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['operator_id'] = 'field_emergency_disaster_type_tid_op';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['operator'] = 'field_emergency_disaster_type_tid_op';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['identifier'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['vocabulary'] = 'disaster_types';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'emergencies';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'emergencies' => 'emergencies',
  );
  $handler->display->display_options['block_description'] = 'Emergencies';
  $translatables['emergencies'] = array(
    t('Master'),
    t('Emergencies'),
    t('more'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Name'),
    t('Type'),
    t('GLIDE Number'),
    t('Page'),
    t('Block'),
  );
  $export['emergencies'] = $view;

  return $export;
}
