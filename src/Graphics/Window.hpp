#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class SimUIWindow {
 private:
  GLFWwindow* window_ = nullptr;
  std::string window_name_ = "SimpleUIEngine";
  const int kWidth_, kHeight_;

 public:
  SimUIWindow(const int width, const int height);
  ~SimUIWindow();

  SimUIWindow(const SimUIWindow &) = delete;
  SimUIWindow &operator=(const SimUIWindow &) = delete;

  void Init();

  bool ShouldClose() { return glfwWindowShouldClose(window_); }
  int GetWindowWidth() const { return kWidth_; }
  int GetWindowHeight() const { return kHeight_; }
};

#endif // WINDOW_HPPs