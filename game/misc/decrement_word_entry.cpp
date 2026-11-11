// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: lowers the count of the shared table entry a stored word names, releasing the slot when the count runs out.
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

}  // namespace

/**
 *
 * Lowers the count of the shared table entry the stored word names, when that entry's key equals the word. An entry
 * whose count is already below two is cleared and its slot is released.
 *
 * The last two integer registers are the arguments a missing-table report passes on: the report does not read them.
 *
 */
extern "C" void bb_misc_decrement_word_entry_01e8bc00(uint32_t *word_slot, uint64_t, uint64_t, uint64_t,
                                                      uint64_t report_arg_0, uint64_t report_arg_1)
{
    const uint32_t word = *word_slot;
    if (word == 0) return;
    misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0) return;
    index &= kLow16Mask;
    if (index == kLow16Mask) return;
    misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
    if (entry.key_0x00 != word) return;
    if (entry.count_0x04 < kCountFloor) {
        entry.count_0x04 = 0;
        release_and_rekey_slot(table, word);
        return;
    }
    entry.count_0x04 -= 1;
}
