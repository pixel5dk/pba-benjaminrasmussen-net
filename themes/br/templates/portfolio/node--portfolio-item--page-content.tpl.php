<?php
/*
* todo: Add proper commentary
*/
?>
<div class="portfolio-item--page">
<div class="portfolio__item--headers">
  <h1 class="portfolio__item--headers--title">
    <?php print $node->title; ?>
  </h1>
  <h2 class="portfolio__item--headers--sub">
    <?php print render($content['field_categories_portfolio']['0']); ?>    
  </h2>
  <p class="portfolio__item--content">
    <?php print render($content['body']['0']); ?>    
  </p>
</div>
</div>
