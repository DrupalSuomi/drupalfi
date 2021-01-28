<?php

namespace Drupal\Tests\dummy_test_module\Functional;

use Drupal\dummy_test_module\Entity\User;
use Drupal\Tests\BrowserTestBase;

/**
 * Test that user label is reversed in user page.
 *
 * @group custom
 */
class UserPageTest extends BrowserTestBase {

  /**
   * {@inheritdoc}
   */
  protected static $modules = ['dummy_test_module'];

  /**
   * {@inheritdoc}
   */
  protected $defaultTheme = 'stark';

  /**
   * {@inheritdoc}
   */
  public function setUp() : void {
    parent::setUp();
    $user = $this->drupalCreateUser([], 'Reversed User');
    $this->assertInstanceOf(User::class, $user);
    $this->assertEquals(2, $user->id());
    $this->drupalLogin($user);
  }

  /**
   * Test that the user label is reversed.
   */
  public function testUserPage() {
    $this->drupalGet('user/2');
    $this->assertSession()->statusCodeEquals(200);

    $this->assertSession()->pageTextContains('Reversed User');
    $this->assertSession()->pageTextNotContains('resU desreveR');
    // Oh wait, did that just pass?
    $this->assertEquals('resU desreveR', $this->loggedInUser->label());
  }

}
