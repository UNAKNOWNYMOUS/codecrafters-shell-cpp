#include <iostream>
#include <set>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::set<std::string> valid_commands{"exit", "echo", "type"};

  while (true) {
    // Print shell prompt
    std::cout << "$ ";

    // Read user's command
    std::string command{};
    std::getline(std::cin, command);

    if (command == "exit") {
      break;
    } else if (command.substr(0, 5) == "echo ") {
      std::cout << command.substr(5) << '\n';
    } else if (command.substr(0, 5) == "type ") {
      if (valid_commands.contains(command.substr(5))) {
        std::cout << command.substr(5) << " is a shell builtin\n";
      } else {
        std::cout << command << ": command not found\n";
      }
    } else {
      std::cout << command << ": command not found\n";
    }
  }
}
