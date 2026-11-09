// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clear both flag and item lists of an item table, store the running sequence of item values
// from its first value up to each count, and record the remaining capacity.
#include <cstdint>

#include "item_table.h"
#include "runtime/original.h"

namespace {

/** The capacity that the remaining counts are measured from. */
constexpr int32_t table_capacity = 0x200;
/** Size of one flag byte. */
constexpr int64_t flag_bytes = 1;
/** Size of one 32-bit item. */
constexpr int64_t item_bytes = 4;

RT_ORIGINAL(0x02fbe688, zero_bytes, void(void *destination, int32_t value, uint64_t size));

/** Zeroes a list of count elements of the given size. */
void clear_list(void *list, int32_t count, int64_t element_bytes)
{
    zero_bytes(list, 0, static_cast<uint64_t>(static_cast<int64_t>(count) * element_bytes));
}

/** Stores first, first + 1, and so on into the list while the value is below the count. */
void store_sequence(int32_t *items, int32_t first, int32_t count)
{
    for (int32_t value = first; value < count; ++value) items[value - first] = value;
}

}  // namespace

/**
 *
 * Fills an item table: both lists are cleared, the first list gets the sequence from the first
 * value up to its count, and the remaining capacity is recorded for both halves.
 *
 * The counts are read again after each step, and the sequence stores stop at the count.
 */
extern "C" void bb_misc_fill_item_table(misc::ItemTable *table)
{
    clear_list(table->flags, table->count, flag_bytes);
    clear_list(table->items, table->count, item_bytes);
    table->unknown_0x0c = 0;
    const int32_t first = table->first_value;
    store_sequence(table->items, first, table->count);
    table->capacity_remaining = table_capacity - first;
    clear_list(table->second_flags, table->second_count, flag_bytes);
    clear_list(table->second_items, table->second_count, item_bytes);
    table->second_used = 0;
    store_sequence(table->second_items, first, table->second_count);
    table->remaining = table_capacity - first;
}
