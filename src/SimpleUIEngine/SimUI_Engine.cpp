#include "SimUI_Engine.hpp"

/*
  Initialize editor window
*/
SimUIEngine::SimUIEngine(const int width, const int height, const int frame_rate, const std::string window_name)
  : editor_{width, height, frame_rate, window_name} {}

/*
  Clean
*/
SimUIEngine::~SimUIEngine() {
  ImGui::SFML::Shutdown();
}

/*
  Initialize all engine components includeing, GLAD, GLFW, VULKAN, IMGUI
*/
bool SimUIEngine::Init() {
  // TODO: Implement
  return editor_.Init();
}

/*
  Application loop
*/
void SimUIEngine::Run() {
  sf::Clock delta_clock;
  while(editor_.IsOpen()) {
    // Process App functions first since it takes more processing power
    if (app_ != nullptr) { // TODO: change this to only check if the variable has been updated
      app_->Update();      // to avoid unnecessary comparisons.
      app_->Render();
      app_->Draw();
    }

    editor_.Update(delta_clock);
    editor_.Render();
    editor_.Draw();
  }
}