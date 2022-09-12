/*
 * Proxy.h
 *
 *  Author: Erwin
 */

#ifndef PROXY_H_
#define PROXY_H_

class CommonInterface {
 public:
  virtual void run() = 0;
};

class System : public CommonInterface {
 public:
  virtual ~System() { std::cout << "~System()" << std::endl; }

  virtual void run() {
    std::cout << "System run()" << std::endl;
    return;
  }
};

// Eg: Authentication check
class Proxy : public CommonInterface {
 public:
  Proxy(const std::string& username, const std::string& password) {
    this->username = username;
    this->password = password;
    pSystem = new System;
  }

  bool authCheck() {
    if (username == "admin" && password == "admin") {
      return true;
    }

    return false;
  }

  virtual void run() {
    if (authCheck()) {
      this->pSystem->run();
    } else {
      std::cout << "Username or password is invalid!" << std::endl;
    }

    return;
  }

  // TBD: If 'virtual' needed
  ~Proxy() {
    if (pSystem != nullptr) {
      delete pSystem;
    }
  }

 private:
  System* pSystem;
  std::string username;  // TBD: Why not need <string>
  std::string password;
};

#endif  // PROXY_H_
