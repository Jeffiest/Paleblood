// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_forward_record_to_slot_90, in game/misc/forward_record_to_slot_90.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/mode_forwarding_object.h"
#include "../misc/mode_record.h"

// auto_forward_record_to_slot_90_0186b260: misc_forward_record_to_slot_90 with other addresses.
namespace twin_0186b260 {

// Misc: forwards a record's value and mode to the object's vtable slot at +0x90, as a tail call.

/**
 *
 * Reads the value and the mode from the record and passes them, with the object, to its slot at +0x90.
 *
 * The slot's result is returned as it is; the record is not written.
 */
extern "C" uint64_t bb_auto_forward_record_to_slot_90_0186b260(misc::ModeRecord *record, misc::ModeForwardingObject *object)
{
    const uint64_t value = record->value_0x18;
    const uint32_t mode = *record->mode_0x20;
    return object->vtable->slot_0x90(object, value, mode);
}

}  // namespace twin_0186b260

// auto_forward_record_to_slot_90_02ddde60: misc_forward_record_to_slot_90 with other addresses.
namespace twin_02ddde60 {

// Misc: forwards a record's value and mode to the object's vtable slot at +0x90, as a tail call.

/**
 *
 * Reads the value and the mode from the record and passes them, with the object, to its slot at +0x90.
 *
 * The slot's result is returned as it is; the record is not written.
 */
extern "C" uint64_t bb_auto_forward_record_to_slot_90_02ddde60(misc::ModeRecord *record, misc::ModeForwardingObject *object)
{
    const uint64_t value = record->value_0x18;
    const uint32_t mode = *record->mode_0x20;
    return object->vtable->slot_0x90(object, value, mode);
}

}  // namespace twin_02ddde60
