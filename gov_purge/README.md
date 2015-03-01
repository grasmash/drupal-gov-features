## Overview

This module provides government specific customizations for the Acquia purge
module. More specifically, it provides the following functionality:
  * Contains all exportable configuration for acquia_purge and expire modules
  * Provides a new OG level 'Purge page block' permission 
  * Provides a 'Purge this page' block with OG specific access check
  * Ensures that when a page is purged, all associated redirects are also purged
  * Ensures that when a redirect is updated, the redirect and all associated
    redirects are also purged

## To Do

* Determine which features should be submitted to acquia_purge or expired 
  modules as patches
