// SPDX-License-Identifier: GPL-2.0-or-later
#include "tagged_link.h"

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is bit 0 of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_misc_tagged_link_address(const misc::TaggedLink *link)
{
    return link->tagged & ~misc::tagged_link_flag;
}
