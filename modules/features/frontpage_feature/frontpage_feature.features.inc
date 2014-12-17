<?php
/**
 * @file
 * frontpage_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function frontpage_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function frontpage_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function frontpage_feature_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_breaking.
  $styles['frontpage_breaking'] = array(
    'name' => 'frontpage_breaking',
    'label' => 'Frontpage Breaking',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontpage_default.
  $styles['frontpage_default'] = array(
    'name' => 'frontpage_default',
    'label' => 'Frontpage Default',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: frontpage_hot.
  $styles['frontpage_hot'] = array(
    'name' => 'frontpage_hot',
    'label' => 'Frontpage Hot',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 635,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
