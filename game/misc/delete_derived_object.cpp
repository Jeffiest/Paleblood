// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "derived_object.h"
#include "sized_free_vtable.h"
#include "runtime/original.h"

namespace {

// The base class's destructor thunk, which runs on the object before the object is freed.
RT_ORIGINAL(0x00cb4720, fn_00cb4720, uint64_t(misc::DerivedObject *object));

// The high half of the size word holds the block size, or this marker for the default size.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0xc0;
constexpr int high_half_shift = 16;

// The size the object's block is freed with: the size word's high half, or the default size.
uint32_t block_size_of(const misc::DerivedObject *object)
{
    const uint32_t size = object->size_word_0x08 >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deleting destructor of a derived object: stores its vtable, drops its held reference, runs the base
 * destructor on it, then frees the block through the thread's allocator with the block size.
 *
 * The free's result is returned as it is, as the original tail-calls the allocator.
 */
extern "C" uint64_t bb_misc_delete_derived_object(misc::DerivedObject *object)
{
    misc::store_derived_vtable(object);
    misc::drop_held_reference(object);
    fn_00cb4720(object);
    return misc::thread_sized_free(object, block_size_of(object));
}
