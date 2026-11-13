// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a keyed value at an index with the scale a lookup finds for it, compacts the occupied slots, then reselects.
#include <cstddef>
#include <cstdint>

#include "index_lookup_result.h"
#include "runtime/original.h"

namespace {

using misc::IndexLookupResult;

RT_ORIGINAL(0x023210e0, fn_023210e0, void(IndexLookupResult *result, uint32_t id));
RT_ORIGINAL(0x018e0b60, fn_018e0b60, void(void *table, int32_t key));

/** The number of keyed slots the table holds. */
constexpr size_t keyed_slot_count = 12;
/** The key that marks an empty slot, and the value of an empty selection. */
constexpr int32_t slot_empty = -1;
/** The requested id a lookup result holds before its lookup runs. */
constexpr int32_t lookup_unset = -1;
/** The second word stored when the lookup finds no usable scale. */
constexpr int32_t second_word_unset = -1;
/** The scale value that means none. */
constexpr int16_t scale_unset = -1;
/** The factor applied to a found scale. */
constexpr int32_t scale_factor = 3;

/** A found object: its signed scale at 0x18. */
struct ScaleMatch {
    uint8_t unknown_0x0000[0x18];
    int16_t scale;
};
static_assert(offsetof(ScaleMatch, scale) == 0x18);

/** A keyed slot: its key, then a second word. */
struct KeyedSlot {
    int32_t key;
    int32_t second_word;
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

}  // namespace

/**
 *
 * Stores the key at the index with the scale found for it, then compacts and reselects as the compaction does.
 *
 * The lookup runs and the slot is written only for an index within the table. The occupied slots are then
 * compacted forward and the selected slot's key is reselected, whether or not the slot was written. The
 * routine returns whether the slot was written.
 */
extern "C" bool bb_misc_store_value_compact_reselect(SlotTable *table, uint32_t index, int32_t value)
{
    const bool stored = index <= keyed_slot_count - 1;
    if (stored) {
        IndexLookupResult found;
        found.requested_0x00 = lookup_unset;
        found.entry_0x08 = nullptr;
        fn_023210e0(&found, static_cast<uint32_t>(value));
        const ScaleMatch *match = static_cast<const ScaleMatch *>(found.entry_0x08);
        int32_t second_word = second_word_unset;
        if (match != nullptr && match->scale != scale_unset) second_word = match->scale * scale_factor;
        table->slots[index] = KeyedSlot{value, second_word};
    }

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
    return stored;
}
