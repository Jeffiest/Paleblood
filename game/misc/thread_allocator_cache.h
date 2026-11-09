// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the allocator a thread keeps in a cache slot, reached from the thread pointer.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "runtime/original.h"

namespace misc {

// The thread-local offset of the allocator cache block.
RT_GLOBAL(0x057e44a8, thread_allocator_cache_offset, const int64_t);

/**
 *
 * The thread's allocator cache block: the allocator it keeps at +0x10.
 *
 */
struct ThreadAllocatorCache {
    uint8_t unknown_0x00[0x10];
    engine::Allocator *allocator; /**< Cached allocator, taken and cleared when a block is freed. */
};
static_assert(offsetof(ThreadAllocatorCache, allocator) == 0x10);

/**
 *
 * Takes the thread's cached allocator out of its slot, leaving the slot empty.
 *
 * A null result means the caller must look the block's allocator up instead.
 *
 */
inline engine::Allocator *take_cached_allocator()
{
    auto *cache = reinterpret_cast<ThreadAllocatorCache *>(
        engine::thread_pointer() + thread_allocator_cache_offset.get());
    engine::Allocator *allocator = cache->allocator;
    cache->allocator = nullptr;
    return allocator;
}

}  // namespace misc
