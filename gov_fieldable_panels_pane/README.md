## Overview

This module provides government specific customizations for fieldable panels
panes.

More specifically, it provides the following functionality:
  * OG specific permissions for FPP operations.
  * An OG-oriented replacement for the default FPP admin view.
  * Integration of OG hierarchies in FPP selection. FPP entities from current
    group *and* parent group of current group are made available for selection.
  * UI improvements to the FPP administration forms.
    * Enforce requirement of either a display title or admin title for each FPP.
    * Force all FPPs to be reusable
    * Hide confusing 'view_mode' field.
  * Simplified integration with features. Individual FPP entities are no longer
    exported via Features, thereby reducing bloat of features exports.
