INSTALLING COMMERCE MAKSUTURVA MODULE
-------------------------------------

1. Download latest module from http://drupal.org/project/commerce_maksuturva

2. Enable Commerce Maksuturva module as usual: /admin/modules

3. Make sure cron is running frequently. At least once an hour is recommended.


CONFIGURING PAYMENT METHOD
--------------------------

All payment method settings are in the Maksuturva payment method rule
configuration page.

1. Go to Maksuturva payment method rule config:
   /admin/config/workflow/rules/reaction/manage/commerce_payment_commerce_maksuturva

2. Edit action: "Enable payment method: Maksuturva"

3. Add your custom configurations or use test accounts


SETTING UP DELIVERY WORKFLOW
----------------------------

Maksuturva compensates funds after products/services have been delivered
and the customer has approved the deal. Commerce Maksuturva provides custom
Rules event and action to handle automated delivery process.

Simple workflow example:

1. Create a new reaction rule in: /admin/config/workflow/rules/reaction/add

2. Define rule name, e.g. "Update order delivery status after verified payment"

3. Set "React on event": "Commerce Maksuturva > When the payment has been verified"

4. Add action: "Commerce Maksuturva > Update order's delivery status to Maksuturva"

5. Configure "Order that has been delivered": Set to value "commerce-order"

6. Configure "Delivery method ID": Choose a preferred delivery method

7. Configure "Additional delivery information": Add additional delivery information

8. Save rule

Rules should now automatically update delivery status in Maksuturuva, when the
payment has been verified in Maksuturva's end.


CREDITS
-------

Commerce Maksuturva integration has been written by Juha Niemi and Mikael Kundert
and it's sponsored by Mearra.

http://drupal.org/user/157732
http://drupal.org/user/581242
http://mearra.com