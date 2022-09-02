/*
 * AbstractFactory.h
 *
 *  Created on: Sep 2, 2022
 *      Author: Erwin
 */

#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_

#include <iostream>

class AbstractPencil {
 public:
  virtual void show() = 0;
};

class ChinesePencil : public AbstractPencil {
 public:
  virtual void show() { std::cout << "Chinese pencil" << std::endl; }
};

class AmericanPencil : public AbstractPencil {
 public:
  virtual void show() { std::cout << "American pencil" << std::endl; }
};

class JapanesePencil : public AbstractPencil {
 public:
  virtual void show() { std::cout << "Japanese pencil" << std::endl; }
};

class AbstractRubber {
 public:
  virtual void show() = 0;
};

class ChineseRubber : public AbstractRubber {
 public:
  virtual void show() { std::cout << "Chinese Rubber" << std::endl; }
};

class AmericanRubber : public AbstractRubber {
 public:
  virtual void show() { std::cout << "American Rubber" << std::endl; }
};

class JapaneseRubber : public AbstractRubber {
 public:
  virtual void show() { std::cout << "Japanese Rubber" << std::endl; }
};

class AbstractNotebook {
 public:
  virtual void show() = 0;
};

class ChineseNotebook : public AbstractNotebook {
 public:
  virtual void show() { std::cout << "Chinese Notebook" << std::endl; }
};

class AmericanNotebook : public AbstractNotebook {
 public:
  virtual void show() { std::cout << "American Notebook" << std::endl; }
};

class JapaneseNotebook : public AbstractNotebook {
 public:
  virtual void show() { std::cout << "Japanese Notebook" << std::endl; }
};

class AbstractFactory {
 public:
  virtual AbstractPencil* createPencil() = 0;
  virtual AbstractRubber* createRubber() = 0;
  virtual AbstractNotebook* createNotebook() = 0;
};

class ChineseFactory : public AbstractFactory {
  virtual AbstractPencil* createPencil() { return new ChinesePencil; }
  virtual AbstractRubber* createRubber() { return new ChineseRubber; }
  virtual AbstractNotebook* createNotebook() { return new ChineseNotebook; }
};

class AmericanFactory : public AbstractFactory {
  virtual AbstractPencil* createPencil() { return new AmericanPencil; }
  virtual AbstractRubber* createRubber() { return new AmericanRubber; }
  virtual AbstractNotebook* createNotebook() { return new AmericanNotebook; }
};

class JapaneseFactory : public AbstractFactory {
  virtual AbstractPencil* createPencil() { return new JapanesePencil; }
  virtual AbstractRubber* createRubber() { return new JapaneseRubber; }
  virtual AbstractNotebook* createNotebook() { return new JapaneseNotebook; }
};

#endif  // ABSTRACT_FACTORY_H_
