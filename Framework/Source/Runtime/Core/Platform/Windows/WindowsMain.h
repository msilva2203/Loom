#pragma once

#include "CoreTypes.h"

#if defined(LOOM_PLATFORM_WINDOWS)

#include "Application/Application.h"
#include "Platform/PlatformNetworking.h"

#include <windows.h>

/* [msilva2203]
 * Application creation definition can be found in clients/projects.
 * @see Samples/BasicServer
 */
extern Loom::Application* CreateApplication();

int main(int argc, char *argv[])
{
    std::println("Windows Main");

    Loom::Networking::Init();

    Loom::Application* App = CreateApplication();
    App->Run();
    delete App;

    Loom::Networking::Shutdown();

    return EXIT_SUCCESS;
}

#endif /* LOOM_PLATFORM_WINDOWS */
