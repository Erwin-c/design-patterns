/*
 * main.cc
 *
 *  Author: Erwin
 */

#include "Test.h"

int main() {
  // Begin test
  Test::simpleFactoryTest();
  Test::factoryTest();
  Test::abstractFactoryTest();
  Test::singletonLazyTest();
  Test::singletonHungryTest();
  Test::proxyTest();
  Test::facadeTest();
  Test::adapterTest();
  Test::templateTest();

  return 0;
}
