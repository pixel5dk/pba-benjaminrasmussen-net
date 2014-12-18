<?php
/*
 * todo: add comment syntax
 *
 */
?>

<div class="slider">
  <?php 
    $i = 0;
    foreach ($content['field_image_portfolio']['#items'] as $item) {
      print render($content['field_image_portfolio'][$i]);
      $i++;
    }
  ?>
</div>
