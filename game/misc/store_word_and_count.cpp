// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a word, then counts it in the shared keyed counter table when its key matches the entry it names.
#include <cstdint>

#include "../engine/engine.h"
#include "keyed_counter_table.h"

namespace {

constexpr uint32_t kIndexFlag = 0x800000;     /**< Set in a word that names a table entry. */
constexpr uint32_t kLow24Mask = 0xffffff;     /**< The part of a word that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;     /**< Stands for a word whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;       /**< The index part of a word; all ones means no entry. */

}  // namespace

/**
 *
 * Stores the word at the destination. A nonzero word whose low bits name an entry of the shared table counts up that
 * entry when its key equals the whole word.
 *
 * Returns the word, as the original leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_store_word_and_count_01e8bb70(uint32_t *destination, const uint32_t *word)
{
    const uint32_t value = *word;
    *destination = value;
    if (value == 0) return value;
    misc::KeyedCounterTable *table = engine::require(misc::keyed_counter_table, misc::keyed_counter_table_name.address());
    uint32_t index = value & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0) return value;
    index &= kLow16Mask;
    if (index == kLow16Mask) return value;
    misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
    if (entry.key_0x00 == value) entry.count_0x04 += 1;
    return value;
}
