/*
 * Factory.h
 *
 *  Created on: Sep 1, 2022
 *      Author: Erwin
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include <iostream>

class Shape {
 public:
  virtual ~Shape() { std::cout << "~Shape()" << std::endl; }

  virtual void show() = 0;
};

class Rectangle : public Shape {
 public:
  virtual void show() { std::cout << "Rectangle" << std::endl; }
};

class Square : public Shape {
 public:
  virtual void show() { std::cout << "Square" << std::endl; }
};

class Circle : public Shape {
 public:
  virtual void show() { std::cout << "Circle" << std::endl; }
};

class Factory {
 public:
  virtual ~Factory() { std::cout << "~Factory()" << std::endl; }

  virtual Shape* createShape() = 0;
};

class RectangleFactory : public Factory {
 public:
  virtual Shape* createShape() { return new Rectangle; }
};

class SquareFactory : public Factory {
 public:
  virtual Shape* createShape() { return new Square; }
};

class CircleFactory : public Factory {
 public:
  virtual Shape* createShape() { return new Circle; }
};

#endif  // FACTORY_H_
