// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a table of item slots, each with a capacity, a count, an item list and a flag array.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * One item slot of 0x20 bytes. Its limit word is the upper bound on the item values of the slot
 * that follows it in the table.
 *
 */
struct Slot {
    int32_t limit;         /**< Upper bound on item values; read through the next slot. */
    uint8_t unknown_0x04[4];
    int32_t capacity;      /**< Maximum number of items in the list. */
    int32_t count;         /**< Items currently in the list. */
    int32_t *items;        /**< The item list. */
    uint8_t *flags;        /**< One flag byte per item value. */
};
static_assert(offsetof(Slot, capacity) == 0x08);
static_assert(offsetof(Slot, count) == 0x0c);
static_assert(offsetof(Slot, items) == 0x10);
static_assert(offsetof(Slot, flags) == 0x18);
static_assert(sizeof(Slot) == 0x20);

/**
 *
 * The table of slots. The release reads the limit word of the slot after the one it works on, so
 * the table holds one extra slot.
 *
 */
struct SlotTable {
    static constexpr auto slot_count = 2;
    Slot slots[slot_count + 1];
};

}  // namespace misc
