/*
 * UserMessageObserver.cc
 *
 *  Author: Erwin
 */

#include "UserMessageObserver.h"

#include <iostream>

UserMessageObserver::UserMessageObserver(UserWallet* wallet) {
  this->wallet = wallet;
  this->wallet->attachObserver(this);
}

void UserMessageObserver::update() {
  // Notify.
  std::cout << "UserMessageObserver::update()." << std::endl;

  if (wallet->getBalence() <= 5) {
    std::cout << "wallet->getBalence() <= 5." << std::endl;
  }

  return;
}
