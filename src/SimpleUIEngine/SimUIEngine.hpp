#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <iostream>

#include <SFML/Graphics.hpp>

#include "../Graphics/SimUIWindow.hpp"
#include "Editor.hpp"
#include "AppCreator.hpp"

class SimUIEngine {
 private:
  SimUIWindow window_;

  Editor editor_;
  AppCreator* app_ = nullptr;
  
 public:
  SimUIEngine(const int width, const int height);
  SimUIEngine(const int width, const int height, AppCreator* app);
  ~SimUIEngine();

  bool Init();
  void Run();
  
  void Update();
  void Render();
  void Draw();
};

#endif // SIMPLE_UI_ENGINE_HPP