<?php
/*
 * todo: Is this a good naming solution?
 * Also this will display taxonomy terms that arent necessarily active.
 */
$vocabulary = taxonomy_vocabulary_machine_name_load('tags');
$terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
?>
<div class="portfolio__overview--tags">
  <div class="portfolio__overview--tags--header">
    <?php print t('Filters'); ?>
  </div>
  <ul>
    <li class="filter" data-filter="all"><?php print t('Show All'); ?></li>

    <?php foreach ($terms as $term): ?>
      <li class="filter" data-filter=".tag_<?php print $term->tid; ?>"><?php print $term->name; ?></li>
    <?php endforeach; ?>
  </ul>
</div>