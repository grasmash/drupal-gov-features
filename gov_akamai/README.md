## Overview
This module provides government-specific customization for the implementation
of Akamai. Some of its functions include:
  * Preventing purge requests for /node/* paths (these should be blocked)
  * Integrating Akamai with Acquia purge. All purge requests will purge both
    Varnish and Akamai.
  * Unset Drupal core's form token usage, which is incompatible with CDNs
  * Override the default Akamai TTL on specific pages. Currently applies to
    * Nodes of type landing_page and organization
    * View displays of type page and rss
    
## To Do

* Determine which features should be submitted to Akamai module as patches
