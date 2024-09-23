#include <iostream>

#include "SimpleUIEngine/SimpleUIEngine.hpp"

int main(int argc, char* argv[]) {
  SimpleUIEngine application;

  char error_code = application.Init();
  switch(error_code) {
    case '0':
      std::cout << "No Initialization Errors." << std::endl;
    // TODO: Implement more error codes
  }

  application.Run();

  return 0;
}