// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: replaces a block holder's block with a new sized block holding a flag, a count and a copy of the source.
#include <cstddef>
#include <cstdint>

#include "block_holder.h"
#include "sized_block_header.h"

namespace {

// Copies the count bytes of the source into the destination.
RT_ORIGINAL(0x02a1a1b0, fn_02a1a1b0, void(void *destination, const void *source, uint64_t count));

}  // namespace

/**
 *
 * Releases the holder's block if it has one, then allocates a sized block, stores it in the holder, and copies
 * the count bytes of the source into its payload. The result is false when the allocation fails.
 *
 * The flag and the count are stored in the block header. Only the low byte of the flag and the low 16 bits of
 * the count are used.
 *
 */
extern "C" bool bb_engine_block_holder_assign_sized(engine::BlockHolder *holder, uint8_t flag, uint16_t count,
                                                    const void *source)
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
    if (header == nullptr) return false;

    header->flag_0x01 = flag;
    header->count_0x02 = count;
    void *payload = reinterpret_cast<uint8_t *>(header) + sizeof(engine::SizedBlockHeader);
    fn_02a1a1b0(payload, source, count);
    return true;
}
