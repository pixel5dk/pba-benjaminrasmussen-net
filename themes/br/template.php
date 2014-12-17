<?php

function br_preprocess_node(&$vars) {
  if($vars['view_mode'] == 'teaser_compact') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--teaser-compact';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--teaser-compact';
  }
  if($vars['view_mode'] == 'page_content') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--page-content';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--page-content';
  }
  if($vars['view_mode'] == 'page_header') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--page-header';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--page-header';
  }
  if($vars['view_mode'] == 'frontpage_default') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--frontpage-default';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--frontpage-default';
  }
  if($vars['view_mode'] == 'frontpage_breaking') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--frontpage-breaking';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--frontpage-breaking';
  }
  if($vars['view_mode'] == 'frontpage_hot') {
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->type . '--frontpage-hot';   
    $vars['theme_hook_suggestions'][] = 'node--' . $vars['node']->nid . '--frontpage-hot';
  }
}
