// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: one element of a value's element array, whose flag byte the prepare call clears.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One 0x28-byte element: a flag byte at +0x24 that the prepare call clears.
 *
 */
struct OwnedElement {
    uint8_t unknown_0x0000[0x24];
    uint8_t flag_0x0024;         /**< Cleared by the prepare call. */
    uint8_t unknown_0x0025[0x3];
};
static_assert(offsetof(OwnedElement, flag_0x0024) == 0x24 && sizeof(OwnedElement) == 0x28);

}  // namespace misc
