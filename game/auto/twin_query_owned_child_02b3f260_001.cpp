// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_query_owned_child, in game/misc/query_owned_child.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/query_child.h"
#include <cstdint>

// auto_query_owned_child_02b38d50: misc_query_owned_child with other addresses.
namespace twin_02b38d50 {

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's query slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02b38d50(misc::QueryChildOwner *owner)
{
    misc::QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace twin_02b38d50
