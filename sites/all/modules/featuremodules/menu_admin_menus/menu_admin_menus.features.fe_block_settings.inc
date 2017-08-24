<?php
/**
 * @file
 * menu_admin_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function menu_admin_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['accordion_menu-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => 'cm/*
admin/settings/sm_phoneticfilter
admin/structure/taxonomy',
    'roles' => array(
      'administrator' => 3,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['accordion_menu-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => 'reports/*
node/2418/webform-results
node/2418/webform-results/analysis',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -40,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['accordion_menu-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => 'users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/mgrcontactus
users/mgrcontactus/*',
    'roles' => array(
      'administrator' => 3,
      'Group Admin' => 4,
      'Staff Admin' => 8,
      'Subsite Admin' => 7,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -39,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['accordion_menu-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => 'curriculum/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['accordion_menu-5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 5,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => 'create_match
create_match/*
auto_match
auto_match/*
unmatch
unmatch/*
auto_match_finalize
auto_match_finalize/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -36,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['custom_block-taxonomytreeview'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'taxonomytreeview',
    'module' => 'custom_block',
    'node_types' => array(),
    'pages' => '/
reports/*
privatemsg/profanereport
privatemsg/profanereport/*
users/adminstaffadmin
users/adminstaffadmin/*
users/adminsiteadmin
users/adminsiteadmin/*
users/groupadmin
users/groupadmin/*
users/gamentees
users/gamentees/*
users/gamentors
users/gamentors/*
users/mentorsawaiting-approvalall
users/mentorsawaiting-approvalall/*
users/menteesawaiting-approvalall
users/menteesawaiting-approvalall/*
cm/forums
cm/forums/*
forums
forums/*
cm/calendarevents
cm/calendarevents/*
calendar/*
calendar
cm/groupadmin-activities
cm/groupadmin-activities/*
curriculum/assignedtest
curriculum/assignedtest/*
curriculum/manageassigned
curriculum/manageassigned/*
curriculum/activities-assigned-by-location
curriculum/activities-assigned-by-location/*
curriculum/activities-assigned-by-locationjwk
curriculum/activities-assigned-by-locationjwk/*
curriculum/assignedremove
curriculum/assignedremove/*
users/manageallusers
users/manageallusers/*
users/gaallusers
users/gaallusers/*
users/manageallusersmaster
users/manageallusersmaster/*
node/add/matching
node/add/matching/*
reports/gaactivityreportbylocationremove
curriculum/activities-assigned-by-locationjwk1
curriculum/activities-assigned-by-locationjwk1/*
reports/gaactivityreportbylocationremove/*
unmatch
unmatch/*
users/mgrcontactus
users/mgrcontactus/*
mparchive/*
mparchivebylocation
mparchivebylocation/*
curriculum/assignedjwk
curriculum/assignedjwk/*
user/register/*',
    'roles' => array(
      'administrator' => 3,
      'anonymous user' => 1,
      'Group Admin' => 4,
      'Staff Admin' => 8,
      'Subsite Admin' => 7,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-mentormenteematchtabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-mentormenteematchtabs',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'Mentee' => 6,
      'Mentor' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smarter' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smarter',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
