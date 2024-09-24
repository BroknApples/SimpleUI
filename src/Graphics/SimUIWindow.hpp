#ifndef SIMUI_WINDOW_HPP
#define SIMUI_WINDOW_HPP

#include <iostream>

class SimUIWindow {
 private:
  
  std::string window_name_ = "SimpleUIEngine";
  const int kWidth_, kHeight_;

 public:
  SimUIWindow(const int width, const int height);
  ~SimUIWindow();

  SimUIWindow(const SimUIWindow &) = delete;
  SimUIWindow &operator=(const SimUIWindow &) = delete;

  bool Init();

  bool ShouldClose() { return true; }
  int GetWindowWidth() const { return kWidth_; }
  int GetWindowHeight() const { return kHeight_; }
};

#endif // WINDOW_HPPs