// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a scope, which holds the root node the scope attaches.
#pragma once

#include <cstddef>
#include <cstdint>

#include "flag_node.h"

namespace misc {

/**
 *
 * The owner of a scope: the root node it hands to the scope sits at +0x2a0.
 *
 */
struct ScopeOwner {
    uint8_t unknown_0x0000[0x2a0];
    FlagNode *root_0x2a0; /**< Root node the scope attaches. */
};
static_assert(offsetof(ScopeOwner, root_0x2a0) == 0x2a0);

}  // namespace misc
