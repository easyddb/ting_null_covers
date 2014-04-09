<?php
/**
 * @file
 * ting_null_covers.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ting_null_covers_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ting_right_col_collection|ting_object|ting_object|collection_list.data"] = array(
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
  );
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|0"] = 'ting_series';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|1"] = 'ting_abstract';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|2"] = 'ting_author';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|3"]["DELETED"] = TRUE;
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|weight"] = 2;

 return $overrides;
}
