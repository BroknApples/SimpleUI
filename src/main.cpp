#include <iostream>
#include <stdexcept>

#include "SimpleUIEngine/SimUI_Engine.hpp"

int main(int argc, char* argv[]) {
  const int kWidth = 1920;
  const int kHeight = 1080;
  const int kFrameRate = 90;
  const std::string kWindowName = "Simple UI Engine";
  SimUIEngine engine(kWidth, kHeight, kFrameRate, kWindowName);

  try {
    if(!engine.Init()) {
      std::cout << "ERORR: During initialization." << std::endl;
    } else {
      std::cout << "All processes initialized." << std::endl;
    }
    
    engine.Run();
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}