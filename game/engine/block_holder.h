// SPDX-License-Identifier: GPL-2.0-or-later
// An object that owns one block at +0x8, released through the thread's cached allocator or, when
// nothing is cached, through the allocator the block reports.
#pragma once

#include <cstddef>
#include <cstdint>

#include "allocator.h"
#include "engine.h"
#include "runtime/original.h"
#include "thread_allocator_cache.h"

namespace engine {

/**
 *
 * An object that owns one block: its vtable slot is first, and the block pointer is at +0x8.
 *
 */
struct BlockHolder {
    const void *vtable; /**< Set by the destructor-style functions only. */
    void *block;        /**< Null when the holder owns nothing. */
};
static_assert(offsetof(BlockHolder, block) == 0x08);

RT_GLOBAL(0x05722560, block_holder_vtable, const uint8_t);
RT_GLOBAL(0x05940438, shared_allocator, Allocator *);
RT_GLOBAL(0x04d3bac3, block_release_file, const char);
RT_GLOBAL(0x04d40207, block_release_message, const char);
RT_ORIGINAL(0x0247b720, allocator_of, Allocator *(const void *block));

constexpr int32_t block_release_line = 0x64;
constexpr uint64_t block_alignment = 0x10;

/**
 *
 * Takes the thread's cached allocator, clearing the cache, or asks the block for its allocator.
 *
 * A block with no cached allocator and no allocator of its own is reported as a fatal error, and the
 * null result is returned as the original does.
 *
 */
inline Allocator *take_block_allocator(const void *block)
{
    ThreadAllocatorCache *cache = thread_allocator_cache();
    Allocator *allocator = cache->cached_allocator;
    cache->cached_allocator = nullptr;
    if (allocator != nullptr) return allocator;

    allocator = allocator_of(block);
    if (allocator == nullptr) {
        fatal_error(block_release_file.address(), block_release_line, block_release_message.address());
    }
    return allocator;
}

/**
 *
 * Releases a block through the allocator that takes it.
 *
 */
inline void release_block(void *block)
{
    take_block_allocator(block)->free(block);
}

}  // namespace engine
