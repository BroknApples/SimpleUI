#ifndef SIMPLE_UI_ENGINE_HPP
#define SIMPLE_UI_ENGINE_HPP

#include <iostream>

#include <imgui/imgui.h>
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

#include "../Graphics/Window.hpp"
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

  void Init();
  void Run();
  
  void Update();
  void Render();
  void Draw();
};

#endif // SIMPLE_UI_ENGINE_HPP