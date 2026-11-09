// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the third size table's entry for the size class of the request size.
#include "size_class_holder.h"

/**
 *
 * Returns the entry of the third size table for the size class that the request size falls in.
 *
 */
extern "C" uint64_t bb_misc_size_class_entry_third(misc::SizeClassHolder *holder, uint32_t size)
{
    return holder->table_0x360[misc::size_class_for(size)];
}
