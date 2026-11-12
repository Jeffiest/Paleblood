// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of an ordered map: its head node, its size, the allocators and the table that follows.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "ordered_map_head_node.h"

namespace misc {

/**
 *
 * An ordered map's owner: the first block is zeroed when it is set up, then the head node, the size and the allocator
 * are set, and the table at +0x120 is zeroed.
 *
 */
struct OrderedMapOwner {
    uint8_t unknown_0x0000[0x100];
    OrderedMapHeadNode *head;             /**< The sentinel node of the map. */
    uint64_t size;                        /**< The number of entries in the map. */
    engine::Allocator *allocator;         /**< The allocator the head node came from. */
    engine::Allocator *second_allocator;  /**< The allocator set after the head node is stored. */
    uint8_t unknown_0x0120[0x3a30];
};
static_assert(offsetof(OrderedMapOwner, head) == 0x100);
static_assert(offsetof(OrderedMapOwner, size) == 0x108);
static_assert(offsetof(OrderedMapOwner, allocator) == 0x110);
static_assert(offsetof(OrderedMapOwner, second_allocator) == 0x118);
static_assert(offsetof(OrderedMapOwner, unknown_0x0120) == 0x120);

}  // namespace misc
