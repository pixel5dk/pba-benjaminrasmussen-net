<?php
/**
 * @file
 * frontpage_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function frontpage_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'top_mobile' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '333d1452-ed96-4b97-9853-492914d4519a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-59bd1a93-0269-42f1-9efe-35d60309fb0a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_view-frontpage_breaking';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59bd1a93-0269-42f1-9efe-35d60309fb0a';
    $display->content['new-59bd1a93-0269-42f1-9efe-35d60309fb0a'] = $pane;
    $display->panels['left'][0] = 'new-59bd1a93-0269-42f1-9efe-35d60309fb0a';
    $pane = new stdClass();
    $pane->pid = 'new-0fe73b50-5cbd-4fa4-a432-9e452b522805';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Test block',
      'title' => 'test block',
      'body' => 'test block body',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fe73b50-5cbd-4fa4-a432-9e452b522805';
    $display->content['new-0fe73b50-5cbd-4fa4-a432-9e452b522805'] = $pane;
    $display->panels['right'][0] = 'new-0fe73b50-5cbd-4fa4-a432-9e452b522805';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function frontpage_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '641d2ac8-afef-4544-921d-347ad4105f16';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7740b3a-e122-4fa6-97e0-07f2a044675d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_view-frontpage_breaking';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7740b3a-e122-4fa6-97e0-07f2a044675d';
    $display->content['new-c7740b3a-e122-4fa6-97e0-07f2a044675d'] = $pane;
    $display->panels['middle'][0] = 'new-c7740b3a-e122-4fa6-97e0-07f2a044675d';
    $pane = new stdClass();
    $pane->pid = 'new-ce14defb-e924-4372-9017-77b8a15a684a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_view-frontpage_hot';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce14defb-e924-4372-9017-77b8a15a684a';
    $display->content['new-ce14defb-e924-4372-9017-77b8a15a684a'] = $pane;
    $display->panels['middle'][1] = 'new-ce14defb-e924-4372-9017-77b8a15a684a';
    $pane = new stdClass();
    $pane->pid = 'new-04be3c3e-4201-42df-ba64-bdedc2da2d29';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_view-frontpage_default';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '04be3c3e-4201-42df-ba64-bdedc2da2d29';
    $display->content['new-04be3c3e-4201-42df-ba64-bdedc2da2d29'] = $pane;
    $display->panels['middle'][2] = 'new-04be3c3e-4201-42df-ba64-bdedc2da2d29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
