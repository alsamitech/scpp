#include <iostream>
#include <string>

int spammer() {
  std::cout<< "C++ Spammer\nEnter String to Spam: ";
  std::string spam;
  std::getline(std::cin, spam);
  while(1) {
    std::cout<< spam<< std::endl;
  }
  return 1;
}