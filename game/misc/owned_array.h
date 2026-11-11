// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a growable array's header, as the two temporary arrays of the object setters hold it, and
// the release of their storage through the global allocator.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * A growable array's header: its storage, its element count and its capacity.
 * A negative capacity means the storage is not owned, so it is never freed.
 *
 */
struct OwnedArray {
    void *data;        /**< The storage, or null when none was made. */
    uint32_t length;   /**< The number of elements in use. */
    int32_t capacity;  /**< The elements the storage holds; negative when the storage is not owned. */
};
static_assert(offsetof(OwnedArray, length) == 0x8 && offsetof(OwnedArray, capacity) == 0xc);

/** The capacity of a fresh array: the high bit set, so its storage counts as not owned. */
constexpr int32_t unowned_capacity = static_cast<int32_t>(0x80000000u);
/** The element sizes as shift counts: 16 bytes per element, and 4. */
constexpr uint32_t element_shift_16 = 4;
constexpr uint32_t element_shift_4 = 2;

/** The allocator object at 0x058018b0, whose vtable frees a block given its size at slot 0x28. */
struct ArrayAllocatorVtable {
    uint8_t unknown_0x00[0x28];
    void (*free_sized)(void *allocator, void *block, uint32_t size);
};
static_assert(offsetof(ArrayAllocatorVtable, free_sized) == 0x28);

struct ArrayAllocator {
    const ArrayAllocatorVtable *vtable;
};

RT_GLOBAL(0x058018b0, array_allocator, ArrayAllocator);

/**
 *
 * Frees an array's storage when it is owned: its capacity times the element size, through the allocator.
 *
 */
inline void release_array(OwnedArray *array, uint32_t element_shift)
{
    if (array->capacity < 0) return;
    const uint32_t size = static_cast<uint32_t>(array->capacity) << element_shift;
    array_allocator.get().vtable->free_sized(array_allocator.address(), array->data, size);
}

}  // namespace misc
