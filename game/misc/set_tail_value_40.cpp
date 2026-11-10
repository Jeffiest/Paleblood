// SPDX-License-Identifier: GPL-2.0-or-later
#include "tail_slots.h"

#include <cstdint>

/**
 *
 * Stores a value into the second tail word of an object and leaves the first tail word as it is.
 *
 * The value is stored as it is given, so the word takes exactly the argument.
 */
extern "C" void bb_misc_set_tail_value_40(misc::TailSlots *slots, uint64_t value)
{
    slots->value_0x40 = value;
}
