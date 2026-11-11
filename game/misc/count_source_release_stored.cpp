// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: counts up the source word's shared entry, lowers or releases the stored word's entry, then stores the source word.
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
 * Returns the entry a word names in the table, or null when the word names none or its key differs from it.
 *
 */
misc::KeyedCounterEntry *matching_entry(misc::KeyedCounterTable *table, uint32_t word)
{
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0) return nullptr;
    index &= kLow16Mask;
    if (index == kLow16Mask) return nullptr;
    misc::KeyedCounterEntry *entry = &table->entries_0x8008[index];
    return entry->key_0x00 == word ? entry : nullptr;
}

}  // namespace

/**
 *
 * Counts up the entry the source word names when its key matches. When the stored word names a matching entry, that
 * entry is lowered, or its slot released once spent. The source word is then stored in place of the stored word.
 *
 * Returns the stored word's address.
 *
 * The last two integer registers are the arguments a missing-table report passes on: the report does not read them.
 *
 */
extern "C" uint32_t *bb_misc_count_source_release_stored_01e8bd80(uint32_t *stored, const uint32_t *source, uint64_t,
                                                                  uint64_t, uint64_t report_arg_0, uint64_t report_arg_1)
{
    if (*stored == *source) return stored;
    const uint32_t source_word = *source;
    if (source_word != 0) {
        misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
        misc::KeyedCounterEntry *entry = matching_entry(table, source_word);
        if (entry != nullptr) entry->count_0x04 += 1;
    }
    const uint32_t stored_word = *stored;
    if (stored_word != 0) {
        misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
        misc::KeyedCounterEntry *entry = matching_entry(table, stored_word);
        if (entry != nullptr) {
            if (entry->count_0x04 < kCountFloor) {
                entry->count_0x04 = 0;
                release_and_rekey_slot(table, stored_word);
            } else {
                entry->count_0x04 -= 1;
            }
        }
    }
    *stored = *source;
    return stored;
}
