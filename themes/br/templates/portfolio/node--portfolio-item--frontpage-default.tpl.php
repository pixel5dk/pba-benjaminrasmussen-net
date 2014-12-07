<?php
/**
 * 
 *
 */
dpm($content);
?>
<a href="<?php print $node_url; ?>">
  <div class="frontpage__item--container frontpage__default--container frontpage__portfolio">
    <div class="frontpage__item--image">
      <?php print render($content['field_image_portfolio']['0']); ?>

    </div>
    <div class="frontpage__item--content">
      <div class="frontpage__item--headers">
        <p class="frontpage__item--headers--sub"><?php print render($content['field_categories_portfolio']['0']); ?></p>
        <p class="frontpage__item--headers--title"><?php print render($node->title); ?></p>
      </div>  
    </div>
  </div>
</a>
