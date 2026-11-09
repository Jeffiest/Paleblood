// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"

namespace misc {

/**
 *
 * A block node that owns a data block, which the allocator at +0x18 frees when the node is released.
 *
 */
struct OwnedBlock {
    uint8_t unknown_0x00[0x8];
    void *data_0x08;                          /**< The owned data block, freed through the allocator below. */
    uint8_t unknown_0x10[0x8];
    engine::Allocator *data_allocator_0x18;   /**< The allocator that frees the owned data block. */
};
static_assert(offsetof(OwnedBlock, data_0x08) == 0x8 && offsetof(OwnedBlock, data_allocator_0x18) == 0x18);

}  // namespace misc
