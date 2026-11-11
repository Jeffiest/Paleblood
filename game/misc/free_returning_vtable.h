// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the allocator vtable as the node routines read it, with its free slot returning the value it leaves in RAX.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The allocator vtable, typed so that its free slot returns the RAX value the free leaves behind.
 *
 */
struct FreeReturningVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*free)(void *allocator, void *data);    /**< Frees the block; the value it returns is the routine's RAX. */
};
static_assert(offsetof(FreeReturningVtable, free) == 0x70);

}  // namespace misc
