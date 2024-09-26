#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <iostream>
#include <vector>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <imgui-SFML.h>
#include <imgui.h>

#include "SimUI_IO.hpp"

class Editor {
 private:
  sf::RenderWindow window_;
  int frame_rate_;
  std::string window_name_;
  int width_, height_;

  void RenderMenuBar();


 public:
  Editor(const int width, const int height, const int frame_rate, const std::string window_name);
  ~Editor();

  // do not allow copying of an instance
  Editor(const Editor &) = delete;
  Editor &operator=(const Editor &) = delete;

  bool Init();

  void Update(sf::Clock delta_clock);
  void Render();
  void Draw();

  bool IsOpen() const { return window_.isOpen(); }
  int GetWindowWidth() const { return width_; }
  int GetWindowHeight() const { return height_; }
};

#endif // EDITOR_HPP