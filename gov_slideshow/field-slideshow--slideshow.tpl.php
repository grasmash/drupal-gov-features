<?php
/**
 * @file
 * Template file for field_slideshow.
 *
 * @see gov_slideshow_preprocess_field_slideshow()
 */

// Should fix issue #1502772
// @todo: find a nicer way to fix this.
if (!isset($controls_position)):
  $controls_position = "after";
endif;
if (!isset($pager_position)):
  $pager_position = "after";
endif;
?>

<div id="field-slideshow-<?php print $slideshow_id; ?>-wrapper" class="field-slideshow-wrapper">
  <?php if ($controls_position == "before"):
    print (render($controls));
  endif;?>
  <?php if ($pager_position == "before"):
    print (render($pager));
  endif?>

  <?php if (isset($breakpoints) && isset($breakpoints['mapping']) && !empty($breakpoints['mapping'])):
    $style = 'height:' . $slides_max_height . 'px';
  else:
    $style = 'width:' . $slides_max_width . 'px; height:' . $slides_max_height . 'px';
  endif;?>

  <div class="<?php print $classes; ?>" style="<?php print $style; ?>">
    <?php foreach ($items as $num => $item) : ?>
      <div class="<?php print $item['classes']; ?>"<?php if ($num) : ?> style="display:none;"<?php endif; ?>>

        <?php print $item['image']; ?>

        <div class="field-slideshow-text" style="<?php print $item['style']['text']['css']; ?>">

          <?php if (isset($item['loaded_fields']['field_slide_date'])) : ?>
            <div class="field-slideshow-date">
              <span class="field-slideshow-date-text"><?php print render($item['loaded_fields']['field_slide_date']); ?></span>
            </div>
          <?php endif; ?>

          <?php if (isset($item['loaded_fields']['field_slide_title'])): ?>
            <div class="field-slideshow-title">
              <span class="field-slideshow-title-text"><?php print render($item['loaded_fields']['field_slide_title']); ?></span>
            </div>
          <?php endif; ?>

          <?php if (isset($item['loaded_fields']['field_slide_title'])) : ?>
            <div class="field-slideshow-caption">
              <span class="field-slideshow-caption-text"><?php print render($item['loaded_fields']['field_slide_caption']); ?></span>
            </div>
          <?php endif; ?>

          <?php
          // When a title for a link is not provided, link field makes the
          // url the title. When that is the case we do not want to display the
          // link as the image is the anchor.
          if (!empty($item['loaded_fields']['field_slide_link']['#items'][0]['title']) &&
              substr($item['loaded_fields']['field_slide_link']['#items'][0]['title'], 0, 80) != substr($item['loaded_fields']['field_slide_link']['#items'][0]['url'], 0, 80)): ?>
            <div class="field-slideshow-link">
              <span class="field-slideshow-link-text"><?php print render($item['loaded_fields']['field_slide_link']); ?></span>
            </div>
          <?php endif; ?>
        </div>

      </div>
    <?php endforeach; ?>
  </div>

  <div class="field-slideshow-footer">
    <?php if ($pager_position != "before"):
      print (render($pager));
    endif;?>
    <?php if ($controls_position != "before"):
      print (render($controls));
    endif;?>
  </div>
</div>
