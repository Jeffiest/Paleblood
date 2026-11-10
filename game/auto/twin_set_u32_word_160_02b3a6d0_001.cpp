// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_set_u32_word_160, in game/misc/set_u32_word_160.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/value_owner.h"

// auto_set_u32_word_160_010d27e0: misc_set_u32_word_160 with other addresses.
namespace twin_010d27e0 {

/**
 *
 * Stores the low 32 bits of the value in the owner's word at +0x160.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_u32_word_160_010d27e0(misc::ValueOwner *owner, uint32_t value)
{
    owner->word_0x160 = value;
}

}  // namespace twin_010d27e0
