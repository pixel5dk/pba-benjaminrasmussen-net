<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width. It is 5 rows high; the top
 * middle and bottom rows contain 1 column, while the second
 * and fourth rows contain 2 columns.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 * - $content['top']: Content in the top row.
 * - $content['left_above']: Content in the left column in row 2.
 * - $content['right_above']: Content in the right column in row 2.
 * - $content['middle']: Content in the middle row.
 * - $content['left_below']: Content in the left column in row 4.
 * - $content['right_below']: Content in the right column in row 4.
 * - $content['right']: Content in the right column.
 * - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-2columns-bricks">
  <div class="content__container--page-header">
    <div class="content__container">

    <?php print $content['top']; ?>
    </div>
  </div>
  <div class="panel-2columns-bricks__left panel__region">
    <div class="content__container--left">

    <?php print $content['left_above']; ?>
    </div>

  </div>

  <div class="panel-2columns-bricks__right panel__region">
    <div class="content__container--right">

    <?php print $content['right_above']; ?>
    </div>

  </div>
  <div class="panel-2columns-bricks__middle panel__region">
    <div class="content__container">

    <?php print $content['middle']; ?>
    </div>

  </div>
  <div class="panel-2columns-bricks__left panel__region">
    <div class="content__container--left">

    <?php print $content['left_below']; ?>
    </div>

  </div>
  <div class="panel-2columns-bricks__right panel__region">
    <div class="content__container--right">
  
    <?php print $content['right_below']; ?>

    </div>
  </div>
  <div class="panel-2columns-bricks__bottom panel__region">
    <div class="content__container--left">

    <?php print $content['bottom']; ?>
    </div>

  </div>
</div>