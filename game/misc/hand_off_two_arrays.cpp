// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/**
 *
 * A growable array's header on the caller's stack: its storage, its element count and its capacity.
 * A negative capacity means the storage is not owned, so it is never freed.
 *
 */
struct OwnedArray {
    void *data;        /**< The storage, or null when none was made. */
    uint32_t length;   /**< The number of elements in use. */
    int32_t capacity;  /**< The elements the storage holds; negative when the storage is not owned. */
};
static_assert(offsetof(OwnedArray, length) == 0x8 && offsetof(OwnedArray, capacity) == 0xc);

// The capacity written into a fresh array: the high bit set, so the storage counts as not owned.
constexpr int32_t unowned_capacity = static_cast<int32_t>(0x80000000u);
// The element sizes of the two arrays, as shift counts: 16 bytes for the first, 4 for the second.
constexpr uint32_t first_element_shift = 4;
constexpr uint32_t second_element_shift = 2;

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
// The text the source is read with: its address is passed on unchanged.
RT_GLOBAL(0x055191e0, source_text, const char);
// Fills the two arrays from the source and the text.
RT_ORIGINAL(0x00c24e60, fn_00c24e60, void(const void *source, const char *text, OwnedArray *first, OwnedArray *second));
// Hands the two arrays to the object.
RT_ORIGINAL(0x00cbe140, fn_00cbe140, void(void *self, OwnedArray *first, OwnedArray *second));

// Frees the array's storage when it is owned: its capacity times the element size, through the allocator.
void release_storage(OwnedArray *array, uint32_t element_shift)
{
    if (array->capacity < 0) return;
    const uint32_t size = static_cast<uint32_t>(array->capacity) << element_shift;
    array_allocator.get().vtable->free_sized(array_allocator.address(), array->data, size);
}

}  // namespace

/**
 *
 * Builds two arrays from a source, hands them to the object, then frees the ones it owns: the second
 * array first, then the first.
 *
 * Nothing is returned.
 */
extern "C" void bb_misc_hand_off_two_arrays(void *self, const void *source)
{
    OwnedArray first{nullptr, 0, unowned_capacity};
    OwnedArray second{nullptr, 0, unowned_capacity};
    fn_00c24e60(source, source_text.address(), &first, &second);
    fn_00cbe140(self, &first, &second);
    release_storage(&second, second_element_shift);
    release_storage(&first, first_element_shift);
}
