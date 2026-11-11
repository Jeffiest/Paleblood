// SPDX-License-Identifier: GPL-2.0-or-later
// The thread's allocator and its sized free slot, typed to return the free's result for tail calls.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "thread_allocator.h"

namespace misc {

/**
 *
 * The allocator vtable prefix up to its sized free slot at 0x18, which returns a result.
 *
 */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

/**
 *
 * Frees a block through the thread's allocator with the given size and returns the free's result.
 *
 */
inline uint64_t thread_sized_free(void *block, uint32_t size)
{
    engine::Allocator *allocator = misc::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)->free_sized(allocator, block, size);
}

}  // namespace misc
