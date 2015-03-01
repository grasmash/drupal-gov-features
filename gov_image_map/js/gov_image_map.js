(function ($) {
  Drupal.behaviors.govImageMap = {
    attach: function (context, settings) {

     // Extract all states data from Drupal settings object.
     var states = settings.gov_image_map.states_data;

     // Iterate over each <area> tag for the USA map.
     $('.image-map-wrapper map area').each(function() {
        var state_abbr = $(this).attr('title');

        // For any state with a defined URL, set the href attribute correctly.
        if (states.hasOwnProperty(state_abbr)) {
          var state = states[state_abbr];
          if (state.hasOwnProperty('url')) {
            $(this).attr('href', state.url);
          }
          if (state.hasOwnProperty('title')) {
            $(this).attr('title', state.title);
            $(this).attr('alt', state.title);
          }
        }
        // If no data was defined for this area tag's state, remove the tag.
        else {
          $(this).remove();
        }

      });
    }
  };
})(jQuery);
