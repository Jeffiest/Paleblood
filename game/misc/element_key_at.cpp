// SPDX-License-Identifier: GPL-2.0-or-later
#include "element_table.h"

#include <cstdint>

#include "runtime/original.h"

namespace {
RT_ORIGINAL(0x02b3b310, fn_02b3b310, int32_t(misc::TableElement *));
}  // namespace

/**
 *
 * Returns the key of the element at index, read through the element's own key callee.
 *
 * The index is a signed 32-bit value, sign-extended before it scales the element offset. The element
 * is passed to the key callee and its result is returned as it is.
 */
extern "C" int32_t bb_misc_element_key_at(misc::ElementTable *table, int32_t index)
{
    return fn_02b3b310(&table->elements[index]);
}
