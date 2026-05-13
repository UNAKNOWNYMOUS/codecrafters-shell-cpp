#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";

  std::string user_command{};
  std::cin >> user_command;

  std::cout << user_command << ": command not found";
}
