#include "imgui_layer.h"

ImguiLayer::ImguiLayer(GLFWwindow* window) : _window(window)
{
}

void ImguiLayer::Attach()
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    auto& io = ImGui::GetIO();

    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForOpenGL(_window, true);
    ImGui_ImplOpenGL3_Init("#version 430");
}

void ImguiLayer::Detach()
{
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
}

void ImguiLayer::Update()
{

    ImGui::ShowDemoWindow();
}

void ImguiLayer::Begin()
{
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

void ImguiLayer::End()
{
    auto& io = ImGui::GetIO();

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
    {
        ImGui::UpdatePlatformWindows();
        ImGui::RenderPlatformWindowsDefault();
    }
}
