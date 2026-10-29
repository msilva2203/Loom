#pragma once

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
    #define LOOM_API // [msilva2203] Remove IDE errors
    #error "Unsupported platform."
#endif
