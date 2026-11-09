// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "owned_block.h"

namespace misc {

struct OwnedBlockPairVtable;

/**
 *
 * An object that owns a plain block and an owned block node, both released when it is destroyed.
 *
 */
struct OwnedBlockPair {
    const OwnedBlockPairVtable *vtable;   /**< The address point of this class's vtable. */
    void *plain_block_0x08;               /**< A plain block, released and cleared by the destructor. */
    uint8_t unknown_0x10[0x8];
    OwnedBlock *node_0x18;                /**< An owned node, released and cleared by the destructor. */
};
static_assert(offsetof(OwnedBlockPair, plain_block_0x08) == 0x8 && offsetof(OwnedBlockPair, node_0x18) == 0x18);

}  // namespace misc
