<?php
/**
 * @file
 * frontpage_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'frontpage_default';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'portfolio_item' => 'portfolio_item',
  );

  /* Display: Frontpage : All */
  $handler = $view->new_display('panel_pane', 'Frontpage : All', 'frontpage_all');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'portfolio_item' => 'portfolio_item',
  );
  $handler->display->display_options['pane_title'] = 'Frontpage : All';

  /* Display: Frontpage : Default */
  $handler = $view->new_display('panel_pane', 'Frontpage : Default', 'frontpage_default');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'portfolio_item' => 'portfolio_item',
  );
  /* Filter criterion: Indexed Node: Frontpage Status */
  $handler->display->display_options['filters']['field_frontpage_status']['id'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_frontpage_status']['field'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['pane_title'] = 'Frontpage : Default';

  /* Display: Frontpage : Breaking */
  $handler = $view->new_display('panel_pane', 'Frontpage : Breaking', 'frontpage_breaking');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'frontpage_breaking';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'portfolio_item' => 'portfolio_item',
  );
  /* Filter criterion: Indexed Node: Frontpage Status */
  $handler->display->display_options['filters']['field_frontpage_status']['id'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_frontpage_status']['field'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['pane_title'] = 'Frontpage : Breaking';

  /* Display: Frontpage : Hot */
  $handler = $view->new_display('panel_pane', 'Frontpage : Hot', 'frontpage_hot');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'frontpage_hot';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog_post' => 'blog_post',
    'portfolio_item' => 'portfolio_item',
  );
  /* Filter criterion: Indexed Node: Frontpage Status */
  $handler->display->display_options['filters']['field_frontpage_status']['id'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_frontpage_status']['field'] = 'field_frontpage_status';
  $handler->display->display_options['filters']['field_frontpage_status']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['pane_title'] = 'Frontpage : Hot';
  $translatables['frontpage_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No Results'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Frontpage : All'),
    t('View panes'),
    t('Frontpage : Default'),
    t('Frontpage : Breaking'),
    t('Frontpage : Hot'),
  );
  $export['frontpage_view'] = $view;

  return $export;
}
