#include <iostream>
#include <string>

int main() {
  std::cout<< "C++ Spammer\nEnter String to Spam: ";
  std::string spam;
  std::getline(std::cin, spam);
  while(1) {
    std::cout<< spam<< std::endl;
  }
}