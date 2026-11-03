#pragma once

#include "CoreTypes.h"

#if defined(LOOM_PLATFORM_WINDOWS)

namespace Loom {

    class LOOM_API WindowsNetworking
    {
    public:
        WindowsNetworking() = delete;

        static b32 Init();
        static b32 Shutdown();
    };

} /* Loom */

#endif /* LOOM_PLATFORM_WINDOWS */
