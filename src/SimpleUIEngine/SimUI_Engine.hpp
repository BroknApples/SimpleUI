#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <string>

#include "SimUI_Editor.hpp"
#include "SimUI_App.hpp"
#include "SimUI_IO.hpp"

class SimUIEngine {
 private:
  Editor editor_;
  App* app_ = nullptr;
  
 public:
  SimUIEngine(const int width, const int height, const int frame_rate, const std::string window_name);
  ~SimUIEngine();

  bool Init();
  void Run();
};

#endif // SIMPLE_UI_ENGINE_HPP