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
	 
});
})(jQuery);