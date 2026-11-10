// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: forwards a record's value and mode to the object's vtable slot at +0x90, as a tail call.
#include "mode_forwarding_object.h"
#include "mode_record.h"

/**
 *
 * Reads the value and the mode from the record and passes them, with the object, to its slot at +0x90.
 *
 * The slot's result is returned as it is; the record is not written.
 */
extern "C" uint64_t bb_misc_forward_record_to_slot_90(misc::ModeRecord *record, misc::ModeForwardingObject *object)
{
    const uint64_t value = record->value_0x18;
    const uint32_t mode = *record->mode_0x20;
    return object->vtable->slot_0x90(object, value, mode);
}
