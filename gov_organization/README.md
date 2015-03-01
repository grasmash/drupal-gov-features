## Overview

This module provides the 'organization' content type, which is intended to be
used for creating organic groups and grouping the vast majority of site content.
It also provides the og_group_ref field base, and most configuration related
to organic groups.

Organic groups 2.x assigns group membership via use of the og_group_ref field,
which is included in this feature. All features utilizing Organic Groups must
rely on this feature.

Additionally, this feature provides the following custom functionality:
* Two new blocks:
  * OG Menu : single (superfish). A dropdown version of the default OG menu.
  * OG Menu : single, second. If a group has more than one menu, this shows
    the second one created.
