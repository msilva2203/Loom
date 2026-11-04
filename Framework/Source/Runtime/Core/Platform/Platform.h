#pragma once

/*-------------------------------------------------------------
    Setup Platform
---------------------------------------------------------------*/

/* [msilva2203]
 * Check for simultaneous platforms
 */
#if defined(LOOM_PLATFORM_WINDOWS) && defined(LOOM_PLATFORM_LINUX) && defined(LOOM_PLATFORM_MACOS)
    #error "Detected simultaneous platforms. Please, verify the build process."
#endif

/* [msilva2203]
 * Invalidate undefined platforms
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

/*-------------------------------------------------------------
    Setup Text / String Literal
---------------------------------------------------------------*/

#define UTF8TEXT_PASTE(x)           u8 ## x // u8"x"
#define UTF16TEXT_PASTE(x)          u ## x  // u"x"
#define UTF32TEXT_PASTE(x)          U ## x  // U"x"
#define WIDETEXT_PASTE(x)           L ## x  // L"x"

#define UTF8TEXT(x)                 UTF8TEXT_PASTE(x)
#define UTF16TEXT(x)                UTF16TEXT_PASTE(x)
#define UTF32TEXT(x)                UTF32TEXT_PASTE(x)
#define WIDETEXT(x)                 WIDETEXT_PASTE(x)

#if !defined(TEXT)
    #define LOOM_TEXT_PASTE(x)      WIDETEXT_PASTE(x)

    #define LOOM_TEXT(x)            LOOM_TEXT_PASTE(x)
#endif

/*-------------------------------------------------------------
    Setup Platform Types
---------------------------------------------------------------*/

#include "PlatformTypes.h"

/** Signed integer types */
using i08               = Loom::PlatformTypes::i08;
using i16               = Loom::PlatformTypes::i16;
using i32               = Loom::PlatformTypes::i32;
using i64               = Loom::PlatformTypes::i64;

/** Unsigned integer types */
using u08               = Loom::PlatformTypes::u08;
using u16               = Loom::PlatformTypes::u16;
using u32               = Loom::PlatformTypes::u32;
using u64               = Loom::PlatformTypes::u64;

/** Floating-point types */
using f32               = Loom::PlatformTypes::f32;
using f64               = Loom::PlatformTypes::f64;

/** Boolean types */
using b08               = Loom::PlatformTypes::b08;
using b32               = Loom::PlatformTypes::b32;

/** Character types */
using LOOM_ANSICHAR     = Loom::PlatformTypes::ANSICHAR;
using LOOM_UTF8CHAR     = Loom::PlatformTypes::UTF8CHAR;
using LOOM_UTF16CHAR    = Loom::PlatformTypes::UTF16CHAR;
using LOOM_UTF32CHAR    = Loom::PlatformTypes::UTF32CHAR;
using LOOM_WCHAR        = Loom::PlatformTypes::WCHAR;
using LOOM_TCHAR        = Loom::PlatformTypes::TCHAR;

/** Size types */
using SIZE_T            = Loom::PlatformTypes::SIZE_T;



#include "PlatformSocket.h"
#include "PlatformNetworking.h"
