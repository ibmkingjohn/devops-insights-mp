(function ($) {
	$(document).ready(function() {

		$('.shave-formatter.shave-module').each(function(){
			$this = $(this);

			// Getting all classes of current element.
			var classList = $this.attr('class').split(/\s+/);
			$.each(classList, function(index, item) {
				var class_split = item.split('-');
				var size = class_split.length == 3 ? class_split[2] : 0;
				
				// if (size > 0) then call the shave() function.
				if( size > 0 ) {
					shave('.shave-formatter.shave-format-'+ size, size);
				}
			});
		});
	});
})(jQuery);