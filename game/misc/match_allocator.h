// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an allocator whose slot 0x50 hands out a block of the requested size with a zero flag word.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct MatchAllocator;

/**
 *
 * The virtual functions of an allocator: slot 0x50 allocates a block given its size and a flag word.
 *
 */
struct MatchAllocatorVtable {
    uint8_t unknown_0x0000[0x50];
    void *(*allocate)(MatchAllocator *self, uint64_t size, uint64_t flags); /**< Slot at 0x50. */
};
static_assert(offsetof(MatchAllocatorVtable, allocate) == 0x50);

/**
 *
 * An allocator: its vtable, which the match uses to create an object.
 *
 */
struct MatchAllocator {
    const MatchAllocatorVtable *vtable; /**< Dispatch table for the allocator's methods. */
};

}  // namespace misc
