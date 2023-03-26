/*
 * ThreadSec.cc
 *
 *  Author: Erwin
 */

#include <thread>

#include "DBConfig.h"

void func();

int main() {
  std::thread t1(func);
  std::thread t2(func);

  t1.join();
  t2.join();

  return 0;
}

void func() {
  for (int i = 0; i < 100; ++i) {
    DBConfig::getInstance();
  }

  return;
}
