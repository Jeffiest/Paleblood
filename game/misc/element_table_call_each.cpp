// SPDX-License-Identifier: GPL-2.0-or-later
#include "element_table.h"

#include <cstdint>

#include "runtime/original.h"

namespace {
RT_ORIGINAL(0x02b3b330, fn_02b3b330, void(misc::TableElement *));
}  // namespace

/**
 *
 * Passes every element of a table to a callee, in index order, and returns nothing.
 *
 * The element count is read again after each call, and an empty table makes no call at all.
 */
extern "C" void bb_misc_element_table_call_each(misc::ElementTable *table)
{
    if (table->element_count == 0) return;
    uint32_t index = 0;
    do {
        fn_02b3b330(&table->elements[index]);
        ++index;
    } while (index < table->element_count);
}
