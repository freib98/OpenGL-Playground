#include <Windows.h>

#include "core/application.h"

int WINAPI WinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, PSTR /*lpCmdLine*/, INT /*nCmdShow*/)
{
    Application* app = new Application();

    app->Run();

    delete app;

    return 0;
}
