// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a block whose word carries the selection bit.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A selection block: unknown state followed by the word whose bit 6 selects the second value.
 *
 */
struct SelectionBlock {
    uint8_t unknown_0x00[0x5c];
    uint16_t word_0x5c; /**< Bit 6 selects the probe's second value. */
};
static_assert(offsetof(SelectionBlock, word_0x5c) == 0x5c);

}  // namespace misc
