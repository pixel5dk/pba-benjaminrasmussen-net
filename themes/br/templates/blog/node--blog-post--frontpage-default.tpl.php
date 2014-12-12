<?php
/**
 * todo: add comment syntax
 *
 */
?>
<a href="<?php print $node_url; ?>">
  <div class="frontpage__item--container frontpage__default--container frontpage__blog">
    <div class="frontpage__item--image">
      <?php print render($content['field_cover_image']['0']); ?>

    </div>
    <div class="frontpage__item--content">
      <div class="frontpage__item--headers">
        <p class="frontpage__item--headers--sub"><?php print t('blog'); ?></p>
        <p class="frontpage__item--headers--title"><?php print render($node->title); ?></p>
      </div>  
    </div>
    <div class="frontpage__item--caption">
      Caption
    </div>
  </div>
</a>