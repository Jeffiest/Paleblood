// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the holder whose vector of stored 64-bit values sits at +0x08.
#pragma once

#include <cstddef>
#include <cstdint>

#include "value_owner.h"

namespace misc {

/**
 *
 * A holder that keeps its vector of stored values at +0x08; the vector's begin and end pointers sit at
 * +0x10 and +0x18 of the holder.
 *
 */
struct VectorHolder {
    uint8_t unknown_0x00[0x08];
    ValueVector values_0x08;
};
static_assert(offsetof(VectorHolder, values_0x08) == 0x08);
static_assert(offsetof(VectorHolder, values_0x08) + offsetof(ValueVector, begin) == 0x10);
static_assert(offsetof(VectorHolder, values_0x08) + offsetof(ValueVector, end) == 0x18);

}  // namespace misc
