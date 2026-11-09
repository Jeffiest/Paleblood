// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: sets a block holder's vtable and releases its block, clearing the pointer after the release.
#include "block_holder.h"

/**
 *
 * Sets the holder's vtable, then releases its block if it has one and clears the block pointer.
 *
 * The block is read before the release, so a block replaced during the release is not touched.
 *
 */
extern "C" void bb_engine_block_holder_release(engine::BlockHolder *holder)
{
    holder->vtable = engine::block_holder_vtable.address() + engine::vtable_address_point;
    void *block = holder->block;
    if (block != nullptr) {
        engine::release_block(block);
        holder->block = nullptr;
    }
}
