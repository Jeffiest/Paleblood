// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/thread.h"
#include "block_releaser.h"
#include "linked_object.h"
#include "ref_item.h"
#include "runtime/original.h"
#include "thread_block.h"

namespace {

// The vtable every linked object is given once its members are released.
RT_GLOBAL(0x0566d970, linked_object_vtable, const misc::LinkedObjectVtable);
// Where the thread's block record sits, from the thread pointer.
RT_GLOBAL(0x057e40f8, thread_block_offset, const int64_t);
// Destroys one member object given by its address.
RT_ORIGINAL(0x00836840, destroy_member, void(void *member));

// The high half of the count word holds the object's block size, or this marker for the default.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x48;
constexpr int high_half_shift = 16;

// The size the object's block is released with: its count word's high half, or the default size.
uint32_t block_size_of(const misc::LinkedObject *object)
{
    const uint32_t size = object->refcount_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Frees a linked object: it takes its vtable, destroys its first two members, drops the reference it
 * holds, destroys its last member, and hands the block to the thread's releaser with the block size.
 *
 * The releaser's result is returned as it is.
 */
extern "C" uint64_t bb_misc_linked_object_free(misc::LinkedObject *object)
{
    object->vtable = linked_object_vtable.address();
    destroy_member(object->first_member);
    destroy_member(object->second_member);

    misc::RefItem *held = object->held;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
    object->held = nullptr;
    destroy_member(object->tail_member);

    misc::ThreadBlock *block =
        *reinterpret_cast<misc::ThreadBlock **>(engine::thread_pointer() + thread_block_offset.get());
    misc::BlockReleaser *releaser = block->releaser;
    return releaser->vtable->release(releaser, object, block_size_of(object));
}
