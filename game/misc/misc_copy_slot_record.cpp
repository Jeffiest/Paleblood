// SPDX-License-Identifier: GPL-2.0-or-later
#include "slot_copy_record.h"

/**
 *
 * Copies a source record into a target record: a 16-byte block, a qword and a byte.
 *
 * The source is left as it is. Nothing is returned.
 */
extern "C" void bb_misc_copy_slot_record(misc::SlotCopyTarget *target, const misc::SlotCopySource *source)
{
    target->low_0x20 = source->low_0x00;
    target->high_0x28 = source->high_0x08;
    target->byte_0x38 = source->byte_0x18;
    target->qword_0x30 = source->qword_0x10;
}
