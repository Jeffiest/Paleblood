// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_tagged_link_address, in game/misc/tagged_link_address.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/tagged_link.h"

// auto_tagged_link_address_00bec050: misc_tagged_link_address with other addresses.
namespace twin_00bec050 {

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is bit 0 of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_00bec050(const misc::TaggedLink *link)
{
    return link->tagged & ~misc::tagged_link_flag;
}

}  // namespace twin_00bec050
