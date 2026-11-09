// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../loading/fios.h"
#include "bounded_range_object.h"
#include "runtime/original.h"

namespace {

/** The thread allocator's sized free slot at 0x18, which returns the callee's result. */
struct SizedFreeVtable {
    uint8_t unknown_0x00[0x18];
    uint64_t (*free_sized)(engine::Allocator *allocator, void *block, uint32_t size);
};
static_assert(offsetof(SizedFreeVtable, free_sized) == 0x18);

// Releases the object's contents, as the release function of the object does.
RT_ORIGINAL(0x00be9450, release_object, void(misc::BoundedRangeObject *object));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::BoundedRangeObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a bounded range object: releases it, then frees its block through the thread's
 * allocator with the block size and returns the free's result.
 *
 * The block size is the high half of the count word, or the default size when that half is the marker.
 */
extern "C" uint64_t bb_misc_bounded_range_object_free(misc::BoundedRangeObject *object)
{
    release_object(object);
    engine::Allocator *allocator = loading::fios::thread_allocator();
    return reinterpret_cast<const SizedFreeVtable *>(allocator->vtable)
        ->free_sized(allocator, object, block_size_of(object));
}
