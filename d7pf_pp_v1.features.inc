<?php
/**
 * @file
 * d7pf_pp_v1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function d7pf_pp_v1_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
