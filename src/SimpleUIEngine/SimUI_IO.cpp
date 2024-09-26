// might not even be necessary
#include "SimUI_IO.hpp"

/*
  Process All user events
*/
void ProcessInputs(sf::RenderWindow* window) {
  sf::Event event;

  while (window->pollEvent(event)) {
    ImGui::SFML::ProcessEvent(*window, event);

    if (event.type == sf::Event::Closed) {
      window->close();
    }
    if (event.type == sf::Event::KeyPressed) {
      if (event.key.code == sf::Keyboard::Escape) {
        window->close();
      }
    }
  }
}