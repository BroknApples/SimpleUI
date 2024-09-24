#include <iostream>
#include <stdexcept>

#include "SimpleUIEngine/SimpleUIEngine.hpp"

int main(int argc, char* argv[]) {
  const int kWidth = 1280;
  const int kHeight = 720;
  SimpleUIEngine application(kWidth, kHeight);

  try {
    if(!application.Init()) {
      std::cout << "All processes initialized." << std::endl;
    }
    
    application.Run();
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}