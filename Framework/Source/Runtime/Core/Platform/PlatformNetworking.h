#pragma once

#include "Platform.h"

#if defined(LOOM_PLATFORM_WINDOWS)

    #include "Windows/WindowsNetworking.h"

    namespace Loom {

        using Networking = WindowsNetworking;

    } /* Loom */

#elif defined(LOOM_PLATFORM_LINUX)

    #include "Linux/LinuxNetworking.h"

    namespace Loom {

        using Networking = LinuxNetworking;

    } /* Loom */

#elif defined(LOOM_PLATFORM_MACOS)

    #error "MacOS is currently not supported."

#else
    #error "Unsupported platform."
#endif
