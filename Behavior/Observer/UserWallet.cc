/*
 * UserWallet.cc
 *
 *  Author: Erwin
 */

#include "UserWallet.h"

void UserWallet::attachObserver(Observer* observer) {
  observerVec.emplace_back(observer);
  return;
}

void UserWallet::deposit(float p) {
  balence += p;
  return;
}

void UserWallet::consume(float p) {
  balence -= p;

  notify();

  return;
}

float UserWallet::getBalence() { return balence; }

void UserWallet::notify() {
  for (int i = 0; i < (int)observerVec.size(); ++i) {
    observerVec[i]->update();
  }

  return;
}
