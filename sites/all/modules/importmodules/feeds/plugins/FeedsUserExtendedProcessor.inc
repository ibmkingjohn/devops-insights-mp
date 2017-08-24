<?php
/**
 * @file
 * FeedsUserExtendedProcessor class.
 * jwk 01/14/2014 added so user bulk upload will send email notficaitons of registered user.
 */
/**
 * Feeds processor plugin. Create users from feed items.
 */
class FeedsUserExtendedProcessor extends FeedsUserProcessor {
  /**
  * Override parent::configDefaults().
  */
  public function configDefaults() {
    return array(
      'send_mail' => FALSE,
    ) + parent::configDefaults();
  }
  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = parent::configForm($form_state);
    $form['send_mail'] = array(
        '#type' => 'checkbox',
        '#title' => t('Send new account notification'),
        '#description' => t('This will send new account notification to newly imported users.'),
        '#default_value' => $this->config['send_mail'],
    );
    return $form;
  }
  /**
   * Save a user account.
   */
  protected function entitySave($account) {
    $mail = !$account->uid;
    parent::entitySave($account);
    if ($mail) {
     //  _user_mail_notify('register_admin_created', $account);
   //  _user_mail_notify('register_no_approval_required', $account);
    }
  }
}
?>