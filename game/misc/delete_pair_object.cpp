// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: deletes a dual member object: sets its vtable, releases its held item, destroys its second member and base, then hands the block to the thread's releaser.
#include <cstdint>

#include "../engine/thread.h"
#include "dual_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"
#include "thread_block.h"

namespace {

// The derived vtable the object takes first, and where the thread's block record sits from the thread pointer.
RT_GLOBAL(0x0567e460, derived_vtable, const uint8_t);
RT_GLOBAL(0x057e40f8, thread_block_offset, const int64_t);

// Destroys the second member block given by its address, and the base object.
RT_ORIGINAL(0x00836840, destroy_second_member, void(void *member));
RT_ORIGINAL(0x00d4f900, destroy_base, void(misc::DualMemberObject *self));

// The high half of the size word holds the block size, or this marker for the default size.
constexpr uint32_t default_size_marker = 0xffff;
constexpr uint32_t default_block_size = 0x98;
constexpr int high_half_shift = 16;

// The size the object's block is released with: its size word's high half, or the default size.
uint32_t block_size_of(const misc::DualMemberObject *self)
{
    const uint32_t size = self->size_word >> high_half_shift;
    return size != default_size_marker ? size : default_block_size;
}

}  // namespace

/**
 *
 * Deletes the object. Its vtable is set to the derived one, then the item it holds loses a reference and is destroyed
 * when that was the last one. The held item is cleared, the second member and the base are destroyed, and the
 * object's block goes to the thread's releaser with its size. The releaser's result is returned.
 */
extern "C" uint64_t bb_misc_delete_pair_object(misc::DualMemberObject *self)
{
    self->vtable = derived_vtable.address();

    misc::RefItem *held = self->cleared_word_b;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&held->refcount_word) == 0) held->vtable->destroy(held);
    }
    self->cleared_word_b = nullptr;
    destroy_second_member(&self->second_member);
    destroy_base(self);

    misc::ThreadBlock *block =
        *reinterpret_cast<misc::ThreadBlock **>(engine::thread_pointer() + thread_block_offset.get());
    misc::BlockReleaser *releaser = block->releaser;
    return releaser->vtable->release(releaser, self, block_size_of(self));
}
