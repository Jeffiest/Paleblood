// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores the offset word of the pending block from the record's limit, then clears the pending block.
#include <cstdint>

#include "offset_store_block.h"
#include "offset_store_record.h"

namespace {

/** The distance added to the block's address before it is subtracted from the limit. */
constexpr uint32_t block_address_bias = 8;

}  // namespace

/**
 *
 * Stores the 32-bit difference between the record's limit and the block's biased address in the block's offset
 * word, then clears the record's pending block.
 *
 * With no pending block the record and the block are left alone.
 */
extern "C" void bb_misc_finish_pending_block_offset(misc::OffsetStoreRecord *record)
{
    misc::OffsetStoreBlock *block = record->pending_0x28;
    if (block == nullptr) return;
    const uint32_t biased_address = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(block) + block_address_bias);
    block->offset_0x04 = record->limit_0x10 - biased_address;
    record->pending_0x28 = nullptr;
}
