// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: replaces a block holder's block with a new sized block and returns its payload, or null.
#include <cstddef>
#include <cstdint>

#include "block_holder.h"
#include "sized_block_header.h"

/**
 *
 * Releases the holder's block if it has one, then allocates a sized block for the count, stores it in the
 * holder, and returns its payload. The payload is null when the allocation fails.
 *
 * The flag and the count are stored in the block header. Only the low byte of the flag and the low 16 bits of
 * the count are used.
 *
 */
extern "C" uint8_t *bb_engine_block_holder_allocate_sized(engine::BlockHolder *holder, uint8_t flag, uint16_t count)
{
    void *old_block = holder->block;
    if (old_block != nullptr) {
        engine::release_block(old_block);
        holder->block = nullptr;
    }

    const uint64_t size = static_cast<uint64_t>(count) + sizeof(engine::SizedBlockHeader);
    auto *header = static_cast<engine::SizedBlockHeader *>(
        engine::shared_allocator.get()->allocate(size, engine::block_alignment));
    holder->block = header;
    if (header == nullptr) return nullptr;

    header->flag_0x01 = flag;
    header->count_0x02 = count;
    return reinterpret_cast<uint8_t *>(header) + sizeof(engine::SizedBlockHeader);
}
