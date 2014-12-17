<?php
/**
 * @file
 * node_layout_and_main_menu.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function node_layout_and_main_menu_default_page_manager_handlers() {
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
    'title' => 'Blog Post',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '29d51957-6e4b-42dd-bc40-987bc735c0b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-193d27d2-92e1-409a-8637-bd3f3634ef4e';
    $pane->panel = 'left_above';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_content',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '193d27d2-92e1-409a-8637-bd3f3634ef4e';
    $display->content['new-193d27d2-92e1-409a-8637-bd3f3634ef4e'] = $pane;
    $display->panels['left_above'][0] = 'new-193d27d2-92e1-409a-8637-bd3f3634ef4e';
    $pane = new stdClass();
    $pane->pid = 'new-1d052787-7d7c-4e50-bf8c-372fd0abefa1';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_posts-latest';
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
    $pane->uuid = '1d052787-7d7c-4e50-bf8c-372fd0abefa1';
    $display->content['new-1d052787-7d7c-4e50-bf8c-372fd0abefa1'] = $pane;
    $display->panels['right_above'][0] = 'new-1d052787-7d7c-4e50-bf8c-372fd0abefa1';
    $pane = new stdClass();
    $pane->pid = 'new-2e1a486c-749a-42e1-9081-7bf64b0e81a3';
    $pane->panel = 'top';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_header',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '2e1a486c-749a-42e1-9081-7bf64b0e81a3';
    $display->content['new-2e1a486c-749a-42e1-9081-7bf64b0e81a3'] = $pane;
    $display->panels['top'][0] = 'new-2e1a486c-749a-42e1-9081-7bf64b0e81a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2e1a486c-749a-42e1-9081-7bf64b0e81a3';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Standard  Node',
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
  $display->uuid = '0be14250-1124-4c7e-baa6-4906a9b61d92';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfc6ec34-434b-41a0-9e19-5aded3840362';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_content',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'cfc6ec34-434b-41a0-9e19-5aded3840362';
    $display->content['new-cfc6ec34-434b-41a0-9e19-5aded3840362'] = $pane;
    $display->panels['middle'][0] = 'new-cfc6ec34-434b-41a0-9e19-5aded3840362';
    $pane = new stdClass();
    $pane->pid = 'new-5465cfd1-02c2-4ac0-b6f2-59746e086535';
    $pane->panel = 'top';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_header',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '5465cfd1-02c2-4ac0-b6f2-59746e086535';
    $display->content['new-5465cfd1-02c2-4ac0-b6f2-59746e086535'] = $pane;
    $display->panels['top'][0] = 'new-5465cfd1-02c2-4ac0-b6f2-59746e086535';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5465cfd1-02c2-4ac0-b6f2-59746e086535';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
