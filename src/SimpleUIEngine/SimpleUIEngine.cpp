#include "SimpleUIEngine.hpp"

// Constructors
SimpleUIEngine::SimpleUIEngine() {}
SimpleUIEngine::SimpleUIEngine(AppCreator* app) : app(app) {}

/*
  Initialize all engine components includeing, GLAD, GLFW, VULKAN, IMGUI
*/
char SimpleUIEngine::Init() {
  // TODO: Implement

  
  // No errors
  return '0';
}

/*
  Application loop
*/
void SimpleUIEngine::Run() {
  // TODO: Implement
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