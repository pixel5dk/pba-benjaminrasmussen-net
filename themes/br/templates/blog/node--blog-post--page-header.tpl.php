<?php
/**
 * todo: add comment syntax
 *
 */
?>
<div class="blog__post--headers">
  <h1 class="blog__post--headers--title">
    <span class="blog__post--headers--label"><?php print t('Blog Post'); ?> </span>
    <?php print $node->title; ?>
  </h1>
  <h2 class="blog__post--headers--sub">
    <?php print render($content['body']['0']); ?>    
  </h2>
</div>
