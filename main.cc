/*
 * main.cc
 *
 *  Created on: Aug 30, 2022
 *      Author: Erwin
 */

#include "Test.h"

int main() {
  // Begin test
  Test::simpleFactoryTest();
  Test::factoryTest();
  Test::abstractFactoryTest();
  Test::singletonLazyTest();
  Test::singletonHungryTest();

  return 0;
}
