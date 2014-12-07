<?php
/**
 * @file
 * portfolio_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function portfolio_feature_node_info() {
  $items = array(
    'portfolio_item' => array(
      'name' => t('Portfolio item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
