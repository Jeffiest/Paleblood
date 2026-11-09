// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: set up an item table: store its first value, allocate its two item lists and flag arrays
// from an allocator, record their counts, and run the table's fill step.
#include <cstdint>

#include "../engine/allocator.h"
#include "item_table.h"
#include "runtime/original.h"

namespace {

/** Size of one 32-bit item. */
constexpr int64_t item_bytes = 4;
/** Alignment of the item lists. */
constexpr uint64_t item_alignment = 4;
/** Alignment of the flag arrays, which are one byte per count. */
constexpr uint64_t flag_alignment = 1;

RT_ORIGINAL(0x0139af70, fill_item_table, void(misc::ItemTable *table));

}  // namespace

/**
 *
 * Initializes an item table for a count, then runs its fill step as a tail call.
 *
 * The first value is stored before anything is allocated. Each allocation is taken as returned,
 * a null result included, and the two counts are both the given count.
 */
extern "C" void bb_misc_init_item_table(misc::ItemTable *table, engine::Allocator *allocator, int32_t count,
                                        int32_t first_value)
{
    const int64_t wide_count = count;
    table->first_value = first_value;
    table->items = static_cast<int32_t *>(allocator->allocate(static_cast<uint64_t>(wide_count * item_bytes), item_alignment));
    table->flags = static_cast<uint8_t *>(allocator->allocate(static_cast<uint64_t>(wide_count), flag_alignment));
    table->count = count;
    table->second_items = static_cast<int32_t *>(allocator->allocate(static_cast<uint64_t>(wide_count * item_bytes), item_alignment));
    table->second_flags = static_cast<uint8_t *>(allocator->allocate(static_cast<uint64_t>(wide_count), flag_alignment));
    table->second_count = count;
    fill_item_table(table);
}
