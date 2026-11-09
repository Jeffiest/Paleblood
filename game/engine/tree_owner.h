// SPDX-License-Identifier: GPL-2.0-or-later
// The owner of an ordered map: the object whose allocator frees the nodes of the map's tree.
#pragma once

#include <cstddef>
#include <cstdint>

#include "allocator.h"

namespace engine {

/**
 *
 * The owner of an ordered map, of which only the node allocator at +0x18 is used here.
 *
 * The words before the allocator belong to the map head and are not read by the tree code.
 *
 */
struct TreeOwner {
    uint8_t unknown_0x0000[0x18];
    Allocator *allocator; /**< Allocator that frees the tree's nodes. */
};
static_assert(offsetof(TreeOwner, allocator) == 0x18);

}  // namespace engine
