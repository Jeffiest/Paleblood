// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: replaces a stored word with the source word when they differ, releasing the old word's counted slot first.
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
 * When the stored word and the source word differ, the stored word's counted entry is lowered, or its slot released
 * once spent. The source word then replaces the stored word and the source is cleared.
 *
 * Returns the stored word's address.
 *
 * The last two integer registers are the arguments a missing-table report passes on: the report does not read them.
 *
 */
extern "C" uint32_t *bb_misc_move_word_release_old_01e8bcb0(uint32_t *stored, uint32_t *source, uint64_t, uint64_t,
                                                            uint64_t report_arg_0, uint64_t report_arg_1)
{
    const uint32_t old_word = *stored;
    if (old_word == *source) return stored;
    if (old_word != 0) {
        misc::KeyedCounterTable *table = misc::require_counter_table(report_arg_0, report_arg_1);
        uint32_t index = old_word & kLow24Mask;
        if (index == kLow24Mask) index = kNoIndex;
        if ((index & kIndexFlag) != 0) {
            index &= kLow16Mask;
            if (index != kLow16Mask) {
                misc::KeyedCounterEntry &entry = table->entries_0x8008[index];
                if (entry.key_0x00 == old_word) {
                    if (entry.count_0x04 < kCountFloor) {
                        entry.count_0x04 = 0;
                        release_and_rekey_slot(table, old_word);
                    } else {
                        entry.count_0x04 -= 1;
                    }
                }
            }
        }
    }
    *stored = *source;
    *source = 0;
    return stored;
}
