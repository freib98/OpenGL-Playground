#pragma once

#include <imgui.h>

#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"

#include "core/layer.h"

class ImguiLayer : public Layer
{
public:
    ImguiLayer(GLFWwindow* window);

    void Attach() override;
    void Detach() override;
    void Update() override;

    void Begin();
    void End();

private:
    GLFWwindow* _window;
};
