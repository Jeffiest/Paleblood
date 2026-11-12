// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the address of an entry of the second array of an entry array holder.
#include <cstdint>

#include "entry_array_holder.h"

/**
 *
 * Returns the address of the entry at the index of the second array: the index is scaled by the entry stride and added to
 * the start of the second array.
 *
 */
extern "C" uint8_t *bb_misc_second_entry_address_013ba210(misc::EntryArrayHolder *holder, uint32_t index)
{
    return misc::entry_array_element(holder->second_entries, index);
}
