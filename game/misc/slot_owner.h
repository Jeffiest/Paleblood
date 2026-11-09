// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner that keeps two fallback slot values, at +0x150 and +0x1d0.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The slot owner: its first fallback value sits at +0x150 and its second at +0x1d0.
 *
 */
struct SlotOwner {
    uint8_t unknown_0x0000[0x150];
    uint64_t value_0x150;  /**< Fallback value, used when the second one is zero. */
    uint8_t unknown_0x0158[0x78];
    uint64_t value_0x1d0;  /**< Preferred fallback value, used when it is set. */
};
static_assert(offsetof(SlotOwner, value_0x150) == 0x150);
static_assert(offsetof(SlotOwner, value_0x1d0) == 0x1d0);

}  // namespace misc
