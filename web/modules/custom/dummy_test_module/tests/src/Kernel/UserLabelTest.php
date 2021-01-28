<?php

namespace Drupal\Tests\dummy_test_module\Kernel;

use Drupal\dummy_test_module\Entity\User;
use Drupal\KernelTests\KernelTestBase;
use Drupal\user\Entity\User as CoreUser;

/**
 * @coversDefaultClass \Drupal\dummy_test_module\Entity\User
 *
 * @group custom
 */
class UserLabelTest extends KernelTestBase {

  /**
   * Entity type manager service.
   *
   * @var \Drupal\Core\Entity\EntityTypeManagerInterface
   */
  private $entityTypeManager;

  /**
   * {@inheritdoc}
   */
  protected static $modules = [
    'system',
    'user',
  ];

  /**
   * {@inheritdoc}
   */
  public function setUp() : void {
    parent::setUp();
    $this->entityTypeManager = $this->container->get('entity_type.manager');
  }

  /**
   * Test that label is not altered when module is not enabled.
   */
  public function testWithoutModule() {
    $storage = $this->entityTypeManager->getStorage('user');
    $user = $storage->create([
      'name' => 'Not Reversed User',
    ]);
    $this->assertEquals(CoreUser::class, get_class($user));
    $this->assertNotEquals(User::class, get_class($user));
    $this->assertEquals('Not Reversed User', $user->label());
  }

  /**
   * @covers ::label
   */
  public function testWithModule() {
    $this->enableModules(['dummy_test_module']);
    $storage = $this->entityTypeManager->getStorage('user');
    $user = $storage->create([
      'name' => 'Reversed user',
    ]);
    $this->assertEquals(User::class, get_class($user));
    $this->assertNotEquals(CoreUser::class, get_class($user));
    $this->assertEquals('resu desreveR', $user->label());
  }

}
