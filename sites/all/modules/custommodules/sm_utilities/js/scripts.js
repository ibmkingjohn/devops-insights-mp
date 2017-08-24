(function ($) {
   $(function set_active_style() {
	$(".view-display-id-mentormentee_menu_page .active").parents(".views-row").addClass("dash-tab-active");
	var pathname = window.location.pathname; 
	if(pathname == "/" || pathname == "/dashboard"){
		$(".view-display-id-dash_loggedinuser_page").addClass("dash-tab-active");
	}

	$(".view-display-id-dash_loggedinuser_page td, .view-display-id-menteementor_dash_page td, .view-display-id-mentormentee_menu_page .view-content div").attr("style", "cursor: pointer");

	$(".view-display-id-mentormentee_menu_page .view-content, .view-display-id-menteementor_dash_page").on("click", "div, td", function(){
		var loc = $(this).find(".views-field-name a").attr("href");
		window.location = loc;
	});

	$(".view-display-id-dash_loggedinuser_page").on("click", "td", function(){
		window.location = '/';
	});

	$('.view-display-id-dash_loggedinuser_page').on("click", 'td a', function (event) { 
	  event.stopstopPropagation();
	});

	//set mentee tab to active on lets chat page 
	var letschat_mentee = $("article").attr("mentee");
	if(letschat_mentee != null){
		$("."+letschat_mentee).parents("td").addClass("dash-tab-active");
	}

	//set mentor tabs to active on mentee lets chat page
	$(".node-type-lets-chat.role-Mentee .view-display-id-menteementor_dash_page td").addClass("dash-tab-active");

	$(".node-type-activity-assignment .view-display-id-menteementor_dash_page td").addClass("dash-tab-active");

	//submit form on published checkbox click on activity assignment page 
	$(".views-field-field-actassign-body-editable .form-type-checkbox, .views-field-field-letschat-body-editable .form-type-checkbox").on("click", "label", function(e){
		e.preventDefault();
		$(".views-field-field-actassign-body-editable .form-type-checkbox input[type='checkbox'], .views-field-field-letschat-body-editable .form-type-checkbox input[type='checkbox']").prop('checked', true);
		$(this).hide();
		$("#editableviews-entity-form-activity-assignment-response, #editableviews-entity-form-lets-chat-reply").submit();
	});

});
})(jQuery);

