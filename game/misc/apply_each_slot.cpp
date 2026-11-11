// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/**
 *
 * A table of slots, of which the count sits at +0x18; the slot records themselves are read by the
 * functions that work on one slot.
 *
 */
struct SlotTable {
    uint8_t unknown_0x00[0x18];
    int32_t count_0x18;   /**< Number of slots; no slot is visited when this is not positive. */
};
static_assert(offsetof(SlotTable, count_0x18) == 0x18);

// Reads the slot's value from the argument (sixteen bytes) and returns it.
RT_ORIGINAL(0x00cb0b10, fn_00cb0b10, uint32_t(SlotTable *table, int32_t index, const void *source));
// Stores the value into the slot.
RT_ORIGINAL(0x00cb0560, fn_00cb0560, void(SlotTable *table, int32_t index, uint32_t value));

}  // namespace

/**
 *
 * Visits every slot of the table in order: each slot's value is read from the source, then stored back
 * into that slot.
 *
 * Nothing is returned.
 */
extern "C" void bb_misc_apply_each_slot(SlotTable *table, const void *source)
{
    const int32_t count = table->count_0x18;
    for (int32_t index = 0; index < count; ++index) {
        const uint32_t value = fn_00cb0b10(table, index, source);
        fn_00cb0560(table, index, value);
    }
}
