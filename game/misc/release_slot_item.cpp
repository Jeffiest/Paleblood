// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: return a flagged item to the end of one slot's list, clearing its flag, when it is below the next slot's limit.
#include <cstdint>

#include "slot_table.h"

/**
 *
 * Clears the flag of an item that a slot holds and appends it back to the slot's list.
 *
 * The index must name one of the table's slots and the item must be a nonnegative value below the
 * limit of the next slot. Its flag must be set; the slot's count is then decreased by one and the
 * item is stored at the new end of the list. Otherwise nothing is written.
 */
extern "C" void bb_misc_release_slot_item(misc::SlotTable *table, uint32_t index, int32_t item)
{
    if (index >= misc::SlotTable::slot_count) return;
    if (item < 0) return;
    misc::Slot &slot = table->slots[index];
    if (table->slots[index + 1].limit <= item) return;
    if (slot.flags[item] == 0) return;
    slot.flags[item] = 0;
    slot.count = slot.count - 1;
    slot.items[slot.count] = item;
}
