cmake_minimum_required(VERSION 3.13)
project(opengl_playground)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp
                 src/core/application.h
                 src/core/application.cpp
                 src/core/layer.h
                 src/core/layer_stack.h
                 src/core/layer_stack.cpp
                 src/imgui/imgui_impl_glfw.h
                 src/imgui/imgui_impl_glfw.cpp
                 src/imgui/imgui_impl_opengl3.h
                 src/imgui/imgui_impl_opengl3.cpp
                 src/imgui/imgui_layer.h
                 src/imgui/imgui_layer.cpp)

set(EXAMPLE_FILES src/examples/triangle.h
                  src/examples/triangle.cpp)

add_executable(opengl_playground WIN32 ${SOURCE_FILES} ${EXAMPLE_FILES})
target_include_directories(opengl_playground PUBLIC src/)

# --- glfw ---
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(third_party/glfw)
target_link_libraries(opengl_playground PUBLIC glfw)

# --- glad ---
add_subdirectory(third_party/glad)
target_link_libraries(opengl_playground PUBLIC glad)

# --- imgui ---
add_subdirectory(third_party/imgui)
target_link_libraries(opengl_playground PUBLIC imgui)
