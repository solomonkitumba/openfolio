<?php
/**
 * @file
 * portfolio_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function portfolio_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => 'top menus',
  );
  // Exported menu: menu-top-right-menu.
  $menus['menu-top-right-menu'] = array(
    'menu_name' => 'menu-top-right-menu',
    'title' => 'top right menu',
    'description' => 'top right menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top menu');
  t('top menus');
  t('top right menu');


  return $menus;
}
