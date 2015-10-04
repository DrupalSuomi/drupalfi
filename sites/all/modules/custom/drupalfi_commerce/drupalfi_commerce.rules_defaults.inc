<?php
/**
 * @file
 * drupalfi_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalfi_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_only_one_membership'] = entity_import('rules_config', '{ "rules_only_one_membership" : {
      "LABEL" : "Prevent to only one membership",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "commerce_line_item_update" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "commerce_product" } },
        { "data_is" : {
            "data" : [ "commerce-line-item:commerce-product:type" ],
            "value" : "membership"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:quantity" ],
            "op" : "\\u003E",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:quantity" ], "value" : "1" } }
      ]
    }
  }');
  return $items;
}
