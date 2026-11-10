// SPDX-License-Identifier: GPL-2.0-or-later
#include "query_child.h"

#include <cstdint>

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's query slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_misc_query_owned_child(misc::QueryChildOwner *owner)
{
    misc::QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}
