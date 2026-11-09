// SPDX-License-Identifier: GPL-2.0-or-later
// The thread's cache block: an allocator slot that a block release takes and clears, found at the
// thread pointer plus an offset the executable keeps in a global.
#pragma once

#include <cstddef>
#include <cstdint>

#include "allocator.h"
#include "runtime/original.h"
#include "thread.h"

namespace engine {

RT_GLOBAL(0x057e44a8, thread_allocator_cache_offset, const int64_t);

/**
 *
 * The per-thread cache block: its allocator slot is taken and cleared by each block release.
 *
 */
struct ThreadAllocatorCache {
    uint8_t unknown_0x00[0x10];
    Allocator *cached_allocator; /**< Null when no allocator is cached. */
};
static_assert(offsetof(ThreadAllocatorCache, cached_allocator) == 0x10);

/**
 *
 * Returns this thread's cache block, found at the thread pointer plus the stored offset.
 *
 */
inline ThreadAllocatorCache *thread_allocator_cache()
{
    return reinterpret_cast<ThreadAllocatorCache *>(thread_pointer() + thread_allocator_cache_offset.get());
}

}  // namespace engine
