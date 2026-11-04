#pragma once

#include "CoreTypes.h"

namespace Loom {

    class LOOM_API Application
    {
    public:
        Application();
        virtual ~Application();

        virtual void Run();
    };

} /* Loom */
