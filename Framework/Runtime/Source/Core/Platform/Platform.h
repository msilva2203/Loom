#pragma once

/* [msilva2203]
 * Check for simultaneous platforms
 */
#if defined(LOOM_PLATFORM_WINDOWS) && defined(LOOM_PLATFORM_LINUX) && defined(LOOM_PLATFORM_MACOS)
    #error "Detected simultaneous platforms. Please, verify the build process."
#endif

/* [msilva2203]
 * Invalidate platforms when compiling for other platforms
 */
#if !defined(LOOM_PLATFORM_WINDOWS)
    #define LOOM_PLATFORM_WINDOWS 0
#endif
#if !defined(LOOM_PLATFORM_LINUX)
    #define LOOM_PLATFORM_LINUX 0
#endif
#if !defined(LOOM_PLATFORM_MACOS)
    #define LOOM_PLATFORM_MACOS 0
#endif

/* [msilva2203]
 * Define API macros for possible shared lib (dll) support later
 */
#if defined(LOOM_PLATFORM_WINDOWS)
    #define LOOM_API
#elif defined(LOOM_PLATFORM_LINUX)
    #define LOOM_API
#elif defined(LOOM_PLATFORM_MACOS)
    #define LOOM_API
#else
    #error "Unsupported platform."
#endif

#include "PlatformTypes.h"
