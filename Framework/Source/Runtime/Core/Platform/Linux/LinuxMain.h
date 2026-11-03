#pragma once

#include "CoreTypes.h"

#if defined(LOOM_PLATFORM_LINUX)

#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
    std::printf("Linux Main");

    return EXIT_SUCCESS;
}

#endif /* LOOM_PLATFORM_LINUX */
