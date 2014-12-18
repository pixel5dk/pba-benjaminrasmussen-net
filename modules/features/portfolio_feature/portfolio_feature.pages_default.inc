<?php
/**
 * @file
 * portfolio_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function portfolio_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'portfolio';
  $page->task = 'page';
  $page->admin_title = 'Portfolio';
  $page->admin_description = '';
  $page->path = 'portfolio';
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
  $handler->name = 'page_portfolio_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'portfolio';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Portfolio panel',
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
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cd594212-aabd-4cd7-9c29-d8df139f9dfe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34105214-bbc7-4c7d-a106-69fb5f5bf2a6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'portfolio_items-overview';
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
    $pane->uuid = '34105214-bbc7-4c7d-a106-69fb5f5bf2a6';
    $display->content['new-34105214-bbc7-4c7d-a106-69fb5f5bf2a6'] = $pane;
    $display->panels['middle'][0] = 'new-34105214-bbc7-4c7d-a106-69fb5f5bf2a6';
    $pane = new stdClass();
    $pane->pid = 'new-6922d732-4417-4696-ab9e-5dab85e3f198';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'page_header',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6922d732-4417-4696-ab9e-5dab85e3f198';
    $display->content['new-6922d732-4417-4696-ab9e-5dab85e3f198'] = $pane;
    $display->panels['top'][0] = 'new-6922d732-4417-4696-ab9e-5dab85e3f198';
    $pane = new stdClass();
    $pane->pid = 'new-9950ec2b-5f17-4980-87a8-4352ae710b85';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'tagfilters',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9950ec2b-5f17-4980-87a8-4352ae710b85';
    $display->content['new-9950ec2b-5f17-4980-87a8-4352ae710b85'] = $pane;
    $display->panels['top'][1] = 'new-9950ec2b-5f17-4980-87a8-4352ae710b85';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6922d732-4417-4696-ab9e-5dab85e3f198';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['portfolio'] = $page;

  return $pages;

}
