// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the target a gated owner writes its value into.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A target whose stored value is the word at +0x4.
 *
 */
struct GatedTarget {
    uint8_t unknown_0x00[0x4];
    uint32_t value_0x04; /**< The value written by the gated store. */
};
static_assert(offsetof(GatedTarget, value_0x04) == 0x4);

}  // namespace misc
