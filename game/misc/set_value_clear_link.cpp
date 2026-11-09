// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_link.h"

#include <cstdint>

/**
 *
 * Stores a value in a slot and clears the link that follows it, so the slot holds no next item.
 *
 * The value is stored as it is given, and the link word is set to zero.
 */
extern "C" void bb_misc_set_value_clear_link(misc::ValueLink *slot, uint64_t value)
{
    slot->value = value;
    slot->link = 0;
}
