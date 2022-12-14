/*
 * SimpleFactory.h
 *
 *  Author: Erwin
 */

#ifndef SIMPLE_FACTORY_H_
#define SIMPLE_FACTORY_H_

#include <iostream>
#include <string>

class Fruit {
 public:
  // The virtual deconstructor is necessary
  // warning: deleting object of abstract class type ‘Fruit’ which has
  // non-virtual destructor will cause undefined behavior
  // [-Wdelete-non-virtual-dtor]
  virtual ~Fruit() { std::cout << "~Fruit()" << std::endl; }

  virtual void show() = 0;
};

class Apple : public Fruit {
 public:
  virtual void show() {
    std::cout << "Apple" << std::endl;
    return;
  }
};

class Banana : public Fruit {
 public:
  virtual void show() {
    std::cout << "Banana" << std::endl;
    return;
  }
};

class Pear : public Fruit {
 public:
  virtual void show() {
    std::cout << "Pear" << std::endl;
    return;
  }
};

class SimpleFactory {
 public:
  static Fruit* createFruit(const std::string& name) {
    if (name == "Apple") {
      return new Apple;
    } else if (name == "Banana") {
      return new Banana;
    } else if (name == "Pear") {
      return new Pear;
    }

    return nullptr;
  }
};

#endif  // SIMPLE_FACTORY_H_
