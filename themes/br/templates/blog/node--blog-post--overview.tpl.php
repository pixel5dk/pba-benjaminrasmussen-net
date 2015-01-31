<?php
/*
 * Todo: Write commentary
 */
?>

<div class="blog__overview--item">
  <div class="blog__overview--item--image">
    <a href="<?php print $node_url; ?>"><?php print render($content['field_cover_image']['0']); ?></a>
  </div>
  <div class="blog__overview--item--content">
    <h1 class="blog__overview--item--title">
      <a href="<?php print $node_url; ?>"><?php print $node->title; ?>
    </h1>
    <div class="blog__overview--item--body">
      <a href="<?php print $node_url; ?>">
        <?php 
          print render($content['body']['0']); 
        ?>
      </a> 
    </div>
    <h3 class="blog__overview--item--date">
      <a href="<?php print $node_url; ?>"><?php print gmdate("d/m/Y", $node->changed); ?></a>
    <?php
      if (isset($content['field_tags_blog'])) {
        $i = 0;
        print '<ul class="blog__overview--item--tags">';
        foreach ($content['field_tags_blog']['#items'] as $tag) {
          print '<li>&nbsp;' . render($content['field_tags_blog'][$i]) . '</li>';
          $i++;
        } 
        print '</ul>';    
      }
    ?>
    </h3>
  </div>
</div>
