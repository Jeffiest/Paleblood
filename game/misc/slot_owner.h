// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner that keeps its fallback slot values, at +0x150, +0x158 and +0x1d0.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The slot owner: its fallback values sit at +0x150, +0x158 and +0x1d0.
 *
 */
struct SlotOwner {
    uint8_t unknown_0x0000[0x150];
    uint64_t value_0x150;  /**< Fallback value, used when the second one is zero. */
    uint64_t value_0x158;  /**< Third fallback value, used when neither key is found. */
    uint8_t unknown_0x0160[0x70];
    uint64_t value_0x1d0;  /**< Preferred fallback value, used when it is set. */
};
static_assert(offsetof(SlotOwner, value_0x150) == 0x150);
static_assert(offsetof(SlotOwner, value_0x158) == 0x158);
static_assert(offsetof(SlotOwner, value_0x1d0) == 0x1d0);

}  // namespace misc
