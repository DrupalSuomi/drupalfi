<?php

declare(strict_types=1);

namespace Drupal\platform_footer\Plugin\Block;

use Drupal\Core\Block\BlockBase;

/**
 * Provides a block with Platform.sh sponsor footer.
 *
 * @Block(
 *   id = "platform_footer",
 *   admin_label = @Translation("Platform.sh sponsor footer block"),
 * )
 */
class PlatformFooterBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function build() {
    return [
      '#theme' => 'platform_footer',
    ];
  }
}
