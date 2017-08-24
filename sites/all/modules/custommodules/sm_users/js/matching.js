(function ($) {
	$(document).ready(function() {
		/*$("#page").append('<div id="return-to-top" style="position: absolute">RETURN TO TOP</div>');
		$("#page").on("click", "#return-to-top", function(){
			$('html, body').animate({ scrollTop: 0 }, 'fast');
		});*/

		function update_match_form(){
			var selected_mentors = $(".mentor-match-list ul").children();
			var selected_mentees = $(".mentee-match-list ul").children();
			var mentor_match_limit = $(".mentor-match-list .mentor-match-limit").html();
			mentor_match_limit = parseInt(mentor_match_limit);
			var past_limit = false;
			var limit_plural = "mentee";
			var remove_plural = "mentee";

			if(selected_mentees.length <= mentor_match_limit || selected_mentors.length < 1){
				past_limit = false;
				$("#error-box").hide();
			}else{
				past_limit = true;
				$("#error-box").show();
				if(mentor_match_limit > 1){
					limit_plural = "mentees";
				}
				if(selected_mentees.length - mentor_match_limit > 1){
					remove_plural = "mentees";
				}
				$("#error-box").html("This mentor can only be assigned "+mentor_match_limit+" more "+limit_plural+". Please remove "+(selected_mentees.length - mentor_match_limit)+" "+remove_plural+" to complete the match.");
			}

			if(selected_mentors.length < 1 || selected_mentees.length < 1 || past_limit == true){
				$(".make-match-submit").hide();
			}else{
				$(".make-match-submit").show();
			}

			if(selected_mentors.length > 0){
				$(".select-mentor-radio").hide();
				$(".mentor-match-list").show();
			}else{
				$(".select-mentor-radio").show();
				$(".mentor-match-list").hide();
			}

			if(selected_mentees.length > 0){
				$(".mentee-match-list").show();
			}else{
				$(".mentee-match-list").hide();
			}

			if(selected_mentors.length > 0 && selected_mentees.length > 0){
				$(".gray-connector").show();
			}else{
				$(".gray-connector").hide();
			}

			if(selected_mentees.length > 3){
				$(".select-mentee-check").hide();
			}else{
				$(".select-mentee-check").show();
			}
		}
		
   		$("#content").on("click", ".select-mentor-radio", function(){
   			var selected_mentors = $(".mentor-match-list ul").children();
   			$("#result").text("");
   			if(selected_mentors.length < 1){
	   			var mentor_id = $(this).attr("id");
	   			var mentor_name = $(this).attr("value");
	   			var match_limit = $(this).attr("limit");

	   			$(".match-instructions").hide();
	   			$(".match-review-lists").show();

	   			
	   			$(".mentor-match-list ul").append('<li name="'+mentor_id+'"><a href="#finalize" name="finalize" class="remove">X</a> '+mentor_name+'  <span class="mentor-match-limit">'+match_limit+'</span></li>');
   			}
   			update_match_form();
   		});

   		$("#content").on("click", ".select-mentee-check", function(){
   			var selected_mentees = $(".mentee-match-list ul").children();
   			var mentees_array = [];
   			$("#result").text("");
   			if(selected_mentees.length < 4){
   				

	   			var mentee_id = $(this).attr("id");
	   			var mentee_name = $(this).attr("name");

				$(".match-instructions").hide();
	   			$(".match-review-lists").show();

				$('.mentee-match-list ul li').each(function(i)
				{
				   mentees_array.push($(this).attr('name')); 
				});

				if(mentees_array.indexOf(mentee_id) < 0){
	   				$(".mentee-match-list ul").append('<li name="'+mentee_id+'"><a href="#finalize" name="finalize" class="remove">X</a> '+mentee_name+'</li>');
	   			}else{
	   				$(".mentee-match-list [name='"+mentee_id+"']").remove();
	   				$(this).attr('checked', false);
	   			}
   			}
   			update_match_form();
   		});

   		$(".match-review-lists").on("click", ".remove", function(){
   			var mentee = $(this).parent().attr("name");
   			$('#'+mentee).attr('checked', false);
   			$(this).parent().remove();

   			update_match_form();
   		});

   		$(".make-match-submit").on("click", "#match-finalize", function(){
   			var mentor_array = [];
   			var mentees_array = [];
   			var mentor;
   			var mentees;

   			$('.mentor-match-list ul li').each(function(i)
			{
			   mentor_array.push($(this).attr('name'));
			});

			$('.mentee-match-list ul li').each(function(i)
			{
			   mentees_array.push($(this).attr('name')); 
			});

			mentor = mentor_array.join("+");
			mentees = mentees_array.join("+");
   			$('.matching-spinner').html('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>').show();
   			$(".make-match-submit").hide();
   			$('#result').load('/manual_match_finalize/'+mentor+'/'+mentees+' #content-wrapper', null, function() {
				$('.matching-spinner').hide();
				$(".mentor-match-list ul").empty();
				$(".mentee-match-list ul").empty();
				$(".mentee-match-list, .mentor-match-list, .gray-connector").hide();
				$("#edit-submit-administerusers-views").trigger("click");
				$(".view-display-id-mentor_match_list #edit-submit-administerusers-views").trigger("click");

			});
   		});
	});
})(jQuery);

