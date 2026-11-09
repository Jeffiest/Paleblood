// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RefLeaf;

/**
 *
 * A branch of a reference item: the leaves it lists, each passed on to the children of a holder.
 *
 */
struct RefBranch {
    uint8_t unknown_0x00[0xd0];
    RefLeaf **leaves;   /**< Leaves of the branch, in order. */
    int32_t leaf_count; /**< Number of leaves. */
};
static_assert(offsetof(RefBranch, leaves) == 0xd0);
static_assert(offsetof(RefBranch, leaf_count) == 0xd8);

}  // namespace misc
