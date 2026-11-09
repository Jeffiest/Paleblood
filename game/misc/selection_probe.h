// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a probe that selects a value from its owner's chain and its two values.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SelectionOwner;

/**
 *
 * A probe: the owner it reads the selection from, then the two values it can select.
 *
 */
struct SelectionProbe {
    uint8_t unknown_0x00[0x8];
    SelectionOwner *owner;  /**< The owner whose settings and frame are read. */
    int32_t value_0x10;     /**< Selected when the settings flag is set. */
    int32_t value_0x14;     /**< Selected when the block word has its bit set. */
};
static_assert(offsetof(SelectionProbe, owner) == 0x8 && offsetof(SelectionProbe, value_0x10) == 0x10);
static_assert(offsetof(SelectionProbe, value_0x14) == 0x14);

}  // namespace misc
