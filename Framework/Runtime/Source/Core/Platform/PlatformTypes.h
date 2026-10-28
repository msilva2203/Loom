#pragma once

#include <cstdint>
#include <stdfloat>

namespace Loom {

    /** Signed integer types */
    using i08 = std::int8_t;
    using i16 = std::int16_t;
    using i32 = std::int32_t;
    using i64 = std::int64_t;

    /** Unsigned integer types */
    using u08 = std::uint8_t;
    using u16 = std::uint16_t;
    using u32 = std::uint32_t;
    using u64 = std::uint64_t;

    /** Boolean types */
    using b08 = i08;
    using b32 = i32;

    /** Floating-point types */
    using f32 = float;
    using f64 = double;

} /* Loom */
