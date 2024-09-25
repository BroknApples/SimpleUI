cmake_minimum_required(VERSION 3.8.0)
project("SimpleUI" LANGUAGES C CXX)

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
  set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
endif(CCACHE_FOUND)

add_subdirectory(dependencies)
add_subdirectory(src)