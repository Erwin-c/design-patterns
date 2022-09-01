/*
 * Test.cc
 *
 *  Created on: Aug 30, 2022
 *      Author: Erwin
 */

#include "Factory.h"
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

  fruit = SimpleFactory::createFruit("Pear");
  fruit->show();
  delete fruit;

  return;
}

void factoryTest() {
  Factory* factory = NULL;
  Shape* shape = NULL;

  factory = new RectangleFactory;
  shape = factory->createShape();
  shape->show();
  // TBD: warning: deleting object of abstract class type ‘Fruit’ which has
  // non-virtual destructor will cause undefined behavior
  // [-Wdelete-non-virtual-dtor]
  delete factory;
  delete shape;

  factory = new SquareFactory;
  shape = factory->createShape();
  shape->show();
  delete factory;
  delete shape;

  factory = new CircleFactory;
  shape = factory->createShape();
  shape->show();
  delete factory;
  delete shape;

  return;
}

}  // namespace Test
