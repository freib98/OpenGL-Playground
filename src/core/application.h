#pragma once

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/glad.h>

#include "imgui/imgui_layer.h"

class Application
{
public:
    Application();
    ~Application();

    void Run();

private:
    GLFWwindow* window;

    // LayerStack _layerStack;
    ImguiLayer* _imguiLayer; // Todo - use the layerstack instead of the layer itself
};
