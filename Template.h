/*
 * Template.h
 *
 *  Author: Erwin
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

class Template {
 public:
  virtual ~Template() { std::cout << "~Template()" << std::endl; }

  virtual void boildWater() = 0;

  virtual void brew() = 0;

  virtual void pour() = 0;

  virtual void add() = 0;

  void make() {
    boildWater();
    brew();
    pour();
    add();

    return;
  }
};

class Coffee : public Template {
 public:
  void boildWater() {
    std::cout << "Coffee boildWater()" << std::endl;
    return;
  }

  void brew() {
    std::cout << "Coffee brew()" << std::endl;
    return;
  }

  void pour() {
    std::cout << "Coffee pour()" << std::endl;
    return;
  }

  void add() {
    std::cout << "Coffee add()" << std::endl;
    return;
  }
};

#endif  // TEMPLATE_H_
