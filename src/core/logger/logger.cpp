#include <iostream>

namespace Logger {
  void Error(const std::string& message) {
    std::cerr << message << "\n";
  }
  void Log(const std::string& message) {
    std::cout << message << "\n";
  }
}