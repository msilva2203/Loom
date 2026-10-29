#pragma once

#include "Platform.h"

/* [msilva2203]
 * This is where the correct socket types are defined
 */
#if defined(LOOM_PLATFORM_WINDOWS)

    #include "Windows/WindowsSocket.h"

    namespace Loom {

        using SocketAddress = WindowsSocketAddress;
        using Socket        = WindowsSocket;

    } /* Loom */

#elif defined(LOOM_PLATFORM_LINUX)

    #include "Linux/LinuxSocket.h"

    namespace Loom {

        using SocketAddress = LinuxSocketAddress;
        using Socket        = LinuxSocket;

    } /* Loom */
    

#elif defined(LOOM_PLATFORM_MACOS)

    #error "MacOS is currently not supported."

#else
    #error "Unsupported platform."
#endif
