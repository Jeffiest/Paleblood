// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ThreadBlockAllocator;

/**
 *
 * The virtual functions of a thread's block allocator: slot 0x10 allocates a block of a given size.
 *
 */
struct ThreadBlockAllocatorVtable {
    uint8_t unknown_0x00[0x10];
    void *(*allocate)(ThreadBlockAllocator *allocator, uint64_t size); /**< Slot 0x10: allocates a block. */
};
static_assert(offsetof(ThreadBlockAllocatorVtable, allocate) == 0x10);

/**
 *
 * The object a thread's block record holds for allocating its small blocks.
 *
 */
struct ThreadBlockAllocator {
    const ThreadBlockAllocatorVtable *vtable; /**< The allocator's virtual functions. */
};
static_assert(offsetof(ThreadBlockAllocator, vtable) == 0x00);

}  // namespace misc
