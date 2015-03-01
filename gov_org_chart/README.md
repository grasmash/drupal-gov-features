## Overview

This module defines the Org Chart content type, which provides three ways
to display an org chart: list, graphic, and chart.

### Mechanics of display:
The list view is rendered by embedding a view on the default full node display
page. The other two displays are provided via custom menu callbacks, which 
also display an embedded view.

### Chart

This display renders an embedded view. The view contains css classes that are
associated with the beautytips module, which displays modal popups for areas
clicked on an image map.
