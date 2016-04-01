# Drupal-7-Exp-Module---redirect_403_parent
Module to redirect 403 (Access Denied) to parent, used for unpublished nodes

**Experimental Module: Do not use in production**


A lot of the code is copied from the Redirect 403 to User Login module: https://www.drupal.org/project/r4032login

Usage:

1. Install Module. Note that installation will currently overwrite the Default 403 (access denied) page in /admin/config/system/site-information, any values already written there **will not be retrievable.**

2. Additional Configuration found at: /admin/config/system/site-information
