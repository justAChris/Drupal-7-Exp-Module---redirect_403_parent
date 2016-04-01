<?php

/**
 * @file
 * Variable information.
 */

/**
 * Implements hook_variable_info().
 */
function redirect_403_parent_variable_info($options) {
  $variables['redirect_403_parent_match_redirect_code'] = array(
    'type' => 'select',
    'title' => t("HTTP redirect code to use for matching pages"),
    'description' => t('The redirect code to send for paths that match. 301 responses may be cached by browsers and proxies.'),
    'default' => 301,
  );
  $variables['redirect_403_parent_match_redirect_pages'] = array(
    'type' => 'drupal_path',
    'title' => t('Specify matching pages by using their paths.'),
    'default' =>  '',
    'description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
    'group' => 'redirect_403_parent',
  );
  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function redirect_403_parent_variable_group_info() {
  $groups['redirect_403_parent'] = array(
    'title' => t('Redirect 403 to Parent in Path'),
    'description' => t('Redirect anonymous users from 403 Access Denied pages to the desired node's parent in path.'),
    'access' => 'administer site configuration',
    'path' => array('admin/config/system/site-information'),
  );

  return $groups;
}
