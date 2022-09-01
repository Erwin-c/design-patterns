/*
 * SimpleFactory.h
 *
 *  Created on: Aug 30, 2022
 *      Author: Erwin
 */

#ifndef SIMPLE_FACTORY_H_
#define SIMPLE_FACTORY_H_

#include <iostream>
#include <string>

class Fruit {
 public:
  virtual void show() = 0;
};

class Apple : public Fruit {
 public:
  virtual void show() { std::cout << "Apple" << std::endl; }
};

class Banana : public Fruit {
 public:
  virtual void show() { std::cout << "Banana" << std::endl; }
};

class Pear : public Fruit {
 public:
  virtual void show() { std::cout << "Pear" << std::endl; }
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
    } else {
      return NULL;
    }
  }
};

#endif  // SIMPLE_FACTORY_H_
