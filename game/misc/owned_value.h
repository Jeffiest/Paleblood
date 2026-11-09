// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the value of an inner list node, with a field handed on by address and an element array.
#pragma once

#include <cstddef>
#include <cstdint>

#include "owned_element.h"

namespace misc {

/**
 *
 * The value of an inner node: the entry update takes the address of its field at +0x40, and the
 * prepare call works on its element array.
 *
 */
struct OwnedValue {
    uint8_t unknown_0x0000[0x40];
    uint8_t unknown_0x0040[0x8];
    uint8_t unknown_0x0048[0x278];
    uint8_t flag_0x02c0;             /**< Cleared by the prepare call. */
    uint8_t unknown_0x02c1[0x3];
    uint32_t count_0x02c4;           /**< Number of elements in the array. */
    OwnedElement *elements_0x02c8;   /**< Element array, cleared element by element. */
};
static_assert(offsetof(OwnedValue, unknown_0x0040) == 0x40 && offsetof(OwnedValue, flag_0x02c0) == 0x2c0);
static_assert(offsetof(OwnedValue, count_0x02c4) == 0x2c4 && offsetof(OwnedValue, elements_0x02c8) == 0x2c8);

}  // namespace misc
