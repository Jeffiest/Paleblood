// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the value of an outer list node, which holds the sentinel of its inner list.
#pragma once

#include <cstddef>
#include <cstdint>

#include "owned_node.h"

namespace misc {

/**
 *
 * The value of an outer node: its inner list is reached through the sentinel at +0x8.
 *
 */
struct OwnedGroup {
    uint8_t unknown_0x0000[0x8];
    OwnedNode *items_0x0008;     /**< Sentinel of the inner list. */
};
static_assert(offsetof(OwnedGroup, items_0x0008) == 0x8);

}  // namespace misc
