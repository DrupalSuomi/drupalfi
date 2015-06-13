<!-- ______________________ HEADER _______________________ -->

<header id="header">
  <div class="wrapper">
    <?php if ($page['header']): ?>
      <div id="header-region">
        <?php print render($page['header']); ?>
      </div>
    <?php endif; ?>
  </div>
</header> <!-- /header -->

<?php if ($main_menu): ?>
  <nav id="navigation" class="menu">
    <div class="wrapper">
      <?php if ($logo): ?>
        <div id="logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
          </a>
        </div>
      <?php endif; ?>
      <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('links', 'clearfix', 'main-menu')))); ?>
    </div>
  </nav> <!-- /navigation -->
<?php endif; ?>

<!-- ______________________ MAIN _______________________ -->
<div id="main" class="clearfix">
  <div class="wrapper">

    <section id="content">

        <?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
          <div id="content-header">

            <?php if (!drupal_is_front_page()): ?>
              <?php print $breadcrumb; ?>
            <?php endif; ?>

            <?php if ($page['highlighted']): ?>
              <div id="highlighted"><?php print render($page['highlighted']) ?></div>
            <?php endif; ?>

            <?php print render($title_prefix); ?>

            <?php if ($title && !drupal_is_front_page()): ?>
              <h1 class="title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php print render($page['help']); ?>

            <?php if ($tabs): ?>
              <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php if ($action_links): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>

          </div> <!-- /#content-header -->
        <?php endif; ?>

        <?php print render($page['content']) ?>

        <?php print $feed_icons; ?>

    </section> <!-- /content-inner /content -->

    <?php if ($page['sidebar_first']): ?>
      <aside id="sidebar-first" class="column sidebar first">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?> <!-- /sidebar-first -->
    
    <?php if ($page['sidebar_second']): ?>
      <aside id="sidebar-second" class="column sidebar second">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?> <!-- /sidebar-second -->

  </div>
</div> <!-- /main -->
<?php if ($page['content_bottom']): ?>
  <div id="content-bottom">
    <div class="wrapper">
      <?php print render($page['content_bottom']); ?>
    </div> <!-- /content-bottom -->
  </div> <!-- /wrapper -->
<?php endif; ?>

<!-- ______________________ FOOTER _______________________ -->

<?php if ($page['footer']): ?>
  <footer id="footer">
    <div class="wrapper">
        <?php print render($page['footer']); ?>
    </div>
  </footer> <!-- /footer -->
<?php endif; ?>
