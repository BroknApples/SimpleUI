#include "Editor.hpp"

/*
  Initialize width, height, and frame rate of the window
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
  Create GLFW window
*/
bool Editor::Init() {
  sf::RenderWindow window(sf::VideoMode(width_, height_), window_name_);
  window.setFramerateLimit(frame_rate_);

  if (!ImGui::SFML::Init(window)) {
    std::cout << "ERROR: ImGui not initialized." << std::endl;
    return false;
  } else {
    std::cout << "ImGui initialized." << std::endl;
  }

  return true;
}