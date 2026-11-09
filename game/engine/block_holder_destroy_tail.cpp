// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: the block holder's destructor part that releases its block, then tail-calls the base destructor.
#include "block_holder.h"

namespace {

// The base class destructor the holder hands the object to last; its result is the result here.
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(engine::BlockHolder *holder));

}  // namespace

/**
 *
 * Sets the holder's vtable, releases its block when it has one, then returns the base destructor's result.
 *
 * The block is read once after the vtable is set, and it is not cleared afterwards, as the original does not.
 *
 */
extern "C" uint64_t bb_engine_block_holder_destroy_tail(engine::BlockHolder *holder)
{
    holder->vtable = engine::block_holder_vtable.address() + engine::vtable_address_point;
    void *block = holder->block;
    if (block != nullptr) engine::release_block(block);
    return fn_02fbe588(holder);
}
