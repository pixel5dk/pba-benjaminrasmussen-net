<div class="header__container">
  <div class="content__container">
    <div class="header__brand">
        <p class="header__brand--title"><?php print $site_name ?></p>
        <p class="header__brand--sub"><?php print t('Webdesigner and & developer'); ?></p>

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
