# Main
set(SOURCE_CODE
  main.cpp
  SimpleUIEngine/SimUIEngine.cpp
  SimpleUIEngine/AppCreator.cpp
  SimpleUIEngine/Editor.cpp
  Graphics/SimUIWindow.cpp
)

add_executable("SimpleUI" ${SOURCE_CODE})
target_link_libraries("SimpleUI"
  PRIVATE
    ImGui-SFML::ImGui-SFML
)

# Copy DLLs needed for runtime on Windows
if(WIN32)
  if (BUILD_SHARED_LIBS)
    add_custom_command(TARGET SimpleUI POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
          $<TARGET_FILE:ImGui-SFML::ImGui-SFML>
          $<TARGET_FILE:sfml-graphics>
          $<TARGET_FILE:sfml-window>
          $<TARGET_FILE:sfml-system>
          $<TARGET_FILE_DIR:SimpleUI>)
  endif()
endif()