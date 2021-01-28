<?php

namespace Drupal\dummy_test_module;

/**
 * Class to handle labels.
 *
 * @package Drupal\dummy_test_module
 */
class LabelHandler {

  /**
   * Label.
   *
   * @var string
   */
  private $label;

  /**
   * LabelHandler constructor.
   *
   * @param string $label
   *   Label.
   */
  public function __construct($label) {
    $this->label = $label;
  }

  /**
   * Get reversed label.
   *
   * @return string
   *   Reversed label.
   */
  public function getReversed() {
    return strrev($this->label);
  }

}
