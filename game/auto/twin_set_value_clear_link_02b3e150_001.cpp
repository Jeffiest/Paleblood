// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_set_value_clear_link, in game/misc/set_value_clear_link.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/value_link.h"
#include <cstdint>

// auto_set_value_clear_link_01374030: misc_set_value_clear_link with other addresses.
namespace twin_01374030 {

/**
 *
 * Stores a value in a slot and clears the link that follows it, so the slot holds no next item.
 *
 * The value is stored as it is given, and the link word is set to zero.
 */
extern "C" void bb_auto_set_value_clear_link_01374030(misc::ValueLink *slot, uint64_t value)
{
    slot->value = value;
    slot->link = 0;
}

}  // namespace twin_01374030

// auto_set_value_clear_link_014b5880: misc_set_value_clear_link with other addresses.
namespace twin_014b5880 {

/**
 *
 * Stores a value in a slot and clears the link that follows it, so the slot holds no next item.
 *
 * The value is stored as it is given, and the link word is set to zero.
 */
extern "C" void bb_auto_set_value_clear_link_014b5880(misc::ValueLink *slot, uint64_t value)
{
    slot->value = value;
    slot->link = 0;
}

}  // namespace twin_014b5880

// auto_set_value_clear_link_0267ca00: misc_set_value_clear_link with other addresses.
namespace twin_0267ca00 {

/**
 *
 * Stores a value in a slot and clears the link that follows it, so the slot holds no next item.
 *
 * The value is stored as it is given, and the link word is set to zero.
 */
extern "C" void bb_auto_set_value_clear_link_0267ca00(misc::ValueLink *slot, uint64_t value)
{
    slot->value = value;
    slot->link = 0;
}

}  // namespace twin_0267ca00
