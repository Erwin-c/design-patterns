/*
 * Lazy.cc
 *
 *  Author: Erwin
 */

#include <chrono>
#include <iostream>

#include "DBConfig.h"

class SqlQuery {
 public:
  SqlQuery(const std::string& conn, const std::string& username,
           const std::string& password) {
    m_conn = conn;
    m_username = username;
    m_password = password;
  }

  int query() {
    // 假装这里有实现.
    return 0;
  }

 private:
  std::string m_conn;
  std::string m_username;
  std::string m_password;
};

long long getTime();

int main() {
  for (int i = 0; i < 100; ++i) {
    long long startTime = getTime();

    DBConfig* config = DBConfig::getInstance();

    SqlQuery query(config->getConn(), config->getUsername(),
                   config->getPassword());

    // 查询操作.
    query.query();

    long long endTime = getTime();
    printf("Time: %lld\n", endTime - startTime);

    printf("Query : %d\n", i);
  }

  std::cout << "Singleton lazy." << std::endl;

  return 0;
}

long long getTime() {
  std::chrono::time_point<std::chrono::system_clock, std::chrono::milliseconds>
      tp = std::chrono::time_point_cast<std::chrono::milliseconds>(
          std::chrono::system_clock::now());
  auto temp = std::chrono::duration_cast<std::chrono::milliseconds>(
      tp.time_since_epoch());

  return (long long)temp.count();
}
