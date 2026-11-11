// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: the per-thread heap record, whose allocator object sits at +0x28 and is found through a thread-local slot.
#pragma once

#include <cstddef>
#include <cstdint>

#include "allocator.h"
#include "runtime/original.h"

namespace engine {

/**
 *
 * The offset from the thread pointer to the slot that holds the thread's heap record.
 *
 */
RT_GLOBAL(0x057e4568, thread_heap_offset, const int64_t);

/**
 *
 * The thread's heap record: the allocator the thread's objects are freed through, an object at +0x28.
 *
 */
struct ThreadHeap {
    uint8_t unknown_0x00[0x28];
    Allocator allocator;   /**< The thread's allocator; its vtable is the first word of the object. */
};
static_assert(offsetof(ThreadHeap, allocator) == 0x28);

}  // namespace engine
