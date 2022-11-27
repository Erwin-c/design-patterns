/*
 * DBCongfig.h
 *
 *  Author: Erwin
 */

#ifndef DB_CONFIG_H_
#define DB_CONFIG_H_

#include <string>

class DBConfig {
 public:
  static DBConfig* getInstance();

  DBConfig(const DBConfig& config) = delete;
  DBConfig& operator=(const DBConfig& config) = delete;

  std::string getConn();
  std::string getUsername();
  std::string getPassword();

 private:
  static DBConfig* config;

  std::string conn;
  std::string username;
  std::string password;

  DBConfig();
};

#endif  // DB_CONFIG_H_
