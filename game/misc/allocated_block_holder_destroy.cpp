// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the allocated block holder's destructor: sets its vtable, releases its block, then tail-calls the base destructor.
#include <cstdint>

#include "../engine/allocator.h"
#include "allocated_block_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(void *block));
// The base destructor the holder hands the object to last; its result is the result here.
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(misc::AllocatedBlockHolder *holder));

}  // namespace

/**
 *
 * Sets the holder's vtable, releases its block through the allocator the block reports when it has one, then returns
 * the base destructor's result.
 *
 * The block is not cleared afterwards, as the original does not clear it.
 *
 */
extern "C" uint64_t bb_misc_allocated_block_holder_destroy(misc::AllocatedBlockHolder *holder)
{
    holder->vtable = misc::allocated_block_holder_vtable.address();
    void *block = holder->block_0x28;
    if (block != nullptr) allocator_of(block)->free(block);
    return fn_02fbe588(holder);
}
