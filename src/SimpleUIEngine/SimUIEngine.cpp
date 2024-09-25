#include "SimUIEngine.hpp"

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
  return true;
}

/*
  Application loop
*/
void SimUIEngine::Run() {
  // while(!editor.ShouldClose()) {
  //   Update();
  //   Render();
  //   Draw();
  // }

//       sf::Event event;
//       while (window.pollEvent(event)) {
//           ImGui::SFML::ProcessEvent(window, event);

//           if (event.type == sf::Event::Closed) {
//               window.close();
//           }
//       }

//       ImGui::SFML::Update(window, deltaClock.restart());

//       ImGui::ShowDemoWindow();

//       
//       
//   }
}
/*
  Handle inputs, update screen positions, etc.
*/
void SimUIEngine::Update() {
  // TODO: Implement
}

/*
  Render elements to buffer
*/
void SimUIEngine::Render() {
  //*window_.Instance().clear();
  //ImGui::SFML::Render(*window_.Instance());
}

/*
  Put elements to screen
*/
void SimUIEngine::Draw() {
  //window_.display();
}