// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: counts a value in the keyed counter table when its low bits name an entry and that entry's key matches.
#include "keyed_counter_table.h"

namespace {

constexpr uint32_t kIndexFlag = 0x800000;     /**< Set in a value that names a table entry. */
constexpr uint32_t kLow24Mask = 0xffffff;     /**< The part of a value that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;     /**< Stands for a value whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;       /**< The index part of a value; all ones means no entry. */

}  // namespace

/**
 *
 * Counts a value in the table: when its low 16 bits name an entry and the entry's key equals the whole value,
 * that entry's count goes up by one.
 *
 * Returns the value that was read, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_count_keyed_entry_01e86dc0(misc::KeyedCounterTable *table, const uint32_t *value)
{
    const uint32_t word = *value;
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0 || word == 0) return word;
    index &= kLow16Mask;
    if (index == kLow16Mask) return word;
    misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
    if (entry.key_0x00 == word) entry.count_0x04 += 1;
    return word;
}
