<?php
/**
 * @file
 * ting_null_covers.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function ting_null_covers_field_group_info_alter(&$data) {
  if (isset($data['group_ting_right_col_collection|ting_object|ting_object|collection_list'])) {
    $data['group_ting_right_col_collection|ting_object|ting_object|collection_list']->data = array(
      'label' => 'Right column',
      'weight' => 2,
      'children' => array(
        0 => 'ting_type',
        1 => 'ting_series',
        2 => 'ting_abstract',
        3 => 'ting_author',
        4 => 'ting_subjects',
        5 => 'ding_entity_buttons',
      ),
      'format_type' => 'div',
    ); /* WAS: '' */
  }
  if (isset($data['group_ting_right_col_search|ting_object|ting_object|search_result'])) {
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['0'] = 'ting_series'; /* WAS: 'ting_title' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['1'] = 'ting_abstract'; /* WAS: 'ting_series' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['2'] = 'ting_author'; /* WAS: 'ting_abstract' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['weight'] = 2; /* WAS: 1 */
    unset($data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['3']);
  }
}
