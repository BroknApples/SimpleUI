#include "SimpleUIEngine.hpp"

/*
  Create window with some size
*/
SimpleUIEngine::SimpleUIEngine(const int width, const int height)
  : window_{width, height} {}

/*
  Create window with some size, but also intialize internal app creator to some app
*/
SimpleUIEngine::SimpleUIEngine(const int width, const int height, AppCreator* app)
  : window_{width, height}, app_{app} {}

/*
  Clean
*/
SimpleUIEngine::~SimpleUIEngine() {
  // TODO: Implement
}

/*
  Initialize all engine components includeing, GLAD, GLFW, VULKAN, IMGUI
*/
bool SimpleUIEngine::Init() {
  return window_.Init();
}

/*
  Application loop
*/
void SimpleUIEngine::Run() {
  while(!window_.ShouldClose()) {
    Update();
    Render();
    Draw();
  }
}
/*
  Handle inputs, update screen positions, etc.
*/
void SimpleUIEngine::Update() {
  // TODO: Implement
}

/*
  Render elements to buffer
*/
void SimpleUIEngine::Render() {
  // TODO: Implement
}

/*
  Put elements to screen
*/
void SimpleUIEngine::Draw() {
  // TODO: Implement
}