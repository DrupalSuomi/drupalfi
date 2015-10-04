<?php

function commerce_maksuturva_rules_action_info() {
  return array(
    'update_delivery_status' => array(
      'label' => t('Update order\'s delivery status to Maksuturva'),
      'parameter' => array(
        'commerce_order' => array(
          'label' => t('Order that has been delivered'),
          'type' => 'commerce_order',
        ),
        'delivery_method_id' => array(
          'type' => 'text',
          'label' => t('Delivery method id'),
          'options list' => 'commerce_maksuturva_delivery_id_options',
        ),
        'delivery_info' => array(
          'type' => 'text',
          'label' => t('Additional delivery information, a shipping tracking code for example.'),
        ),
      ),
      'base' => 'commerce_maksuturva_action_update_delivery_status',
      'group' => t('Commerce Maksuturva'),
    ),
  );
}

/**
 * Update order's delivery status to Maksuturva
 *
 * @param $order
 *   The order object that delivery applies to.
 */
function commerce_maksuturva_action_update_delivery_status($order, $delivery_method_id, $delivery_info) {
  // Load Commerce Maksuturva payment method instance with settings
  $payment_method = commerce_payment_method_instance_load($order->data['payment_method']);

  $private_key = _commerce_maksuturva_get_setting('private', $payment_method);
  $request = array(
    'pkg_version' => '0002',
    'pkg_sellerid' => _commerce_maksuturva_get_setting('seller_id', $payment_method),
    'pkg_id' => $order->data['commerce_maksuturva']['transaction']->transaction_id,
    'pkg_deliverymethodid' => $delivery_method_id,
    'pkg_adddeliveryinfo' => $delivery_info,
    'pkg_allsent' => 'Y',
    'pkg_forceupdate' => 'Y',
    'pkg_resptype' => 'XML',
    'pkg_hashversion' => 'MD5',
    'pkg_keygeneration' => _commerce_maksuturva_get_setting('keygeneration', $payment_method),
  );
  $request['pkg_hash'] = md5($request['pkg_id'] . '&' . $request['pkg_deliverymethodid'] . '&' . $request['pkg_allsent'] . '&' . $private_key . '&');

  // Build the http request and execute
  $host = _commerce_maksuturva_get_setting('service_host', $payment_method);
  $request_url = url($host . 'addDeliveryInfo.pmt', array('query' => $request));
  $response = drupal_http_request($request_url);

  // Convert response to XML object, response data seems to be in ISO-8859-1 so we need to convert it first
  $response_xml = new SimpleXMLElement(drupal_convert_to_utf8($response->data, 'ISO-8859-1'));

  // Check response data hash validity
  $hash_elements = array(
    'pkg_sellerid' => $response_xml->pkg_sellerid,
    'pkg_id' => $response_xml->pkg_id,
    'pkg_resultcode' => $response_xml->pkg_resultcode,
  );
  $hash_elements['private'] = $private_key;
  $hash = strtoupper(md5(implode('&', $hash_elements) . '&'));
  // Debugging
  // file_put_contents("/tmp/drupal.debug", print_r($response_xml, TRUE), FILE_APPEND);

  // Compare hash. If not valid, log the error and stop here.
  if($response_xml->pkg_hash != $hash) {
    watchdog('commerce_maksuturva', 'Delivery status update to Maksuturva failed. Hash mismatch.', WATCHDOG_WARNING);
    return;
  }

  // TODO: We should make a backup plan, if Maksuturva is not available for some reason
  // Propably create an item to Drupal Queue API that will redo the request at a later time
}

function commerce_maksuturva_delivery_id_options() {
  $options = array(
    'ITELL' => t('Itella traceable delivery'),
    'MATHU' => t('Matkahuolto traceable delivery'),
    'KAUKO' => t('Kaukokiito traceable delivery'),
    'TRANS' => t('Transpoint traceable delivery'),
    'KIITO' => t('Kiitolinja traceable'),
    'MYPAC' => t('MyPack traceable delivery'),
    'DBSCH' => t('DB Schenker traceable delivery'),
    'FEDEX' => t('FedEx traceable delivery'),
    'DHLDP' => t('DHL traceable delivery'),
    'TNTNV' => t('TNT traceable delivery'),
    'UPSAM' => t('UPS traceable delivery'),
    'UNREG' => t('Untraceable letter'),
    'PICKU' => t('Pickup'),
    'ODLVR' => t('Own delivery'),
    'SERVI' => t('Service'),
    'ELECT' => t('Electronic delivery'),
  );
  return $options;
}

