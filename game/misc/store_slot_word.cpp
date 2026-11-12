// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores a 32-bit word into the slot array of an indexed slot record and returns the index it used.
#include <cstdint>

#include "indexed_slot_record.h"

/**
 *
 * Stores the word at the given index of the record's slot array, then returns that index.
 *
 * The index is taken as 32 bits and widened to 64 bits, so the returned value is the zero-extended index.
 *
 */
extern "C" uint64_t bb_misc_store_slot_word(misc::IndexedSlotRecord *record, uint32_t index, uint32_t value)
{
    uint32_t *slots = &record->first_slot;
    slots[index] = value;
    return index;
}
