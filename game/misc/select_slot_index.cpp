// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: selects the slot index of a key: its exact match, else a slot picked from the distinct keys by a rotating choice.
#include <cstddef>
#include <cstdint>

namespace {

/** The number of keyed slots the table holds. */
constexpr size_t keyed_slot_count = 12;
/** The key that means none: it is never searched for and is the selection when nothing is chosen. */
constexpr int32_t slot_empty = -1;

/** A keyed slot: the key, then a word the routine never reads. */
struct KeyedSlot {
    int32_t key;
    uint8_t unknown_0x04[0x4];
};
static_assert(sizeof(KeyedSlot) == 0x8);

/** The table whose slots start at 0x18 and whose selected index follows them at 0x78. */
struct SlotTable {
    uint8_t unknown_0x0000[0x18];
    KeyedSlot slots[keyed_slot_count];
    int32_t selected;
};
static_assert(offsetof(SlotTable, slots) == 0x18);
static_assert(offsetof(SlotTable, selected) == 0x78);

}  // namespace

/**
 *
 * Selects the index of the slot holding the key, or otherwise a slot chosen by the table's last key.
 *
 * The selection starts as none. A key other than none is first searched for in the slots. When it is not
 * found, the distinct keys of the slots are gathered in order, and the last slot's key is looked for among
 * them: the key after it (wrapping) gives the slot to select.
 */
extern "C" void bb_misc_select_slot_index(SlotTable *table, int32_t key)
{
    table->selected = slot_empty;
    if (key != slot_empty) {
        for (size_t index = 0; index < keyed_slot_count; ++index) {
            if (table->slots[index].key == key) {
                table->selected = static_cast<int32_t>(index);
                return;
            }
        }
    }

    int32_t distinct[keyed_slot_count];
    for (int32_t &value : distinct) value = slot_empty;
    size_t distinct_count = 0;
    for (const KeyedSlot &slot : table->slots) {
        bool duplicate = false;
        for (size_t position = 0; position < keyed_slot_count; ++position) {
            if (distinct[position] == slot.key) {
                duplicate = true;
                break;
            }
            if (distinct[position] == slot_empty) break;
        }
        if (!duplicate) {
            distinct[distinct_count] = slot.key;
            ++distinct_count;
        }
    }
    if (distinct_count == 0) return;

    // The last slot's key is looked for among the distinct keys; the key after it, wrapping, is chosen.
    const int32_t last_key = table->slots[keyed_slot_count - 1].key;
    size_t next_position = 1;
    for (size_t position = 0; position < distinct_count; ++position) {
        if (distinct[position] == last_key) {
            next_position = position + 1;
            break;
        }
    }
    const int32_t chosen_key = distinct[next_position % distinct_count];
    for (size_t index = 0; index < keyed_slot_count; ++index) {
        if (table->slots[index].key == chosen_key) {
            table->selected = static_cast<int32_t>(index);
            return;
        }
    }
}
