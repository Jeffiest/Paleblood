// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct BlockReleaser;

/**
 *
 * The virtual functions of a block releaser: slot 0x18 releases one block of a given size.
 *
 */
struct BlockReleaserVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*release)(BlockReleaser *releaser, void *block, uint32_t size); /**< Slot 0x18: releases a block. */
};
static_assert(offsetof(BlockReleaserVtable, release) == 0x18);

/**
 *
 * An object that releases the memory blocks of the thread that owns it.
 *
 */
struct BlockReleaser {
    const BlockReleaserVtable *vtable; /**< The releaser's virtual functions. */
};
static_assert(offsetof(BlockReleaser, vtable) == 0x00);

}  // namespace misc
