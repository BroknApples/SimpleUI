#include "SimUIEngine.hpp"

/*
  Create window with some size
*/
SimUIEngine::SimUIEngine(const int width, const int height)
  : window_{width, height} {}

/*
  Create window with some size, but also intialize internal app creator to some app
*/
SimUIEngine::SimUIEngine(const int width, const int height, AppCreator* app)
  : window_{width, height}, app_{app} {}

/*
  Clean
*/
SimUIEngine::~SimUIEngine() {
  // TODO: Implement
}

/*
  Initialize all engine components includeing, GLAD, GLFW, VULKAN, IMGUI
*/
bool SimUIEngine::Init() {
  return window_.Init();
}

/*
  Application loop
*/
void SimUIEngine::Run() {
  while(!window_.ShouldClose()) {
    Update();
    Render();
    Draw();
  }
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
  // TODO: Implement
}

/*
  Put elements to screen
*/
void SimUIEngine::Draw() {
  // TODO: Implement
}