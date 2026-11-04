#pragma once

#include <cstdint>
#include <stdfloat>
#include <uchar.h>
#include <cstddef>
#include <iostream>
#include <print>
#include <string>
#include <vector>
#include <array>

namespace Loom::PlatformTypes {

    /** Signed integer types */
    using i08           = std::int8_t;
    using i16           = std::int16_t;
    using i32           = std::int32_t;
    using i64           = std::int64_t;

    /** Unsigned integer types */
    using u08           = std::uint8_t;
    using u16           = std::uint16_t;
    using u32           = std::uint32_t;
    using u64           = std::uint64_t;

    /** Floating-point types */
    using f32           = float;
    using f64           = double;

    /** Boolean types */
    using b08           = i08;
    using b32           = i32;

    /** Character types */
    using ANSICHAR      = char;
    using UTF8CHAR      = char8_t;
    using UTF16CHAR     = char16_t;
    using UTF32CHAR     = char32_t;
    using WCHAR         = wchar_t;
    using TCHAR         = WCHAR;

    /** Size types */
    using SIZE_T        = std::size_t;

} /* Loom::PlatformTypes */
