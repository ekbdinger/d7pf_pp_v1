<?php
/**
 * @file
 * d7pf_pp_v1.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function d7pf_pp_v1_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'd7pf_pp_v1';
  $page->task = 'page';
  $page->admin_title = 'd7pf_pp_v1';
  $page->admin_description = 'This is a test of using Panel Pages to make a Primary page';
  $page->path = 'pp/%pp/';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'pp' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          3 => '3',
          2 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          5 => 0,
          9 => 0,
          7 => 0,
          8 => 0,
          14 => 0,
          15 => 0,
          6 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_d7pf_pp_v1_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'd7pf_pp_v1';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'node',
        'id' => 1,
        'identifier' => 'Node',
        'keyword' => 'node',
        'context_settings' => array(
          'node' => 'Vitals Primary Page (test) [nid: 10025]',
          'nid' => '10025',
        ),
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:d7pf_pp_v1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => array(),
      'pp_top' => array(),
      'setup' => NULL,
      'option1' => array(),
      'option3' => NULL,
      'option4' => NULL,
      'right_links' => array(
        'list_type' => 'ul',
      ),
    ),
    'right_links' => array(
      'style' => 'list',
    ),
    'style' => 'stylizer',
    'center' => array(
      'style' => 'stylizer',
    ),
    'pp_top' => array(
      'style' => 'stylizer',
    ),
    'option1' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = '%pp:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'option1';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_6',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Primary Info',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:blue_back',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['option1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'option1';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_7',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Optional Features',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:blue_back',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['option1'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'option1';
    $pane->type = 'views';
    $pane->subtype = 'pp_videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Videos',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'stylizer:blue_back',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['option1'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'pp_top';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer:blue_back',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-4'] = $pane;
    $display->panels['pp_top'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'd7pf_security_atts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '100',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Security Attributes',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer',
      'settings' => array(
        'style' => '$',
        'settings' => array(
          'name' => '_temporary',
          'style_base' => 'pane_plain_box',
          'palette' => array(
            'background' => '#FFFFFF',
            'text' => '#000000',
            'border' => '#000000',
            'header-background' => '#FFFFFF',
            'header-text' => '#000000',
            'header-border' => '#000000',
          ),
          'font' => array(
            'font' => '',
            'size' => '',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => '',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'header_font' => array(
            'font' => '',
            'size' => 'medium',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => '',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => 'left',
          ),
          'border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'header_border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'padding' => array(
            'top' => '0.1em',
            'right' => '',
            'bottom' => '',
            'left' => '1.0em',
          ),
        ),
      ),
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pplinksclass',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['right_links'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_3',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Setup',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer',
      'settings' => array(
        'style' => '$',
        'settings' => array(
          'name' => '_temporary',
          'style_base' => 'pane_plain_box',
          'palette' => array(
            'background' => '#FFFFFF',
            'text' => '#000000',
            'border' => '#000000',
            'header-background' => '#FFFFFF',
            'header-text' => '#000000',
            'header-border' => '#000000',
          ),
          'font' => array(
            'font' => '',
            'size' => '',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => '',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'header_font' => array(
            'font' => '',
            'size' => 'medium',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => 'bold',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'header_border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'padding' => array(
            'top' => '',
            'right' => '',
            'bottom' => '',
            'left' => '',
          ),
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right_links'][1] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'right_links';
    $pane->type = 'views';
    $pane->subtype = 'pp_cck_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'page_5',
      'context' => array(
        0 => 'argument_term_1.name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Item Keys',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'style' => '$',
        'settings' => array(
          'name' => '_temporary',
          'style_base' => 'pane_plain_box',
          'palette' => array(
            'background' => '#FFFFFF',
            'text' => '#000000',
            'border' => '#000000',
            'header-background' => '#FFFFFF',
            'header-text' => '#000000',
            'header-border' => '#000000',
          ),
          'font' => array(
            'font' => '',
            'size' => '',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => '',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'header_font' => array(
            'font' => '',
            'size' => 'medium',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => 'bold',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'header_border' => array(
            'thickness' => '',
            'style' => '',
          ),
          'padding' => array(
            'top' => '',
            'right' => '',
            'bottom' => '',
            'left' => '',
          ),
        ),
      ),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['right_links'][2] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['d7pf_pp_v1'] = $page;

  return $pages;

}
