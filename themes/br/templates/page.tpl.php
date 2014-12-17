<div class="header__container">
  <div class="content__container">
    <div class="header__brand">
        <p class="header__brand--title"><a href="<?php print $front_page; ?>"><?php print $site_name ?></a></p>
        <p class="header__brand--sub"><?php print $site_slogan; ?></p>

    </div>
    <div class="header__navigation">
    <?php print theme('links__system_main_menu', array('links' => $main_menu)); ?>
    </div>
  </div>
</div>

    <?php print render($page['content_pre']); ?>

    <?php print render($page['content']); ?>

    <?php print render($page['content_post']); ?>

<?php print $messages; ?>
