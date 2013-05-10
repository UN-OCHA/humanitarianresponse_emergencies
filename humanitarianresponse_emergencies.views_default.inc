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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Disaster type */
  $handler->display->display_options['fields']['field_emergency_disaster_type']['id'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['field'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: GLIDE Number */
  $handler->display->display_options['fields']['field_emergency_glide_number']['id'] = 'field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['table'] = 'field_data_field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['field'] = 'field_emergency_glide_number';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'emergencies' => 'emergencies',
  );
  /* Filter criterion: Field: Disaster type (field_emergency_disaster_type) */
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['id'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['field'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['operator_id'] = 'field_emergency_disaster_type_tid_op';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['operator'] = 'field_emergency_disaster_type_tid_op';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['expose']['identifier'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_emergency_disaster_type_tid']['vocabulary'] = 'disaster_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'emergencies';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'emergencies' => 'emergencies',
  );
  $handler->display->display_options['block_description'] = 'Emergencies';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'emergencies.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Disaster type */
  $handler->display->display_options['fields']['field_emergency_disaster_type']['id'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['field'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: GLIDE Number */
  $handler->display->display_options['fields']['field_emergency_glide_number']['id'] = 'field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['table'] = 'field_data_field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['field'] = 'field_emergency_glide_number';
  $handler->display->display_options['path'] = 'emergencies.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Disaster type */
  $handler->display->display_options['fields']['field_emergency_disaster_type']['id'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['field'] = 'field_emergency_disaster_type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_emergency_disaster_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: GLIDE Number */
  $handler->display->display_options['fields']['field_emergency_glide_number']['id'] = 'field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['table'] = 'field_data_field_emergency_glide_number';
  $handler->display->display_options['fields']['field_emergency_glide_number']['field'] = 'field_emergency_glide_number';
  $handler->display->display_options['path'] = 'emergencies.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'emergencies.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'emergencies.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );
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
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Name'),
    t('Type'),
    t('GLIDE Number'),
    t('Page'),
    t('Block'),
    t('XLS'),
    t('XML'),
    t('CSV'),
  );
  $export['emergencies'] = $view;

  return $export;
}
