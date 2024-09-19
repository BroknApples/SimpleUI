#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Hello WOrld\n";

  std::cin.ignore(-1, '\n');
  std::cin.get();

  return 0; 
}