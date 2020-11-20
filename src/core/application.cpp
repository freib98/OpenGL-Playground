#include "application.h"

Application::Application()
{
    if (!glfwInit())
    {
        // Initialization failed
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    window = glfwCreateWindow(1280, 720, "OpenGL Playground", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    gladLoadGL();

    _imguiLayer = new ImguiLayer(window);
    _imguiLayer->Attach();

    // _layerStack.PushLayer(_imguiLayer);
}

Application::~Application()
{
    _imguiLayer->Detach();

    glfwDestroyWindow(window);
    glfwTerminate();
}

void Application::Run()
{
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        _imguiLayer->Update();

        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClear(GL_COLOR_BUFFER_BIT);
        
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }
}
