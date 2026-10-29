#pragma once

#include "CoreTypes.h"

namespace Loom {

    class LOOM_API WindowsNetworking
    {
    public:
        WindowsNetworking() = delete;

        static b32 Init();
        static b32 Shutdown();
    };

} /* Loom */
