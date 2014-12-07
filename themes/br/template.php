<?php

function br_preprocess_node(&$vars) {
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