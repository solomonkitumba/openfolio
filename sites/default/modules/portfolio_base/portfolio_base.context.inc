<?php
/**
 * @file
 * portfolio_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function portfolio_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'index_page';
  $context->description = 'all effects on the index page';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-projects-block_1' => array(
          'module' => 'views',
          'delta' => 'projects-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-projects-block_2' => array(
          'module' => 'views',
          'delta' => 'projects-block_2',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'views-worked_for-block' => array(
          'module' => 'views',
          'delta' => 'worked_for-block',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all effects on the index page');
  t('pages');
  $export['index_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'menu-menu-top-right-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-right-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'site wide context';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-worked_for-block' => array(
          'module' => 'views',
          'delta' => 'worked_for-block',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('site wide context');
  $export['sitewide'] = $context;

  return $export;
}
