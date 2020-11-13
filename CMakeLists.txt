cmake_minimum_required(VERSION 3.13)
project(opengl_rendering)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp)

add_executable(opengl_rendering WIN32 ${SOURCE_FILES})

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(third_party/glad)
add_subdirectory(third_party/glfw)

target_link_libraries(opengl_rendering PUBLIC glad)
target_link_libraries(opengl_rendering PUBLIC glfw)
