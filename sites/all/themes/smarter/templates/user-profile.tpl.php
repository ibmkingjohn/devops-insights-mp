<?php
/**
This is a custom profile view page.
*/
?>

<div class="profile-header">
<?php drupal_add_js('misc/collapse.js'); drupal_add_js('misc/form.js'); ?>
<div class="views-field-picture">
<?php print render($user_profile['user_picture']); ?>
</div>
<div class="views-field-field-user-status">
<div class="field-content">
<?php print render($user_profile['field_check_in'][0]); ?>
</div>
</div>
<div class="profile-edit-link">

<?php
global $user;

//:: Get current profile user's user roles - Solomon
$CurrentProfile = user_load(arg(1));
$CurrentProfileRoles = $CurrentProfile->roles;
$CurrentProfileStatus = $CurrentProfile->status;

//Mentor vacation status on profile
if (in_array('Mentor', $CurrentProfileRoles)) {
//$user_data = user_load($CurrentProfile->uid);

$vacationStatus = $CurrentProfile->field_vacation;
$vacationValue= $vacationStatus['und'][0]['value'];

if ($vacationValue=='1') {
print '<div class="mentor-vacation-status"><p><b><font color="red">I am currently out on vacation</font></b></p></div>';
}
}


//:: Create edit profile button - Solomon 4/25/2013
//:: Array of user roles with edit profile permission
$UserRoleCheck = array_intersect(array('Group Admin', 'Subsite Admin', 'Staff Admin', 'administrator'), array_values($user->roles));

if ((empty($UserRoleCheck) ? FALSE : TRUE) || ($user->uid == $CurrentProfile->uid)) {
$URL = 'user/' . $CurrentProfile->uid . '/edit';
print l(t('Edit profile'), $URL,
array(
'attributes' => array('class' => array('button')),
'query' => array(drupal_get_destination())
));
}

echo '</div></div>';

//:: Create send user message button if $status=true - Solomon 4/8/2013  removed jwk 6/17/2015
					//	$block = module_invoke('custom_block','block_view','GetSendPrivateMsg');
					//	print render($block['content']);

// :: Create my mentee/mentor block - Solomon 4/8/2013
//bjb are we using this?
						//$block = module_invoke('custom_block','block_view','MymenteeMentorblock');
						//print render($block['content']);

?>

<?php if ((in_array('Mentee', $CurrentProfileRoles)) || (in_array('Mentor', $CurrentProfileRoles))) { ?>
<div class="profile-section">
<h3>About Me</h3>
<div class="profile-group">
<?php print render($user_profile['field_gender']); ?>
<?php print render($user_profile['field_mentee_age']); ?>
<?php print render($user_profile['field_mentee_career']); ?>
<?php print render($user_profile['field_mentee_see_yourself_18']); ?>
<?php print render($user_profile['field_mentee_career_fields']); ?>
<?php print render($user_profile['field_school_subjects']); ?>
<?php print render($user_profile['field_mentee_degree']); ?>
<?php print render($user_profile['field_biography']); ?>
</div>
</div>
<?php } ?>
<?php if ((in_array('Mentor', $CurrentProfileRoles))) {
  if ((empty($UserRoleCheck) ? FALSE : TRUE) || ($user->uid == $CurrentProfile->uid)){ ?>
<div class="profile-section">
<h3>My Career</h3>
<div class="profile-group">
<?php print render($user_profile['field_general_career_advice']); ?>
<?php print render($user_profile['field_job_field_specialty']); ?>
<?php print render($user_profile['field_my_job_title']); ?>
<?php print render($user_profile['field_salary']); ?>
<?php print render($user_profile['field_company_size']); ?>
<?php print render($user_profile['field_what_my_company_does']); ?>
<?php print render($user_profile['field_work_env']); ?>
<?php print render($user_profile['field_what_i_do_in_a_typical_day']); ?>
</div>
</div>

<div class="profile-section">
<h3>Educational Background</h3>
<div class="profile-group">
<?php print render($user_profile['field_edu_degree']); ?>
<?php print render($user_profile['field_favorite_subjects_in_schoo']); ?>
</div>
</div>
<?php  }}  ?>
<?php if ((in_array('Mentee', $CurrentProfileRoles)) || (in_array('Mentor', $CurrentProfileRoles))) { ?>
<div class="profile-section">
<h3>In My Free Time</h3>
<div class="profile-group">
<?php print render($user_profile['field_free_time']); ?>
</div>
</div>
<?php } ?>
<?php if ((empty($UserRoleCheck) ? FALSE : TRUE)) { ?>
	<div class="profile-section">
</div>
	<?php } ?>

