<?php
/**
 * @file
 * footer_block_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function footer_block_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_footer_block_content';
  $strongarm->value = '<div class="footer-left">
<p>Copyright Suomen Drupal -yhdistys © 2014. Kaikki oikeudet pidätetään. Drupal on <a href="http://drupal.com/trademark">Dries Buytaertin</a> <a href="http://drupal.com/trademark">rekisteröity tavaramerkki.</a></p>
</div><div class="platform_sh_widget">Hosting sponsored by the <a title="platform.sh" href="http://platform.sh/?medium=referral&utm_campaign=sponsored_sites&utm_source=drupal_fi"><img class="platformsh-logo" src="https://platform.sh/images/logo-dark-2x.png" alt="platform.sh logo" style="padding: 0 3px 0 3px;height: 1.1em; vertical-align: text-bottom;"/></a> <a href="http://platform.sh/?medium=referral&utm_campaign=sponsored_sites&utm_source=drupal_fi">Drupal Cloud Hosting</a> Service</div>';
  $export['drupalfi_footer_block_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_footer_block_title';
  $strongarm->value = '<none>';
  $export['drupalfi_footer_block_title'] = $strongarm;

  return $export;
}
