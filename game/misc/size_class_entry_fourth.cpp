// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the fourth size table's entry for the size class of the request size.
#include "size_class_holder.h"

/**
 *
 * Returns the entry of the fourth size table for the size class that the request size falls in.
 *
 */
extern "C" uint64_t bb_misc_size_class_entry_fourth(misc::SizeClassHolder *holder, uint32_t size)
{
    return holder->table_0x3c8[misc::size_class_for(size)];
}
