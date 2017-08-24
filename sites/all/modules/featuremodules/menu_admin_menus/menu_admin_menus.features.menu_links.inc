<?php
/**
 * @file
 * menu_admin_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_admin_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_curriculum:curriculum/createdbyme_select.
  $menu_links['main-menu_curriculum:curriculum/createdbyme_select'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'curriculum/createdbyme_select',
    'router_path' => 'curriculum/createdbyme_select',
    'link_title' => 'Curriculum',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_curriculum:curriculum/createdbyme_select',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-main-menu_dashboard:<front>.
  $menu_links['menu-admin-main-menu_dashboard:<front>'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_dashboard:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-main-menu_location:taxonomy_term_add/form.
  $menu_links['menu-admin-main-menu_location:taxonomy_term_add/form'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => 'taxonomy_term_add/form',
    'router_path' => 'taxonomy_term_add/form',
    'link_title' => 'Location',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_location:taxonomy_term_add/form',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-main-menu_matching:create_match.
  $menu_links['menu-admin-main-menu_matching:create_match'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => 'create_match',
    'router_path' => 'create_match',
    'link_title' => 'Matching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_matching:create_match',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-main-menu_profanity-filter:admin/settings/sm_phoneticfilter.
  $menu_links['menu-admin-main-menu_profanity-filter:admin/settings/sm_phoneticfilter'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => 'admin/settings/sm_phoneticfilter',
    'router_path' => 'admin/settings/sm_phoneticfilter',
    'link_title' => 'Profanity Filter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_profanity-filter:admin/settings/sm_phoneticfilter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-main-menu_reports:reports/menteecontact.
  $menu_links['menu-admin-main-menu_reports:reports/menteecontact'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => 'reports/menteecontact',
    'router_path' => 'reports/menteecontact',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_reports:reports/menteecontact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-admin-main-menu_users:users/gamentees.
  $menu_links['menu-admin-main-menu_users:users/gamentees'] = array(
    'menu_name' => 'menu-admin-main-menu',
    'link_path' => 'users/gamentees',
    'router_path' => 'users/gamentees',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-main-menu_users:users/gamentees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-curriculum_choose-an-option:curriculum/all.
  $menu_links['menu-curriculum_choose-an-option:curriculum/all'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/all',
    'router_path' => 'curriculum/all',
    'link_title' => 'Choose an Option',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-curriculum_curriculum-categories:curriculum/curriculumcategory.
  $menu_links['menu-curriculum_curriculum-categories:curriculum/curriculumcategory'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/curriculumcategory',
    'router_path' => 'curriculum/curriculumcategory',
    'link_title' => 'Curriculum Categories',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-curriculum_curriculum-categories:curriculum/curriculumcategory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
  );
  // Exported menu link: menu-curriculum_manage-activities:curriculum/manageactvities.
  $menu_links['menu-curriculum_manage-activities:curriculum/manageactvities'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/manageactvities',
    'router_path' => 'curriculum/manageactvities',
    'link_title' => 'Manage Activities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-curriculum_manage-activities:curriculum/manageactvities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
  );
  // Exported menu link: menu-curriculum_manage-assigned-curriculum-by-location:curriculum/activities-assigned-by-location.
  $menu_links['menu-curriculum_manage-assigned-curriculum-by-location:curriculum/activities-assigned-by-location'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/activities-assigned-by-location',
    'router_path' => 'curriculum/activities-assigned-by-location',
    'link_title' => 'Manage Assigned Curriculum by Location',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-curriculum_manage-assigned-curriculum-by-location:curriculum/activities-assigned-by-location',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
  );
  // Exported menu link: menu-curriculum_manage-curricula:curriculum/managecurricula.
  $menu_links['menu-curriculum_manage-curricula:curriculum/managecurricula'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/managecurricula',
    'router_path' => 'curriculum/managecurricula',
    'link_title' => 'Manage Curricula',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-curriculum_manage-curricula:curriculum/managecurricula',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
  );
  // Exported menu link: menu-curriculum_my-curricula:curriculum/createdbyme.
  $menu_links['menu-curriculum_my-curricula:curriculum/createdbyme'] = array(
    'menu_name' => 'menu-curriculum',
    'link_path' => 'curriculum/createdbyme',
    'router_path' => 'curriculum/createdbyme',
    'link_title' => 'My Curricula',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-curriculum_my-curricula:curriculum/createdbyme',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-curriculum_choose-an-option:curriculum/all',
  );
  // Exported menu link: menu-matching-menu_automatic-matching:auto_match.
  $menu_links['menu-matching-menu_automatic-matching:auto_match'] = array(
    'menu_name' => 'menu-matching-menu',
    'link_path' => 'auto_match',
    'router_path' => 'auto_match',
    'link_title' => 'Automatic Matching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-matching-menu_automatic-matching:auto_match',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-matching-menu_matching-options:create_match',
  );
  // Exported menu link: menu-matching-menu_manual-matching:create_match.
  $menu_links['menu-matching-menu_manual-matching:create_match'] = array(
    'menu_name' => 'menu-matching-menu',
    'link_path' => 'create_match',
    'router_path' => 'create_match',
    'link_title' => 'Manual Matching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-matching-menu_manual-matching:create_match',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-matching-menu_matching-options:create_match',
  );
  // Exported menu link: menu-matching-menu_matching-options:create_match.
  $menu_links['menu-matching-menu_matching-options:create_match'] = array(
    'menu_name' => 'menu-matching-menu',
    'link_path' => 'create_match',
    'router_path' => 'create_match',
    'link_title' => 'Matching Options',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-matching-menu_matching-options:create_match',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-mentormenteematchtabs_:<view>.
  $menu_links['menu-mentormenteematchtabs_:<view>'] = array(
    'menu_name' => 'menu-mentormenteematchtabs',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_views' => array(
        'mlid' => 86071,
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'dashboard_user_relationships_browser',
          'display' => 'mentormentee_menu_page',
          'arguments' => '',
          'settings' => array(
            'wrapper_classes' => 'menu-views',
            'breadcrumb' => 0,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
            'title' => 0,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
          ),
        ),
      ),
      'identifier' => 'menu-mentormenteematchtabs_:<view>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_activity-by-location:reports/gaactivityreportbylocation.
  $menu_links['menu-reports_activity-by-location:reports/gaactivityreportbylocation'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/gaactivityreportbylocation',
    'router_path' => 'reports/gaactivityreportbylocation',
    'link_title' => 'Activity by Location',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_activity-by-location:reports/gaactivityreportbylocation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_activity-response-report:reports/activity-response-report.
  $menu_links['menu-reports_activity-response-report:reports/activity-response-report'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/activity-response-report',
    'router_path' => 'reports/activity-response-report',
    'link_title' => 'Activity Response Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_activity-response-report:reports/activity-response-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_correspondence-report:reports/activity-response-report',
  );
  // Exported menu link: menu-reports_all-users:reports/registration.
  $menu_links['menu-reports_all-users:reports/registration'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/registration',
    'router_path' => 'reports/registration',
    'link_title' => 'All Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_all-users:reports/registration',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_career-interest-report:reports/menteecareer.
  $menu_links['menu-reports_career-interest-report:reports/menteecareer'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/menteecareer',
    'router_path' => 'reports/menteecareer',
    'link_title' => 'Career Interest Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_career-interest-report:reports/menteecareer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_choose-a-report:reports/menteecontact.
  $menu_links['menu-reports_choose-a-report:reports/menteecontact'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/menteecontact',
    'router_path' => 'reports/menteecontact',
    'link_title' => 'Choose a report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_communication-report:reports/communication.
  $menu_links['menu-reports_communication-report:reports/communication'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/communication',
    'router_path' => 'reports/communication',
    'link_title' => 'Communication Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_communication-report:reports/communication',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_correspondence-report:reports/activity-response-report.
  $menu_links['menu-reports_correspondence-report:reports/activity-response-report'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/activity-response-report',
    'router_path' => 'reports/activity-response-report',
    'link_title' => 'Correspondence Report',
    'options' => array(
      'attributes' => array(
        'title' => 'Correspondence report for activity replies and chat. These items can be sorted and filtered.',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_correspondence-report:reports/activity-response-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_flagged-activity-responses:reports/flagged-activity-responses.
  $menu_links['menu-reports_flagged-activity-responses:reports/flagged-activity-responses'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/flagged-activity-responses',
    'router_path' => 'reports/flagged-activity-responses',
    'link_title' => 'Flagged Activity Responses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_flagged-activity-responses:reports/flagged-activity-responses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_flagged-content:reports/flagged-activity-responses',
  );
  // Exported menu link: menu-reports_flagged-chat:reports/flagged-chat.
  $menu_links['menu-reports_flagged-chat:reports/flagged-chat'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/flagged-chat',
    'router_path' => 'reports/flagged-chat',
    'link_title' => 'Flagged Chat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_flagged-chat:reports/flagged-chat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_flagged-content:reports/flagged-activity-responses',
  );
  // Exported menu link: menu-reports_flagged-content:reports/flagged-activity-responses.
  $menu_links['menu-reports_flagged-content:reports/flagged-activity-responses'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/flagged-activity-responses',
    'router_path' => 'reports/flagged-activity-responses',
    'link_title' => 'Flagged Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_flagged-content:reports/flagged-activity-responses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_lets-chat-report:reports/lets-chat.
  $menu_links['menu-reports_lets-chat-report:reports/lets-chat'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/lets-chat',
    'router_path' => 'reports/lets-chat',
    'link_title' => 'Let\'s Chat Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_lets-chat-report:reports/lets-chat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_correspondence-report:reports/activity-response-report',
  );
  // Exported menu link: menu-reports_mentee-contact-list:reports/menteecontact.
  $menu_links['menu-reports_mentee-contact-list:reports/menteecontact'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/menteecontact',
    'router_path' => 'reports/menteecontact',
    'link_title' => 'Mentee Contact List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_mentee-contact-list:reports/menteecontact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_mentee-participation:reports/adminmenteeparticipation.
  $menu_links['menu-reports_mentee-participation:reports/adminmenteeparticipation'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/adminmenteeparticipation',
    'router_path' => 'reports/adminmenteeparticipation',
    'link_title' => 'Mentee Participation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_mentee-participation:reports/adminmenteeparticipation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_menteementor-matches:reports/menteementormatches.
  $menu_links['menu-reports_menteementor-matches:reports/menteementormatches'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/menteementormatches',
    'router_path' => 'reports/menteementormatches',
    'link_title' => 'Mentee/Mentor Matches',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_menteementor-matches:reports/menteementormatches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_mentor-contact-list:reports/mentorcontact.
  $menu_links['menu-reports_mentor-contact-list:reports/mentorcontact'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/mentorcontact',
    'router_path' => 'reports/mentorcontact',
    'link_title' => 'Mentor Contact List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_mentor-contact-list:reports/mentorcontact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_mentor-participation:reports/adminmentorparticipation.
  $menu_links['menu-reports_mentor-participation:reports/adminmentorparticipation'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/adminmentorparticipation',
    'router_path' => 'reports/adminmentorparticipation',
    'link_title' => 'Mentor Participation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_mentor-participation:reports/adminmentorparticipation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_mentormentee-matches:reports/mentormenteematches.
  $menu_links['menu-reports_mentormentee-matches:reports/mentormenteematches'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/mentormenteematches',
    'router_path' => 'reports/mentormenteematches',
    'link_title' => 'Mentor/Mentee Matches',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_mentormentee-matches:reports/mentormenteematches',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-reports_profanity-report:reports/profile-profanity-report.
  $menu_links['menu-reports_profanity-report:reports/profile-profanity-report'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'reports/profile-profanity-report',
    'router_path' => 'reports/profile-profanity-report',
    'link_title' => 'Profanity Report',
    'options' => array(
      'attributes' => array(
        'title' => 'Profanity report',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-reports_profanity-report:reports/profile-profanity-report',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-reports_choose-a-report:reports/menteecontact',
  );
  // Exported menu link: menu-users_choose-a-user-view:users/gamentees.
  $menu_links['menu-users_choose-a-user-view:users/gamentees'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/gamentees',
    'router_path' => 'users/gamentees',
    'link_title' => 'Choose a User View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_choose-a-user-view:users/gamentees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-users_group-admins:users/groupadmin.
  $menu_links['menu-users_group-admins:users/groupadmin'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/groupadmin',
    'router_path' => 'users/groupadmin',
    'link_title' => 'Group Admins',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_group-admins:users/groupadmin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_manage-all-users:users/gaallusers.
  $menu_links['menu-users_manage-all-users:users/gaallusers'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/gaallusers',
    'router_path' => 'users/gaallusers',
    'link_title' => 'Manage All Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_manage-all-users:users/gaallusers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_manage-all-users:users/manageallusers.
  $menu_links['menu-users_manage-all-users:users/manageallusers'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/manageallusers',
    'router_path' => 'users/manageallusers',
    'link_title' => 'Manage All Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_manage-all-users:users/manageallusers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_mentees-awaiting-approval:users/menteesawaiting-approvalall.
  $menu_links['menu-users_mentees-awaiting-approval:users/menteesawaiting-approvalall'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/menteesawaiting-approvalall',
    'router_path' => 'users/menteesawaiting-approvalall',
    'link_title' => 'Mentees Awaiting Approval',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_mentees-awaiting-approval:users/menteesawaiting-approvalall',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_mentees:users/gamentees.
  $menu_links['menu-users_mentees:users/gamentees'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/gamentees',
    'router_path' => 'users/gamentees',
    'link_title' => 'Mentees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_mentees:users/gamentees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_mentors-awaiting-approval:users/mentorsawaiting-approvalall.
  $menu_links['menu-users_mentors-awaiting-approval:users/mentorsawaiting-approvalall'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/mentorsawaiting-approvalall',
    'router_path' => 'users/mentorsawaiting-approvalall',
    'link_title' => 'Mentors Awaiting Approval',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_mentors-awaiting-approval:users/mentorsawaiting-approvalall',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_mentors:users/gamentors.
  $menu_links['menu-users_mentors:users/gamentors'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/gamentors',
    'router_path' => 'users/gamentors',
    'link_title' => 'Mentors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_mentors:users/gamentors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_staff-admins:users/adminstaffadmin.
  $menu_links['menu-users_staff-admins:users/adminstaffadmin'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/adminstaffadmin',
    'router_path' => 'users/adminstaffadmin',
    'link_title' => 'Staff Admins',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_staff-admins:users/adminstaffadmin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: menu-users_subsite-admins:users/adminsiteadmin.
  $menu_links['menu-users_subsite-admins:users/adminsiteadmin'] = array(
    'menu_name' => 'menu-users',
    'link_path' => 'users/adminsiteadmin',
    'router_path' => 'users/adminsiteadmin',
    'link_title' => 'Subsite Admins',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-users_subsite-admins:users/adminsiteadmin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-users_choose-a-user-view:users/gamentees',
  );
  // Exported menu link: user-menu_my-relationships:relationships.
  $menu_links['user-menu_my-relationships:relationships'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'relationships',
    'router_path' => 'relationships',
    'link_title' => 'My relationships',
    'options' => array(
      'identifier' => 'user-menu_my-relationships:relationships',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Response Report');
  t('Activity by Location');
  t('All Users');
  t('Automatic Matching');
  t('Career Interest Report');
  t('Choose a User View');
  t('Choose a report');
  t('Choose an Option');
  t('Communication Report');
  t('Correspondence Report');
  t('Curriculum');
  t('Curriculum Categories');
  t('Dashboard');
  t('Flagged Activity Responses');
  t('Flagged Chat');
  t('Flagged Content');
  t('Group Admins');
  t('Let\'s Chat Report');
  t('Location');
  t('Manage Activities');
  t('Manage All Users');
  t('Manage Assigned Curriculum by Location');
  t('Manage Curricula');
  t('Manual Matching');
  t('Matching');
  t('Matching Options');
  t('Mentee Contact List');
  t('Mentee Participation');
  t('Mentee/Mentor Matches');
  t('Mentees');
  t('Mentees Awaiting Approval');
  t('Mentor Contact List');
  t('Mentor Participation');
  t('Mentor/Mentee Matches');
  t('Mentors');
  t('Mentors Awaiting Approval');
  t('My Curricula');
  t('My relationships');
  t('Profanity Filter');
  t('Profanity Report');
  t('Reports');
  t('Staff Admins');
  t('Subsite Admins');
  t('Users');

  return $menu_links;
}
