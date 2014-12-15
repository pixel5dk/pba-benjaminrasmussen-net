<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<p class="listing--title"><?php print t('Latest from Blog'); ?></p>
<ul class="listing--pure-text">
  <?php foreach ($rows as $id => $row): ?>
    <li>
      <?php print $row; ?>
    </li>
  <?php endforeach; ?>
</ul>
