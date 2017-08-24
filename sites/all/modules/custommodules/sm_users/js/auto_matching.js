(function ($) {
	$(document).ready(function() {
		$(".ready-checkbox").on("click", "input[type=checkbox]", function(){
			if($(".ready-checkbox input[type=checkbox").prop('checked')){
				$(".auto-match-submit").show();
				$(".auto-match-submit-disabled").hide();
			}else{
				$(".auto-match-submit").hide();
				$(".auto-match-submit-disabled").show();
			}
		});
	});
})(jQuery);

