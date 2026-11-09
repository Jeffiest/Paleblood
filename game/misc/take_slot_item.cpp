// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: take the next item from one slot of the table and mark its flag, or report that none is free.
#include <cstdint>

#include "slot_table.h"

namespace {

/** Returned when the slot index is out of range or the slot's item list is full. */
constexpr int32_t no_item = -1;

}  // namespace

/**
 *
 * Takes the item at the end of a slot's list, sets its flag and returns its value.
 *
 * The index must name one of the table's slots, and the list must have room for another item.
 * Otherwise nothing is written and the result is -1. The slot's count is then increased by one.
 */
extern "C" int32_t bb_misc_take_slot_item(misc::SlotTable *table, uint32_t index)
{
    if (index >= misc::SlotTable::slot_count) return no_item;
    misc::Slot &slot = table->slots[index];
    if (slot.count >= slot.capacity) return no_item;
    const int32_t item = slot.items[slot.count];
    slot.flags[item] = 1;
    slot.count = slot.count + 1;
    return item;
}
