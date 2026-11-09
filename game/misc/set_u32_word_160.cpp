// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

/**
 *
 * Stores the low 32 bits of the value in the owner's word at +0x160.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_misc_set_u32_word_160(misc::ValueOwner *owner, uint32_t value)
{
    owner->word_0x160 = value;
}
