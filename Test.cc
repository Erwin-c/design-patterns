/*
 * Test.cc
 *
 *  Author: Erwin
 */

#include <vector>

#include "AbstractFactory.h"
#include "Adapter.h"
#include "Facade.h"
#include "Factory.h"
#include "Proxy.h"
#include "SimpleFactory.h"
#include "SingletonHungry.h"
#include "SingletonLazy.h"

namespace Test {

void simpleFactoryTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start simple factory test:" << std::endl;

  Fruit* fruit = SimpleFactory::createFruit("Apple");
  fruit->show();
  delete fruit;

  fruit = SimpleFactory::createFruit("Banana");
  fruit->show();
  delete fruit;

  fruit = SimpleFactory::createFruit("Pear");
  fruit->show();
  delete fruit;

  std::cout << "End ^-^" << std::endl;

  return;
}

void factoryTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start factory test:" << std::endl;

  Factory* factory = nullptr;
  Shape* shape = nullptr;

  factory = new RectangleFactory;
  shape = factory->createShape();
  shape->show();
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

  std::cout << "End ^-^" << std::endl;

  return;
}

void abstractFactoryTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start abstract factory test:" << std::endl;

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

  std::cout << "End ^-^" << std::endl;

  return;
}

void singletonLazyTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start singleton lazy test:" << std::endl;

  SingletonLazy* singleton = SingletonLazy::getInstance();
  singleton->show();

  std::cout << "End ^-^" << std::endl;

  return;
}

void singletonHungryTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start singleton hungry test:" << std::endl;

  SingletonHungry* singleton = SingletonHungry::getInstance();
  singleton->show();

  std::cout << "End ^-^" << std::endl;

  return;
}

void proxyTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start proxy test:" << std::endl;

  Proxy* proxy = new Proxy("root", "root");
  proxy->run();

  Proxy* proxy2 = new Proxy("admin", "admin");
  proxy2->run();

  std::cout << "End ^-^" << std::endl;

  return;
}

void facadeTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start facade test:" << std::endl;
  KTVMode* ktv = new KTVMode;

  ktv->onKtv();
  ktv->offKtv();

  std::cout << "End ^-^" << std::endl;

  return;
}

void adapterTest() {
  std::cout << "-------------------------------------------------" << std::endl;
  std::cout << "Start adapter test:" << std::endl;

  std::vector<int> v{1, 2, 3, 4, 5};

  std::for_each(v.begin(), v.end(), Bind(55));

  std::cout << "End ^-^" << std::endl;

  return;
}

}  // namespace Test
