<?php
function smarter_preprocess_html(&$variables, $hook) {
  $user = user_load(1);
  $path = current_path();
  
  // Add a class name to body tag based on logged in user role
  // Allows customizations of certain elements on pages to be shown differently based on role
  if ($variables['user']) {
    foreach($variables['user']->roles as $key => $role){
      $variables['classes_array'][] = 'role-' . $role;
    }
  }
  
  if ($path == 'user') {
    $variables['classes_array'][] = 'anonymous-form';
  }

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));

/*  JWK Do we need this? 422015 REMD 06/13/2016 */
//  if ($path == 'curriculum/all' || $path == 'curriculum/createdbymy') {
  //  drupal_add_js('function resizeIframe(iframe) { iframe.height = iframe.contentWindow.document.body.scrollHeight + "px"; }', 'inline');
 // }

/*  JWK Do we need this? 422015 REMD 06/13/2016 */
 // if (strpos($path, 'curriculum/activity/') !== false) {

   // foreach (element_children($variables["page"]) as $region) {
     // $variables["page"][$region]['#access'] = ($region == 'content');

    //  foreach (element_children($variables["page"][$region]) as $block) {
      //  $variables["page"][$region][$block]['#access'] = ($block == 'system_main');
     // }
  //  }
 // }
}


/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
 
 /*
  * Override the default titles for pages
 */
function smarter_preprocess_page(&$variables, $hook) {
   global $user;
   $path = current_path();

    if (arg(0) == 'user') {
      switch (arg(1)) {
        case 'register':
          drupal_set_title(t('Register'));
          break;
        case 'password':
          drupal_set_title(t('Retrieve Password'));
          break;
        case '':
        case 'login':
          drupal_set_title(t(''));
          break;
      }
    }
 
    
  /**Hides tabs on pages */
  global $user;
  // Check to see if $user has the administrator role.
  if (!in_array('administrator', array_values($user->roles)) && (arg(0) <> 'messages')) {
    $variables['tabs'] = '';
  }
  
  // Add template suggestions based on content type 
	if (isset($variables['node']->type)) {
      $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    } 
}

/*
 * Custom template for login block
*/
function smarter_theme(&$existing, $type, $theme, $path) {
   $hooks['user_login_block'] = array(
     'template' => 'templates/user-login-block',
     'render element' => 'form',
   );
   
   $hooks['user_login'] = array(
     'template' => 'templates/user-login-block',
     'render element' => 'form',
   );

	
/** Custom template for edit profile  **/

	$hooks['user_profile_form'] = array(
     'template' => 'templates/user-profile-edit',
   // Forms always take the form argument.
	'arguments' => array('form' => NULL),
	'render element' => 'form',
	);
   return $hooks;
}
function smarter_preprocess_user_login_block(&$vars) {
  $vars['name'] = render($vars['form']['name']);
  $vars['pass'] = render($vars['form']['pass']);
  $vars['submit'] = render($vars['form']['actions']['submit']);
  $vars['rendered'] = drupal_render_children($vars['form']);
}


/**need to change this code so title works.  this breaks submit  jwk 1/16/2012 */
/*  JWK should we move this to utilities ? 422015 */
function smarter_form_alter(&$form, &$form_state, $form_id) {
  global $user;
  /** Register as a new user not logged in */
  if (($form_id == 'user_register_form') && ($user->uid == 0)) {
    /** Set the max length for user name to 15 characters */
    $form['account']['name']['#maxlength'] = 15;
    $form['account']['name']['#description'] = t('Limit is 15 characters, minimum 6 characters. Spaces are allowed; punctuation is not allowed except for periods, hyphens, apostrophes, and underscores.');
    $form['actions']['submit']['#value'] = t('Register');
    $form['actions']['submit']['#suffix'] = '<a href="'.$GLOBALS['base_url'].'" title="" class="button">'.t('Cancel').'</a>';
  }
  /** Register a new user logged in as admin */
  else if ($form_id == 'user_register_form') {
    /** Set the max length for user name to 15 characters */
    $form['account']['name']['#maxlength'] = 15;
    $form['account']['name']['#description'] = t('Limit is 15 characters, minimum 6 characters. Spaces are allowed; punctuation is not allowed except for periods, hyphens, apostrophes, and underscores.');
  }
  else if ($form_id == 'custom_contact_us_node_form') {
    $form['actions']['submit']['#value'] = t('Send Message');
    drupal_set_title('Contact Us Message');
  }
  else if ($form_id == 'user_pass') {
    $form['actions']['submit']['#suffix'] = '<a href="'.$GLOBALS['base_url'].'" title="" class="button">'.t('Cancel').'</a>';
  }
  else if ($form_id == 'flag_confirm') {
    $form['actions']['cancel']['#attributes'] = array('class' => array('button'));
  }
  else if ($form_id == 'user_profile_form') {
    unset($form['field_available']['und']['#options']['_none']);
  }
  
}

/*  JWK Do we need this or move to utilities? 422015 REMD 06/13/2016 */
function smarter_form_comment_form_alter(&$form, &$form_state) {
  $form['actions']['submit']['#value'] = t('Submit');
}

/** Custom functions **/

/**
 * Implements theme_field__field_type().
 */
function smarter_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}

/*  JWK Do we need this? 422015 REMD 06/13/2016 */
//function smarter_image_style($variables) {
//  $style_name = $variables['style_name'];
//  $path = $variables['path'];

//  $style_path = image_style_path($style_name, $path);
//  if (!file_exists($style_path)) {
  //  $style_path = image_style_url($style_name, $path);
 // }
 // $variables['path'] = $style_path;

 // if (is_file($style_path)) {
 //   if (list($width, $height, $type, $attributes) = @getimagesize($style_path)) {
 //     $variables['width'] = $width;
 //     $variables['height'] = $height;
 //   }
 // }
  
//  return theme('image', $variables);
//}

