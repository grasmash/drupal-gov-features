<?php

/**
 * @file
 * Theme org chart nodes.
 *
 * - $view: The rendered view.
 * - $tabs: The org chart tabs
 */
?>

<div class="org-chart-tabs clearfix">
  <span>Switch Views</span>
  <?php print render($tabs); ?>
</div>

<?php print render(field_view_field("node", $node, "field_org_chart_header", "full")); ?>

<?php if (isset($image_map)): ?>
  <?php print render($image_map); ?>
<?php endif; ?>

<?php print $view; ?>

<?php print render(field_view_field("node", $node, "field_org_chart_footer", "full")); ?>
