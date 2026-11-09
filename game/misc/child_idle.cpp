// SPDX-License-Identifier: GPL-2.0-or-later
// Reports idle when the child's query returns zero. Otherwise the owner is idle only when its
// counter is zero. The query result is read as 32 bits.
#include "misc.h"

/**
 *
 * Asks the owned child whether it is finished, and reports idle when the answer is zero or the counter is zero.
 *
 */
extern "C" bool bb_misc_child_idle(misc::ChildOwner *owner)
{
    misc::ChildObject *child = owner->child;
    const int32_t query_result = child->vtable->query(child);
    if (query_result == 0) return true;
    return owner->counter_78 == 0;
}
