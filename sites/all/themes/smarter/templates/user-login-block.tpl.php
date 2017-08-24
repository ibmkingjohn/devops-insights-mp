<?php
/**
 * Custom User login block
 * This template was added so that the wire frame and creative design could be implemented
 */
?>
<div id="user-login-welcome-message">
  <?php
	  echo '<h1>'.t('Welcome to MentorPlace').'</h1>
  <p>'.t('MentorPlace is an online mentoring program that enables industry professionals to mentor students in a safe and secure environment.  Through MentorPlace, mentors around the globe are providing students with online academic assistance and career counseling, while letting them know that adults do care about their issues and concerns. ').'</p>
 
  <p>'.t('MentorPlace is a volunteer program developed by the IBM Corporation as part of our corporate citizenship efforts.  We invite select schools and school district partners to use our platform as part of their broader education work.').'</p>
 
  <p>'.t('If you are interested in learning more, please ').'<a href="/node/add/custom-contact-us" target="_blank">Contact Us</a></p>'; ?>
</div> 
<div id="user-login-block-container">
<?php /*<div id="user-welcome-message">
<center>
<p><strong>Welcome Mentors and Mentees!</strong><br>
  This is your online site for communicating with your mentor or mentee on a weekly basis. <br>
  Please enter your username and password to get started.</p>
  </center>
</div> */ ?>
<h1>User Login</h1>
  <div id="user-login-block-form-fields">
  <?php 
    print drupal_render($form['name']); // Display username field 
    print drupal_render($form['pass']); // Display Password field
    print drupal_render($form['form_build_id']);
    print drupal_render($form['form_id']); 
    ?>

    <div class="form-actions">
      <?php print drupal_render($form['actions']); // Display submit button ?>
    </div>
    <?php //print $rendered; // Display hidden elements (required for successful login) ?>
  </div>
  
  <div class="links">
    <ul class="menu">

      <!--MOD 1-16-2014-->    
      <?php
      global $base_url;
      global $base_path;
      $ssl_url = ('https://www.mentorplace.net' . $base_path);
      print '<li class="first leaf"><a href="'. $base_url . '/user/password" title="">Forgot User ID and/or Password</a></li>';

      if (strpos($base_url,'mentorplace') !== false) {
      	//display mentor reg for MP subsite ONLY 
      	print '<li class="leaf"><a href="'. $ssl_url . 'user/register?edit[field_user_acct_type][und]=25" title="">Register as a Mentor</a></li>';
      }
      else {
          //hide mentee reg for ALL subsites
      	//print '<li class="last leaf"><a href="'. $ssl_url .'user/register?edit[field_user_acct_type][und]=24" title="">Register as a Mentee</a></li>';
      }
      ?>    
    </ul>
  </div>
  
</div>

<div class="logoimage">
    <img src="/sites/all/themes/smarter/images/MentorPlaceLoginImage.png">
</div>

