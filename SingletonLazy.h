/*
 * SingletonLazy.h
 *
 *  Created on: Sep 3, 2022
 *      Author: Erwin
 */

#ifndef SINGLETON_LAZY_H_
#define SINGLETON_LAZY_H_

#include <iostream>

class SingletonLazy {
 public:
  static SingletonLazy* getInstance() {
    if (pSingleton == nullptr) {
      pSingleton = new SingletonLazy;
    }

    return pSingleton;
  }

  void show() { std::cout << "Singleton lazy" << std::endl; }

 private:
  SingletonLazy() { std::cout << "SingletonLazy()" << std::endl; }

  static SingletonLazy* pSingleton;
};

// This is essential
// Linking: undefined reference to `SingletonLazy::pSingleton'
SingletonLazy* SingletonLazy::pSingleton = nullptr;

#endif  // SINGLETON_LAZY_H_
