// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: empties one slot, moves each later occupied slot forward into the empty ones, then reselects the slot of the selected key.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The number of keyed slots the table holds. */
constexpr size_t keyed_slot_count = 12;
/** The key that marks an empty slot, and the value of an empty selection. */
constexpr int32_t slot_empty = -1;

/** A keyed slot: its key, then a second word that an emptied slot leaves at zero. */
struct KeyedSlot {
    int32_t key;
    uint32_t second_word;
};
static_assert(sizeof(KeyedSlot) == 0x8);

/** The value of an empty slot: the key is minus one and the second word is zero. */
constexpr KeyedSlot empty_slot = {slot_empty, 0};

/** The table whose slots start at 0x18 and whose selected index follows them at 0x78. */
struct SlotTable {
    uint8_t unknown_0x0000[0x18];
    KeyedSlot slots[keyed_slot_count];
    int32_t selected;
};
static_assert(offsetof(SlotTable, slots) == 0x18);
static_assert(offsetof(SlotTable, selected) == 0x78);

RT_ORIGINAL(0x018e0b60, fn_018e0b60, void(SlotTable *table, int32_t key));

}  // namespace

/**
 *
 * Empties the slot at the index, then compacts the occupied slots forward and reselects the selected slot.
 *
 * An index above the last slot changes nothing and reports false. Otherwise each empty slot takes the next
 * occupied slot after it, which is then emptied; the selection is reapplied through its key, and true is returned.
 */
extern "C" bool bb_misc_compact_slots_reselect(SlotTable *table, uint32_t index)
{
    if (index > keyed_slot_count - 1) return false;
    table->slots[index] = empty_slot;

    for (size_t target = 0; target < keyed_slot_count; ++target) {
        if (table->slots[target].key != slot_empty) continue;
        for (size_t source = target + 1; source < keyed_slot_count; ++source) {
            if (table->slots[source].key == slot_empty) continue;
            table->slots[target] = table->slots[source];
            table->slots[source] = empty_slot;
            break;
        }
    }

    int32_t selected_key = slot_empty;
    const auto selected = static_cast<uint64_t>(static_cast<int64_t>(table->selected));
    if (selected <= keyed_slot_count - 1) selected_key = table->slots[selected].key;
    fn_018e0b60(table, selected_key);
    return true;
}
