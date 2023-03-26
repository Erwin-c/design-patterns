/*
 * UserWallet.h
 *
 *  Author: Erwin
 */

#ifndef USER_WALLET_H_
#define USER_WALLET_H_

#include <vector>

#include "Observer.h"

class UserWallet {
 public:
  void attachObserver(Observer* observer);

  void deposit(float p);
  void consume(float p);

  float getBalence();

 private:
  float balence = 0.0;
  std::vector<Observer*> observerVec;

  void notify();
};

#endif  // USER_WALLET_H_
