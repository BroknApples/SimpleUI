#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <string>

#include "Editor.hpp"
#include "AppCreator.hpp"

class SimUIEngine {
 private:
  Editor editor_;
  AppCreator* app_ = nullptr;
  
 public:
  SimUIEngine(const int width, const int height, const int frame_rate, const std::string window_name);
  ~SimUIEngine();

  bool Init();
  void Run();
  
  void Update();
  void Render();
  void Draw();
};

#endif // SIMPLE_UI_ENGINE_HPP