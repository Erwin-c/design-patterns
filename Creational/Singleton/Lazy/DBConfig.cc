/*
 * DBCongfig.cc
 *
 *  Author: Erwin
 */

#include "DBConfig.h"

#include <fstream>
#include <iostream>
#include <mutex>

DBConfig* volatile DBConfig::config = nullptr;
std::mutex mtx;

DBConfig* DBConfig::getInstance() {
  if (config == nullptr) {
    std::lock_guard<std::mutex> guard(mtx);

    if (config == nullptr) {
      config = new DBConfig();
    }
  }

  return config;
}

std::string DBConfig::getConn() { return conn; }

std::string DBConfig::getUsername() { return username; }

std::string DBConfig::getPassword() { return password; }

DBConfig::DBConfig() {
  // Read Config.
  std::fstream fs(
      "/home/erwin/Coding/design-patterns/Creational/Singleton/config.txt");
  char tempStr[1024];
  int index = 0;
  while (fs.getline(tempStr, 1024)) {
    if (index == 0) {
      conn = tempStr;
    } else if (index == 1) {
      username = tempStr;
    } else if (index == 2) {
      password = tempStr;
    }
    ++index;
  }

  printf("Read config from file.\n");
}
