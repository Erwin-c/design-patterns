/*
 * Test.cc
 *
 *  Created on: Aug 30, 2022
 *      Author: Erwin
 */

#include "SimpleFactory.h"

namespace Test {

void simpleFactoryTest() {
  Fruit* fruit = SimpleFactory::createFruit("Apple");
  fruit->show();
  // TBD: warning: deleting object of abstract class type ‘Fruit’ which has
  // non-virtual destructor will cause undefined behavior
  // [-Wdelete-non-virtual-dtor]
  delete fruit;

  fruit = SimpleFactory::createFruit("Banana");
  fruit->show();
  delete fruit;

  return;
}

}  // namespace Test
