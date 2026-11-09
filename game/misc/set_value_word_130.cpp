// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

/**
 *
 * Stores the value in the owner's word at +0x130.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_misc_set_value_word_130(misc::ValueOwner *owner, uint64_t value)
{
    owner->word_0x130 = value;
}
