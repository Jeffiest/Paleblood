// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a frame that holds the block the selection reads.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SelectionBlock;

/**
 *
 * A frame that keeps its selection block at +0x38.
 *
 */
struct SelectionFrame {
    uint8_t unknown_0x00[0x38];
    SelectionBlock *block; /**< The block whose word selects the second value. */
};
static_assert(offsetof(SelectionFrame, block) == 0x38);

}  // namespace misc
