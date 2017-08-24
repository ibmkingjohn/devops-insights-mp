(function ($) {
  function radio_button_handler() {
    // handle radio buttons
    $('div.user-avatar-select input.form-radio').hide();
    $('div.user-avatar-select img').hover(
      function(){
        $(this).addClass("avatar-hover");
      },
      function(){
        $(this).removeClass("avatar-hover");
      }
    );
  }

  function image_click_handler() {
    $('div.user-avatar-select img').bind("click", function(){

      $("div.user-avatar-select img.avatar-select")
      .each(function(){
        $(this).removeClass("avatar-select");
        $(this).parents('.form-item').children("input").attr("checked", "");
      });

      var $deletePic = $('#edit-picture-delete');
      var $input = $(this).parents('.form-item').children("input");

      $(this).addClass("avatar-select");
      $input.attr("checked", "checked");
      $deletePic.attr("checked", "checked");

      // Feedback to user that the current avatar will be deleted
      var deletePic = $('#edit-picture-delete');
      if (deletePic.length && !deletePic.is(':checked')) {
        deletePic.click();
      }
    });
  }

  Drupal.behaviors.avatarSelectionRadioHandler = {
    attach: function (context) {
      radio_button_handler();
      image_click_handler();
    }
  }
})(jQuery);

