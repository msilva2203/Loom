#pragma once

#if defined(LOOM_PLATFORM_WINDOWS)
    #include "Platform/Windows/WindowsMain.h"
#elif defined(LOOM_PLATFORM_LINUX)
    #include "Platform/Linux/LinuxMain.h"
#elif defined(LOOM_PLATFORM_MACOS)
    #error "MacOS is currently not supported."
#else
    #error "Unsupported platform."
#endif
