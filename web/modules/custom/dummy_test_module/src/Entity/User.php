<?php

namespace Drupal\dummy_test_module\Entity;

use Drupal\dummy_test_module\LabelHandler;
use Drupal\user\Entity\User as CoreUser;

/**
 * Local replacement for User class.
 *
 * @package Drupal\dummy_test_module\Entity
 */
class User extends CoreUser {

  /**
   * {@inheritdoc}
   */
  public function label() {
    $labelHandler = new LabelHandler(parent::label());
    return $labelHandler->getReversed();
  }

}
