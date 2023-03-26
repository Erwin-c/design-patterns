/*
 * Demo.cc
 *
 *  Author: Erwin
 */

#include <iostream>

#include "UserMessageObserver.h"
#include "UserWallet.h"

int main() {
  UserWallet wallet;
  UserMessageObserver observer(&wallet);

  wallet.deposit(100.0);

  for (int i = 0; i < 95; ++i) {
    wallet.consume(1.0);
    std::cout << wallet.getBalence() << std::endl;
  }

  return 0;
}
