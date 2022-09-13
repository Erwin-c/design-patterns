/*
 * Adapter.h
 *
 *  Author: Erwin
 */

class Print {
 public:
  void operator()(int v1, int v2) {
    std::cout << v1 + v2 << std::endl;
    return;
  }
};

class Target {
 public:
  virtual void operator()(int v) = 0;
};

class Adapter : public Target {
 public:
  Adapter(int param) { this->param = param; }

  virtual void operator()(int v) {
    print(v, param);
    return;
  }

 private:
  Print print;
  int param;
};

Adapter Bind(int v) { return Adapter(v); }
