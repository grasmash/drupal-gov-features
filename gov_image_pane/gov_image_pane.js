(function ($) {

  Drupal.behaviors.govImagePane = {
    attach: function (context, settings) {
      // Preload all hover images.
      var cache = new Array();
      $('.field--name-field-image-pane-hover-image img').each(function(){
        var cacheImage = document.createElement('img');
        cacheImage.src = $(this).attr('src');
        cache.push(cacheImage);
      });

      // Hover behavior.
      $('.field--name-field-image-pane-hover-image', context).siblings('.field--name-field-image-pane-image', context).hover(function () {
        var img = $(this).find('img');
        // Save original src in img.rel.
        img.attr('rel', $(this).find('img').attr('src'));

        // Find hover src.
        var hoverSrc = $(this).siblings('.field--name-field-image-pane-hover-image', context).find('img').attr('src');
        img.attr('src', hoverSrc);
      }, function () {
        var img = $(this).find('img');
        img.attr('src', img.attr('rel'));
      });
    }
  };

})(jQuery);
