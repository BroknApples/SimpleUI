# Main
set(SOURCE_CODE
  main.cpp
  SimpleUIEngine/SimpleUIEngine.cpp
  SimpleUIEngine/AppCreator.cpp
  SimpleUIEngine/Editor.cpp
  Graphics/Window.cpp
)

add_executable("SimpleUI" ${SOURCE_CODE})
target_link_libraries("SimpleUI" PRIVATE ImGui-SFML::ImGui-SFML)