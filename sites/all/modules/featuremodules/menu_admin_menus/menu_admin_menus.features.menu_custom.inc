<?php
/**
 * @file
 * menu_admin_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_admin_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-admin-main-menu.
  $menus['menu-admin-main-menu'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'title' => 'Admin Main Menu',
    'description' => '',
  );
  // Exported menu: menu-content-management.
  $menus['menu-content-management'] = array(
    'menu_name' => 'menu-content-management',
    'title' => 'Content Management',
    'description' => '',
  );
  // Exported menu: menu-curriculum.
  $menus['menu-curriculum'] = array(
    'menu_name' => 'menu-curriculum',
    'title' => 'Curriculum',
    'description' => '',
  );
  // Exported menu: menu-matching-menu.
  $menus['menu-matching-menu'] = array(
    'menu_name' => 'menu-matching-menu',
    'title' => 'Matching Menu',
    'description' => '',
  );
  // Exported menu: menu-mentormenteematchtabs.
  $menus['menu-mentormenteematchtabs'] = array(
    'menu_name' => 'menu-mentormenteematchtabs',
    'title' => 'MentorMenteeMatchTabs',
    'description' => '',
  );
  // Exported menu: menu-new-content-management.
  $menus['menu-new-content-management'] = array(
    'menu_name' => 'menu-new-content-management',
    'title' => 'New Content Management',
    'description' => '',
  );
  // Exported menu: menu-reports.
  $menus['menu-reports'] = array(
    'menu_name' => 'menu-reports',
    'title' => 'Reports',
    'description' => '',
  );
  // Exported menu: menu-users.
  $menus['menu-users'] = array(
    'menu_name' => 'menu-users',
    'title' => 'Users',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Main Menu');
  t('Content Management');
  t('Curriculum');
  t('Main menu');
  t('Matching Menu');
  t('MentorMenteeMatchTabs');
  t('New Content Management');
  t('Reports');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('Users');

  return $menus;
}
