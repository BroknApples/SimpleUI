#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <iostream>

#include <imgui/imgui.h>
#include <vulkan/vulkan.hpp>

#include "Editor.hpp"
#include "AppCreator.hpp"

class SimpleUIEngine {
 private:
  AppCreator* app = nullptr;
  Editor editor;
  
 public:
  SimpleUIEngine();
  SimpleUIEngine(AppCreator* app);

  char Init();
  void Run();
  
  void Update();
  void Render();
  void Draw();
};

#endif // SIMPLE_UI_ENGINE_HPP