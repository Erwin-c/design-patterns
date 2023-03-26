/*
 * UserMessageObserver.h
 *
 *  Author: Erwin
 */

#ifndef USER_MESSAGE_OBSERVER_H_
#define USER_MESSAGE_OBSERVER_H_

#include "Observer.h"
#include "UserWallet.h"

class UserMessageObserver : public Observer {
 public:
  UserMessageObserver(UserWallet* wallet);

  virtual void update() override;

 private:
  UserWallet* wallet = nullptr;
};

#endif  // USER_MESSAGE_OBSERVER_H_
