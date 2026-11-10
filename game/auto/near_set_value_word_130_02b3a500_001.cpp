// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_set_value_word_130, in game/misc/set_value_word_130.cpp, each using other addresses and constants.
// Every block below is that function's source with the addresses and constants exchanged: the
// names and comments in a block were written for that function and are carried over.
#include "../misc/value_owner.h"

// auto_set_value_word_138_02be85c0: misc_set_value_word_130 with other addresses and constants.
namespace near_02be85c0 {

/**
 *
 * Stores the value in the owner's word at +0x130.
 *
 * Nothing else is read or changed.
 */
extern "C" void bb_auto_set_value_word_138_02be85c0(misc::ValueOwner *owner, uint64_t value)
{
    owner->word_0x138 = value;
}

}  // namespace near_02be85c0
