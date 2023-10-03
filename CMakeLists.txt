# Cmake version
cmake_minimum_required(VERSION 3.16)

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)

# Project name
project(Incremental)

# Setup output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Enable compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add subdirectories
add_subdirectory(src)
target_include_directories(main_lib PUBLIC include)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
FetchContent_Declare(
  entt
  GIT_REPOSITORY https://github.com/skypjack/entt.git
  GIT_TAG        v3.12.2
)
FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG        3.3.8
)

FetchContent_MakeAvailable(googletest entt glfw)

# Debugger options
# add_compile_options(-Weverything)

target_link_libraries(${PROJECT_NAME} main_lib EnTT::EnTT glfw)

# Testing
enable_testing()
add_subdirectory(tests)
target_include_directories(tests PUBLIC include)

# target_include_directories(catch_main PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")
# target_link_libraries(tests main_lib googletest)