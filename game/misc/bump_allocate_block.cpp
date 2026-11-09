// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: bump-allocates an eight-byte block from the arena, stores the offset of the previous block, and tags the new one.
#include <cstdint>

#include "bump_arena.h"
#include "offset_store_block.h"

namespace {

/** The amount added to the cursor before it is rounded down to the block alignment. */
constexpr uintptr_t alignment_round_up_bias = 3;
/** The mask that rounds an address down to the block alignment of four bytes. */
constexpr uintptr_t alignment_mask = ~alignment_round_up_bias;
/** The size of one block. */
constexpr uintptr_t block_size = 8;
/** The distance added to a block's address before the previous block's offset is measured. */
constexpr uint32_t block_address_bias = 8;

}  // namespace

/**
 *
 * Stores the offset of the pending block from the cursor, then takes the next four-byte aligned block from the arena.
 *
 * The new block becomes the pending block when it fits before the region's end, and its two tags are written.
 * The aligned cursor is returned whether or not the block fits.
 */
extern "C" uint64_t bb_misc_bump_allocate_block(misc::BumpArena *arena, uint16_t first_tag, uint16_t second_tag)
{
    const uintptr_t cursor = arena->cursor_0x10;
    misc::OffsetStoreBlock *pending = arena->pending_0x28;
    if (pending != nullptr) {
        const uint32_t biased_address = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pending) + block_address_bias);
        pending->offset_0x04 = static_cast<uint32_t>(cursor) - biased_address;
        arena->pending_0x28 = nullptr;
    }
    const uintptr_t aligned = (cursor + alignment_round_up_bias) & alignment_mask;
    const uintptr_t next = aligned + block_size;
    arena->cursor_0x10 = next;
    const uintptr_t region_end = arena->base_0x20 + arena->size_0x18;
    misc::OffsetStoreBlock *block = nullptr;
    if (next <= region_end) {
        block = reinterpret_cast<misc::OffsetStoreBlock *>(aligned);
    }
    arena->pending_0x28 = block;
    if (block != nullptr) {
        block->first_tag_0x00 = first_tag;
        block->second_tag_0x02 = second_tag;
        block->offset_0x04 = 0;
    }
    return aligned;
}
