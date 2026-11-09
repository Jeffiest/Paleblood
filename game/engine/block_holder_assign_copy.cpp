// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: replaces a block holder's block with a new block holding a copy of the source bytes.
#include <cstdint>

#include "block_holder.h"

namespace {

// Copies the count bytes of the source into the destination.
RT_ORIGINAL(0x02a1a1b0, fn_02a1a1b0, void(void *destination, const void *source, uint64_t count));

}  // namespace

/**
 *
 * Releases the holder's block if it has one, then allocates a block of the count's size and copies the source
 * into it. The result is false when the allocation fails.
 *
 * Only the low 16 bits of the count are used, and the copy is made even when the count is zero.
 *
 */
extern "C" bool bb_engine_block_holder_assign_copy(engine::BlockHolder *holder, const void *source, uint16_t count)
{
    void *old_block = holder->block;
    if (old_block != nullptr) {
        engine::release_block(old_block);
        holder->block = nullptr;
    }

    const uint64_t size = count;
    void *block = engine::shared_allocator.get()->allocate(size, engine::block_alignment);
    holder->block = block;
    if (block == nullptr) return false;

    fn_02a1a1b0(block, source, count);
    return true;
}
