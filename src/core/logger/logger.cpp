#include <iostream>
#include <src/core/logger/logger.hpp>

namespace Logger {
  void Log(const std::string& message) {
    std::cerr << message << std::endl;
  }
}