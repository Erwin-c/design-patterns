/*
 * SingletonHungry.h
 *
 *  Author: Erwin
 */

#ifndef SINGLETON_HUNGRY_H_
#define SINGLETON_HUNGRY_H_

#include <iostream>

class SingletonHungry {
 public:
  static SingletonHungry* getInstance() { return pSingleton; }

  void show() {
    std::cout << "Singleton hungry" << std::endl;
    return;
  }

 private:
  // Called before main()
  SingletonHungry() { std::cout << "SingletonHungry()" << std::endl; }

  static SingletonHungry* pSingleton;
};

SingletonHungry* SingletonHungry::pSingleton = new SingletonHungry;

#endif  // SINGLETON_HUNGRY_H_
