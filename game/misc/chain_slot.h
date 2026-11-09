// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a chain link that points at the leaf of the chain.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ChainLeaf;

/**
 *
 * A chain link whose leaf is the second word.
 *
 */
struct ChainSlot {
    uint8_t unknown_0x00[0x8];
    ChainLeaf *leaf; /**< The leaf of the chain, or null when there is none. */
};
static_assert(offsetof(ChainSlot, leaf) == 0x8);

}  // namespace misc
