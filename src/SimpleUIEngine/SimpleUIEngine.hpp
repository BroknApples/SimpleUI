#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <iostream>

#include "../Graphics/SimUIWindow.hpp"
#include "Editor.hpp"
#include "AppCreator.hpp"

class SimpleUIEngine {
 private:
  SimUIWindow window_;

  Editor editor_;
  AppCreator* app_ = nullptr;
  
 public:
  SimpleUIEngine(const int width, const int height);
  SimpleUIEngine(const int width, const int height, AppCreator* app);
  ~SimpleUIEngine();

  bool Init();
  void Run();
  
  void Update();
  void Render();
  void Draw();
};

#endif // SIMPLE_UI_ENGINE_HPP