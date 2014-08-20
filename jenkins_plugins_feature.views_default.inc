<?php
/**
 * @file
 * jenkins_plugins_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jenkins_plugins_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jenkins_plugins';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jenkins Plugins';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jenkins Plugins';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_wiki_url' => 'field_wiki_url',
    'field_title' => 'field_title',
    'field_excerpt' => 'field_excerpt',
    'field_developers' => 'field_developers',
    'field_labels' => 'field_labels',
    'field_cloudbees_approved' => 'field_cloudbees_approved',
  );
  $handler->display->display_options['style_options']['default'] = 'field_title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_wiki_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_excerpt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_developers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_labels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cloudbees_approved' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Wiki URL */
  $handler->display->display_options['fields']['field_wiki_url']['id'] = 'field_wiki_url';
  $handler->display->display_options['fields']['field_wiki_url']['table'] = 'field_data_field_wiki_url';
  $handler->display->display_options['fields']['field_wiki_url']['field'] = 'field_wiki_url';
  $handler->display->display_options['fields']['field_wiki_url']['label'] = '';
  $handler->display->display_options['fields']['field_wiki_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_wiki_url']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['path'] = '[field_wiki_url]';
  /* Field: Content: Excerpt */
  $handler->display->display_options['fields']['field_excerpt']['id'] = 'field_excerpt';
  $handler->display->display_options['fields']['field_excerpt']['table'] = 'field_data_field_excerpt';
  $handler->display->display_options['fields']['field_excerpt']['field'] = 'field_excerpt';
  $handler->display->display_options['fields']['field_excerpt']['element_label_colon'] = FALSE;
  /* Field: Content: developers */
  $handler->display->display_options['fields']['field_developers']['id'] = 'field_developers';
  $handler->display->display_options['fields']['field_developers']['table'] = 'field_data_field_developers';
  $handler->display->display_options['fields']['field_developers']['field'] = 'field_developers';
  $handler->display->display_options['fields']['field_developers']['label'] = 'Developers';
  $handler->display->display_options['fields']['field_developers']['delta_offset'] = '0';
  /* Field: Content: Labels */
  $handler->display->display_options['fields']['field_labels']['id'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['table'] = 'field_data_field_labels';
  $handler->display->display_options['fields']['field_labels']['field'] = 'field_labels';
  $handler->display->display_options['fields']['field_labels']['label'] = 'Label';
  $handler->display->display_options['fields']['field_labels']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_labels']['alter']['path'] = '[field_labels-tid]';
  $handler->display->display_options['fields']['field_labels']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_labels']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_labels']['delta_offset'] = '0';
  /* Field: Content: CloudBees Approved */
  $handler->display->display_options['fields']['field_cloudbees_approved']['id'] = 'field_cloudbees_approved';
  $handler->display->display_options['fields']['field_cloudbees_approved']['table'] = 'field_data_field_cloudbees_approved';
  $handler->display->display_options['fields']['field_cloudbees_approved']['field'] = 'field_cloudbees_approved';
  $handler->display->display_options['fields']['field_cloudbees_approved']['label'] = '';
  $handler->display->display_options['fields']['field_cloudbees_approved']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cloudbees_approved']['alter']['text'] = '<img src="/jenkins-plugins/sites/default/files/approved.png" />';
  $handler->display->display_options['fields']['field_cloudbees_approved']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'jenkins_plugin' => 'jenkins_plugin',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (field_title) */
  $handler->display->display_options['filters']['field_title_value']['id'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['table'] = 'field_data_field_title';
  $handler->display->display_options['filters']['field_title_value']['field'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_value']['expose']['operator_id'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['field_title_value']['expose']['operator'] = 'field_title_value_op';
  $handler->display->display_options['filters']['field_title_value']['expose']['identifier'] = 'field_title_value';
  $handler->display->display_options['filters']['field_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Labels (field_labels) */
  $handler->display->display_options['filters']['field_labels_tid']['id'] = 'field_labels_tid';
  $handler->display->display_options['filters']['field_labels_tid']['table'] = 'field_data_field_labels';
  $handler->display->display_options['filters']['field_labels_tid']['field'] = 'field_labels_tid';
  $handler->display->display_options['filters']['field_labels_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_labels_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_labels_tid']['expose']['operator_id'] = 'field_labels_tid_op';
  $handler->display->display_options['filters']['field_labels_tid']['expose']['label'] = 'Labels';
  $handler->display->display_options['filters']['field_labels_tid']['expose']['operator'] = 'field_labels_tid_op';
  $handler->display->display_options['filters']['field_labels_tid']['expose']['identifier'] = 'field_labels_tid';
  $handler->display->display_options['filters']['field_labels_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_labels_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_labels_tid']['vocabulary'] = 'tags';
  /* Filter criterion: Content: CloudBees Approved (field_cloudbees_approved) */
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['id'] = 'field_cloudbees_approved_tid';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['table'] = 'field_data_field_cloudbees_approved';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['field'] = 'field_cloudbees_approved_tid';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['expose']['operator_id'] = 'field_cloudbees_approved_tid_op';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['expose']['label'] = 'CloudBees Approved';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['expose']['operator'] = 'field_cloudbees_approved_tid_op';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['expose']['identifier'] = 'field_cloudbees_approved_tid';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cloudbees_approved_tid']['vocabulary'] = 'cloudbees_approved';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list';
  $export['jenkins_plugins'] = $view;

  return $export;
}
