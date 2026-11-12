// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears the record tag of an owner reached through a vtable slot; the original leaves RAX alone, so nothing is returned.
#include "record_tag_owner.h"

/**
 *
 * Clears the record tag the owner keeps at +0x78, and nothing else.
 *
 */
extern "C" void bb_misc_clear_record_tag_02265c60(misc::RecordTagOwner *owner)
{
    owner->tag = 0;
}
