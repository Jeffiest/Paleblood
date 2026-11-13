// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the holder's vtable, drops the weak and strong counts of its counted child, then frees the holder.
#include <cstdint>

#include "../engine/ref_object.h"
#include "counted_child_holder.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x057b1a80, counted_child_holder_vtable, const uint8_t);

/** Drops one weak reference of a block at the given address; the second argument is the flag 1. */
RT_ORIGINAL(0x0247e780, weak_release, void(void *block, int32_t flag));

/** Frees a block; its result is the routine's RAX. */
RT_ORIGINAL(0x02fbe588, free_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Sets the holder's vtable to its address point, then drops the child's weak count, releasing the weak block when that
 * was the last weak reference, and drops the child's strong count, which destroys the child at the last reference.
 * The holder is then freed, and the free's result is returned.
 *
 */
extern "C" uint64_t bb_misc_release_counted_child_then_free_02276ec0(misc::CountedChildHolder *holder)
{
    holder->vtable = counted_child_holder_vtable.address();
    if (misc::CountedChild *child = holder->child) {
        if (__atomic_fetch_sub(&child->weak, 1, __ATOMIC_SEQ_CST) <= 1)
            weak_release(child->unknown_0x0010, 1);
        if (misc::CountedChild *remaining = holder->child) engine::release(&remaining->strong);
    }
    return free_block(holder);
}
