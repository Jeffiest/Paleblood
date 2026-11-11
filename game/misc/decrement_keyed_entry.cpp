// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: lowers the count of a keyed table entry when its key matches the value, and releases the slot once the count runs out.
#include "keyed_counter_table.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e86e60, release_and_rekey_slot_01e86e60, uint64_t(misc::KeyedCounterTable *table, uint32_t word));

constexpr uint32_t kIndexFlag = 0x800000;     /**< Set in a value that names a table entry. */
constexpr uint32_t kLow24Mask = 0xffffff;     /**< The part of a value that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;     /**< Stands for a value whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;       /**< The index part of a value; all ones means no entry. */
constexpr int32_t kCountFloor = 2;            /**< A count below this is spent: the slot is released instead. */

}  // namespace

/**
 *
 * Lowers the count of the entry a value names, when the entry's key equals the whole value. When the count is
 * already below two the count is cleared and the slot is released through the original routine at 0x01e86e60,
 * whose result is returned.
 *
 * Otherwise the return value is the entry index, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_decrement_keyed_entry_01e86e00(misc::KeyedCounterTable *table, const uint32_t *value)
{
    const uint32_t word = *value;
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0 || word == 0) return index;
    index &= kLow16Mask;
    if (index == kLow16Mask) return index;
    misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
    if (entry.key_0x00 != word) return index;
    if (entry.count_0x04 < kCountFloor) {
        entry.count_0x04 = 0;
        return release_and_rekey_slot_01e86e60(table, word);
    }
    entry.count_0x04 -= 1;
    return index;
}
