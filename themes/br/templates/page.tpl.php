<div class="header__container">
  <div class="content__container">
    <div class="header__brand">
        <p class="header__brand--title">Benjamin Rasmussen</p>
        <p class="header__brand--sub">Web Developer</p>

    </div>
    <div class="header__navigation">
    <?php print theme('links__system_main_menu', array('links' => $main_menu)); ?>
    </div>
  </div>
</div>

<?php print $messages; ?>
<div class="content__container">
    <?php print render($page['content_pre']); ?>

    <?php print render($page['content']); ?>

    <?php print render($page['content_post']); ?>
</div>