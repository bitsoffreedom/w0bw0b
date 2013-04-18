	<div id="page-wrapper">
	<div id="header"><div class="section container clearfix"><div class="row">

		<?php if ($site_name || $site_slogan): ?>
			<div id="name-and-slogan">
				<?php if ($site_name): ?>
					<?php if ($title): ?>
						<div id="site-name"><strong>
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
						</strong></div>
					<?php else: /* Use h1 when the content title is empty */ ?>
						<h1 id="site-name">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
						</h1>
					<?php endif; ?>
				<?php endif; ?>

				<?php if ($site_slogan): ?>
					<div id="site-slogan"><?php print $site_slogan; ?></div>
				<?php endif; ?>
			</div> <!-- /#name-and-slogan -->
		<?php endif; ?>

		<?php print render($page['header']); ?>

		<?php print render($primary_local_tasks); ?>
	</div></div></div> <!-- /.section, /#header -->

	<div id="page" class="">

		<?php if ($main_menu || $secondary_menu): ?>
			<div id="navigation"><div class="section row">
				<?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu'))); ?>
				<?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Secondary menu'))); ?>
			</div></div> <!-- /.section, /#navigation -->
		<?php endif; ?>


		<div id="main-wrapper"><div id="main" class="clearfix container"><div class="row">

    		<?php print render($secondary_local_tasks); ?>
			<?php print $messages; ?>

			<div id="content" class="column"><div class="section">
				<?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
				<a id="main-content"></a>
				<?php print render($title_prefix); ?>
				<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
				<?php print render($title_suffix); ?>
				<?php print render($page['help']); ?>
				<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
				<?php print render($page['content']); ?>
				<?php print $feed_icons; ?>
			</div></div> <!-- /.section, /#content -->

			<?php if ($page['sidebar_first']): ?>
				<div id="sidebar-first" class="column sidebar"><div class="section">
					<?php print render($page['sidebar_first']); ?>
				</div></div> <!-- /.section, /#sidebar-first -->
			<?php endif; ?>

			<?php if ($page['sidebar_second']): ?>
				<div id="sidebar-second" class="column sidebar"><div class="section">
					<?php print render($page['sidebar_second']); ?>
				</div></div> <!-- /.section, /#sidebar-second -->
			<?php endif; ?>

		</div></div></div> <!-- /#main, /#main-wrapper -->

	</div> <!-- /#page -->

	<div id="footer"><div class="section container clearfix"><div class="row">
		<?php print render($page['footer']); ?>
	</div></div></div> <!-- /.section, /#footer -->
	</div> <!-- /#page-wrapper -->
