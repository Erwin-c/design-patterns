/*
 * Test.cc
 *
 *  Created on: Aug 30, 2022
 *      Author: Erwin
 */

#include "AbstractFactory.h"
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
  Factory* factory = nullptr;
  Shape* shape = nullptr;

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

void abstractFactoryTest() {
  AbstractFactory* factory = nullptr;
  AbstractPencil* pencil = nullptr;
  AbstractRubber* rubber = nullptr;
  AbstractNotebook* notebook = nullptr;

  factory = new ChineseFactory;
  pencil = factory->createPencil();
  pencil->show();
  rubber = factory->createRubber();
  rubber->show();
  notebook = factory->createNotebook();
  // TBD: warning: deleting object of abstract class type ‘AbstractPencil’ which
  // has non-virtual destructor will cause undefined behavior
  // [-Wdelete-non-virtual-dtor]
  notebook->show();
  delete pencil;
  delete rubber;
  delete notebook;
  delete factory;

  factory = new AmericanFactory;
  pencil = factory->createPencil();
  pencil->show();
  rubber = factory->createRubber();
  rubber->show();
  notebook = factory->createNotebook();
  notebook->show();
  delete pencil;
  delete rubber;
  delete notebook;
  delete factory;

  factory = new JapaneseFactory;
  pencil = factory->createPencil();
  pencil->show();
  rubber = factory->createRubber();
  rubber->show();
  notebook = factory->createNotebook();
  notebook->show();
  delete pencil;
  delete rubber;
  delete notebook;
  delete factory;

  return;
}

}  // namespace Test
