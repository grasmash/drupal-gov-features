## Overview

This module provides core configuration for the user entity. This includes
defining user roles, user entity fields, and a large number of strongarm
variables related to users.

It also include the following custom functionality:
* Provides `gov_user_disable_user_form` variable. When set to TRUE, this hides
  the username and password fields from the user login form. This is helpful
  when using SAML-only login strategy.
* Removes the reset password page.
