<?php
/*
 * todo: add comment syntax
 *
 */
?>

<a href="<?php print $node_url; ?>">
  <div class="frontpage__item--container frontpage__compact--container frontpage__portfolio mix
  <?php
    if (isset($content['field_tags'])) {
      $i = 0;
      foreach ($content['field_tags']['#items'] as $tag) {
        print ' tag_' . $tag['tid'];
        $i++;
      }
    }
  ?>">
    <div class="frontpage__item--image">
      <?php print render($content['field_image_portfolio']['0']); ?>
    </div>
    <div class="frontpage__item--content">
      <div class="frontpage__item--headers">
        <p class="frontpage__item--headers--sub"><?php print render($content['field_categories_portfolio']['0']); ?></p>
        <p class="frontpage__item--headers--title"><?php print render($node->title); ?></p>
      </div>
    </div>
    <div class="frontpage__item--tags">
      <ul>
      <?php
        if (isset($content['field_tags'])) {
          $i = 0;
          foreach ($content['field_tags']['#items'] as $tag) {
            print '<li>' . render($content['field_tags'][$i]) . '</li>';
            $i++;
          }        
        }
      ?>
      </ul>
    </div>
  </div>
</a>
