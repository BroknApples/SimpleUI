#include "SimUI_Editor.hpp"

/*
  Set width, height, and frame rate of the window
*/
Editor::Editor(const int width, const int height, const int frame_rate, const std::string window_name)
  : width_(width), height_(height), frame_rate_(frame_rate), window_name_(window_name) {}

/*
  Clean processes
*/
Editor::~Editor() {
  // TODO: Implement 
}

/*
  Initialize window and set framerate limit
*/
bool Editor::Init() {
  window_.create(sf::VideoMode(width_, height_), window_name_);
  window_.setFramerateLimit(frame_rate_);

  if (!ImGui::SFML::Init(window_)) {
    std::cout << "ERROR: ImGui & SFML not initialized." << std::endl;
    return false;
  } else {
    std::cout << "ImGui & SFML initialized." << std::endl;
  }
  
  return true;
}


void Editor::Update(sf::Clock delta_clock) {
  ProcessInputs(&window_);

  ImGui::SFML::Update(window_, delta_clock.restart());
}

void Editor::Render() {
  ImGui::ShowDemoWindow();

  RenderMenuBar();
  window_.clear();
  ImGui::SFML::Render(window_);
}

void Editor::Draw() {
  
  window_.display();
}

void Editor::RenderMenuBar() {
  ImGui::BeginMainMenuBar();
    if (ImGui::BeginMenu("File")) {
      if (ImGui::MenuItem("Open..", "Ctrl+O")) {

      }
      if (ImGui::MenuItem("Save", "Ctrl+S")) {

      }
      if (ImGui::MenuItem("Close", "Ctrl+W")) {

      }
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("Edit")) {
      if (ImGui::MenuItem("Open..", "Ctrl+O")) {

      }
      if (ImGui::MenuItem("Save", "Ctrl+S")) {

      }
      if (ImGui::MenuItem("Close", "Ctrl+W")) {

      }
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("View")) {
      if (ImGui::MenuItem("Open..", "Ctrl+O")) {

      }
      if (ImGui::MenuItem("Save", "Ctrl+S")) {

      }
      if (ImGui::MenuItem("Close", "Ctrl+W")) {

      }
      ImGui::EndMenu();
    }
    ImGui::EndMainMenuBar();
}