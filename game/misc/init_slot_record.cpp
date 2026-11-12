// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>
#include <cstring>

#include "slot_record.h"

namespace {

constexpr int32_t initial_budget = 100000;
constexpr float initial_tolerance = 1.0f;

}  // namespace

/**
 *
 * Initialises a slot record: empties its four slots, sets its budget, clears two words, sets its
 * tolerance and enabled flag, then clears its trailing words.
 *
 * The record's address is the only input, and nothing is returned.
 */
extern "C" void bb_misc_init_slot_record(misc::SlotRecord *record)
{
    for (misc::ReservedSlot &slot : record->slots) {
        slot.block = nullptr;
        slot.count = 0;
        slot.capacity_word = misc::reserved_slot_unallocated;
    }
    record->budget = initial_budget;
    record->cleared_word_a = 0;
    record->cleared_word_b = 0;
    record->tolerance = initial_tolerance;
    record->enabled = true;
    std::memset(record->tail_words, 0, sizeof record->tail_words);
}
