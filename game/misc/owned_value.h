// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the value of an inner list node, whose field at +0x40 is handed on by address.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The value of an inner node: the entry update takes the address of its field at +0x40.
 *
 */
struct OwnedValue {
    uint8_t unknown_0x0000[0x40];
    uint8_t unknown_0x0040[0x8];
};
static_assert(offsetof(OwnedValue, unknown_0x0040) == 0x40);

}  // namespace misc
