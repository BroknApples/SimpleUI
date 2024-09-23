#include "Window.hpp"

/*
  Initialize width and height
*/
SimUIWindow::SimUIWindow(const int width, const int height) : kWidth_(width), kHeight_(height) {}

/*
  Clean GLFW processes
*/
SimUIWindow::~SimUIWindow() {
  glfwDestroyWindow(window_);
  glfwTerminate();
}

/*
  Create GLFW window
*/
void SimUIWindow::Init() {
  if (glfwInit() == GLFW_TRUE) {
    std::cout << "Initialized GLFW." << std::endl;
  } else {
    std::cout << "ERROR: Cannot Initialize GLFW." << std::endl;
  }

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  window_ = glfwCreateWindow(kWidth_, kHeight_, window_name_.c_str(), nullptr, nullptr);
}