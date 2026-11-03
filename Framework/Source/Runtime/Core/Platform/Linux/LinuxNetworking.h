#pragma once

#include "CoreTypes.h"

namespace Loom {

    class LOOM_API LinuxNetworking
    {
    public:
        LinuxNetworking() = delete;

        static b32 Init() { return true; }
        static b32 Shutdown() { return true; }
    };

} /* Loom */
