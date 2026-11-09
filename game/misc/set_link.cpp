// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_link.h"

#include <cstdint>

/**
 *
 * Stores the link word of a two-word slot, leaving its value word as it is.
 *
 * The link is stored as it is given, so the slot points at the next item.
 */
extern "C" void bb_misc_set_link(misc::ValueLink *slot, uint64_t link)
{
    slot->link = link;
}
