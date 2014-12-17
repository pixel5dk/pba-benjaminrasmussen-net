<?php
/**
 * @file
 * blog_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
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
  $handler->name = 'page_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog panel',
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
  $display->uuid = '7a32da66-3934-4021-a709-17a24368bf8b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7dd6f501-906b-483a-85e7-57675b1fe867';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_posts-overview';
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
    $pane->uuid = '7dd6f501-906b-483a-85e7-57675b1fe867';
    $display->content['new-7dd6f501-906b-483a-85e7-57675b1fe867'] = $pane;
    $display->panels['middle'][0] = 'new-7dd6f501-906b-483a-85e7-57675b1fe867';
    $pane = new stdClass();
    $pane->pid = 'new-7e70287a-73dc-44c5-886c-a34e042559b7';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11',
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
    $pane->uuid = '7e70287a-73dc-44c5-886c-a34e042559b7';
    $display->content['new-7e70287a-73dc-44c5-886c-a34e042559b7'] = $pane;
    $display->panels['top'][0] = 'new-7e70287a-73dc-44c5-886c-a34e042559b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7e70287a-73dc-44c5-886c-a34e042559b7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
