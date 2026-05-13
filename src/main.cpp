#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true) {
    // Print shell prompt
    std::cout << "$ ";

    // Read user's command
    std::string command{};
    std::getline(std::cin, command);

    if (command == "exit") {
      break;
    } else if (command == "echo") {
      std::cout << command;
    }

    std::cout << command << ": command not found\n";
  }
}
