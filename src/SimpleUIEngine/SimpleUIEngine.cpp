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
void SimpleUIEngine::Init() {
  // TODO: Implement
  window_.Init();
  
  std::cout << "All Processes Initialized." << std::endl;
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
  glfwPollEvents();
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