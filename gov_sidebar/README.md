## Overview

This module provides the 'sidebar' node type. Each 'organization' node may
have one or more sidebars. The sidebar is intended to be shared among all pages
belonging to a given organization, thereby mimicking a micro site layout.

Sidebar nodes are optionally displayed in the second_sidebar region on 
non-panelized pages. They may be hidden via use of the 'no_right_sidebar' node
context, which is available for most non-panelized node types.

Sidebars are themselves panelized. Site admins may edit a sidebar node on any
organization page that displays the sidebar. Sidebar nodes may not be directly
visited.

The mechanics of sidebar display are as follows:
  * The block display of the og_sidebar view is placed in the second_sidebar
    region.
    * The query for this is cached for 6 days, since it almost never changes.
    * The markup for this view is never cached for authenticated users, as that 
      would break Panels IPE. It is, however, cached for anonymous users.
  * The view uses og_context to determine which sidebar should be displayed. 
    The fully rendered, panelized sidebar is then displayed.

Additionally, this module provide the following custom functionality:
* Automatic sidebar creation. When the `gov_sidebar_autocreate` variable is
  set to true, an associated sidebar node will be created for any newly created 
  organization node.
* Sidebar deletion prevention. Sidebars cannot be deleted unless the associated
  organization is deleted, in which case the sidebar is deleted automatically.
