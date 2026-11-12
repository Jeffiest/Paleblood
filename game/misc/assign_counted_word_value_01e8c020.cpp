// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a word value in a stored word, moving the counts of the shared table entries the two words name.
#include <cstdint>

#include "keyed_counter_table.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e86e60, release_and_rekey_slot, void(misc::KeyedCounterTable *table, uint32_t word));

constexpr uint32_t kIndexFlag = 0x800000;     /**< Set in a word that names a table entry. */
constexpr uint32_t kLow24Mask = 0xffffff;     /**< The part of a word that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;     /**< Stands for a word whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;       /**< The index part of a word; all ones means no entry. */
constexpr int32_t kCountFloor = 2;            /**< A count below this is spent: the slot is released instead. */

/**
 *
 * The table entry a word names, or nullptr when the word names none or the entry's key is a different word.
 *
 */
misc::KeyedCounterEntry *find_named_entry(misc::KeyedCounterTable *table, uint32_t word)
{
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0) return nullptr;
    index &= kLow16Mask;
    if (index == kLow16Mask) return nullptr;
    misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
    if (entry.key_0x00 != word) return nullptr;
    return &entry;
}

}  // namespace

/**
 *
 * Stores the new word in the destination. The entry the new word names counts up; the entry the old word names
 * counts down, and its slot is released when its count is already below two. Nothing moves when the words are equal.
 *
 * Returns the destination, as the original leaves it in RAX.
 *
 * The last two integer registers are the arguments a missing-table report passes on: the report does not read them.
 *
 */
extern "C" uint64_t bb_misc_assign_counted_word_value_01e8c020(uint32_t *destination, uint32_t new_word, uint64_t,
                                                              uint64_t, uint64_t report_arg_0, uint64_t report_arg_1)
{
    const uint32_t old_word = *destination;
    if (old_word == new_word) return reinterpret_cast<uint64_t>(destination);
    if (new_word != 0) {
        misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
        misc::KeyedCounterEntry *entry = find_named_entry(table, new_word);
        if (entry != nullptr) entry->count_0x04 += 1;
    }
    if (old_word != 0) {
        misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
        misc::KeyedCounterEntry *entry = find_named_entry(table, old_word);
        if (entry != nullptr) {
            if (entry->count_0x04 < kCountFloor) {
                entry->count_0x04 = 0;
                release_and_rekey_slot(table, old_word);
            } else {
                entry->count_0x04 -= 1;
            }
        }
    }
    *destination = new_word;
    return reinterpret_cast<uint64_t>(destination);
}
