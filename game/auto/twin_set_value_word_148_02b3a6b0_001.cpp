// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_set_value_word_148, in game/misc/set_value_word_148.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/value_owner.h"

// auto_set_value_word_148_010e6db0: misc_set_value_word_148 with other addresses.
namespace twin_010e6db0 {

/**
 *
 * Stores the value in the owner's word at +0x148.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_value_word_148_010e6db0(misc::ValueOwner *owner, uint64_t value)
{
    owner->word_0x148 = value;
}

}  // namespace twin_010e6db0
