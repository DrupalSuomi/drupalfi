<?php

namespace Drupal\Tests\dummy_test_module\Unit;

use Drupal\dummy_test_module\LabelHandler;
use Drupal\Tests\UnitTestCase;

/**
 * @coversDefaultClass \Drupal\dummy_test_module\LabelHandler
 *
 * @group custom
 */
class LabelHandlerTest extends UnitTestCase {

  /**
   * @covers ::getReversed
   */
  public function testUserHookExists() {
    $label = 'User Name';
    $labelHandler = new LabelHandler($label);
    $this->assertEquals('emaN resU', $labelHandler->getReversed());
  }

}
