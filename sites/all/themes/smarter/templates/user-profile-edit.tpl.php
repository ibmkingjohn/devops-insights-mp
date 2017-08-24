<!--Disable  link inside on the current avatar -->
<script>


(function ($) {
$(document).ready(function() {
    $('.user-picture').click(function(e) {
        e.preventDefault();
		e.target.style.cursor = 'default';
     });
 
	$('.user-picture').mouseover(function(e) {
        e.preventDefault();
		e.target.style.cursor = 'default';
     });
     
     $('#edit-picture .fieldset-legend').html("Current Avatar");
});
})(jQuery);
</script>

<!--print the edit profile form now -->
<?php print drupal_render_children($form); ?>