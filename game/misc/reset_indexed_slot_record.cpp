// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: resets an indexed slot record to its initial state: two empty slots, a default scale and cleared state words.
#include <cstdint>

#include "indexed_slot_record.h"

/**
 *
 * Resets the record: its first two slots are marked empty and its state words take their starting values.
 *
 * Nothing is returned: the original leaves RAX alone, so this function returns nothing.
 *
 */
extern "C" void bb_misc_reset_indexed_slot_record(misc::IndexedSlotRecord *record)
{
    record->first_slot = misc::empty_slot_value;
    record->second_slot = misc::empty_slot_value;
    record->value_0x28 = 1;
    record->value_0x2c = 0;
    record->value_0x30 = 0;
    record->value_0x34 = 0;
    record->scale_0x38 = misc::default_scale;
    record->value_0x3c = 0;
    record->value_0x40 = 0;
    record->value_0x44 = 0;
    record->value_0x48 = 0;
    record->value_0x4c = 0;
}
