#include <iostream>
#include <stdexcept>

#include "SimpleUIEngine/SimUIEngine.hpp"

int main(int argc, char* argv[]) {
  const int kWidth = 1280;
  const int kHeight = 720;
  const int kFrameRate = 90;
  const std::string kWindowName = "Simple UI Engine";
  SimUIEngine application(kWidth, kHeight, kFrameRate, kWindowName);

  try {
    if(!application.Init()) {
      std::cout << "All processes initialized." << std::endl;
    }
    
    application.Run();
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}


// #include <iostream>

// #include <SFML/Graphics/RenderWindow.hpp>
// #include <SFML/System/Clock.hpp>
// #include <SFML/Window/Event.hpp>

// #include <imgui-SFML.h>
// #include <imgui.h>

// int main() {
//   sf::RenderWindow window(sf::VideoMode(1280, 720), "ImGui + SFML = <3");
//   window.setFramerateLimit(60);
//   if (!ImGui::SFML::Init(window)) {
//     std::cout << "Not Initialized." << std::endl;
//   } else {
//     std::cout << "Initialized." << std::endl;
//   }

//   sf::Clock deltaClock;
//   while (window.isOpen()) {
//       sf::Event event;
//       while (window.pollEvent(event)) {
//           ImGui::SFML::ProcessEvent(window, event);

//           if (event.type == sf::Event::Closed) {
//               window.close();
//           }
//       }

//       ImGui::SFML::Update(window, deltaClock.restart());

//       ImGui::ShowDemoWindow();

//       window.clear();
//       ImGui::SFML::Render(window);
//       window.display();
//   }

//   ImGui::SFML::Shutdown();

//   return 0;
// }