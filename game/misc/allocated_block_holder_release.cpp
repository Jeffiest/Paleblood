// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the allocated block holder's release: sets its vtable, then frees and clears its block when it has one.
#include "../engine/allocator.h"
#include "allocated_block_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(void *block));

}  // namespace

/**
 *
 * Sets the holder's vtable, then frees its block through the allocator the block reports and clears the block pointer.
 *
 * A holder that owns no block only gets its vtable set.
 *
 */
extern "C" void bb_misc_allocated_block_holder_release(misc::AllocatedBlockHolder *holder)
{
    holder->vtable = misc::allocated_block_holder_vtable.address();
    void *block = holder->block_0x28;
    if (block == nullptr) return;
    allocator_of(block)->free(block);
    holder->block_0x28 = nullptr;
}
