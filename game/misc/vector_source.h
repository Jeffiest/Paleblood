// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the vector source an owner points at through +0xb0, with the 16-byte vectors copied out of it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/vector.h"

namespace misc {

// The vectors a source object keeps at fixed offsets; the other fields are not read by these copies.
struct VectorSource {
    uint8_t unknown_0x0000[0x1a0];
    engine::Vec4 vector_0x1a0;   /**< the base vector of the pair */
    uint8_t unknown_0x01b0[0x30];
    engine::Vec4 vector_0x1e0;   /**< the vector copied out first */
    uint8_t unknown_0x01f0[0x40];
    engine::Vec4 vector_0x230;   /**< the vector copied out alone */
};
static_assert(offsetof(VectorSource, vector_0x1a0) == 0x1a0 && offsetof(VectorSource, vector_0x1e0) == 0x1e0);
static_assert(offsetof(VectorSource, vector_0x230) == 0x230);

// An optional addend object whose vector at +0x30 is added to the pair's base vector.
struct VectorAddend {
    uint8_t unknown_0x0000[0x30];
    engine::Vec4 vector_0x30;
};
static_assert(offsetof(VectorAddend, vector_0x30) == 0x30);

// The owner: the source at +0xb0 and an optional addend object at +0xb8.
struct VectorOwner {
    uint8_t unknown_0x00[0xb0];
    VectorSource *source_0xb0;
    const VectorAddend *addend_0xb8;   /**< null when there is no addend */
};
static_assert(offsetof(VectorOwner, source_0xb0) == 0xb0 && offsetof(VectorOwner, addend_0xb8) == 0xb8);

}  // namespace misc
