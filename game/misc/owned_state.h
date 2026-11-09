// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owned state whose items, packed reference, held object and node list a reset releases.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "packed_ref_object.h"

namespace misc {

/**
 *
 * A node of the owned list: the links on either side, where the sentinel closes the ring.
 *
 */
struct OwnedNode {
    OwnedNode *next;  /**< Next node, or the sentinel after the last. */
    OwnedNode *prev;  /**< Previous node, or the sentinel before the first. */
};
static_assert(offsetof(OwnedNode, prev) == 0x8);

/**
 *
 * The state object: its allocators, the items it owns, a packed reference, a node list and two counters.
 *
 */
struct OwnedState {
    engine::Allocator *allocator;             /**< Frees the items at 0x978 and 0x980. */
    uint8_t unknown_0x0008[0x8];
    uint8_t unknown_0x0010[0x308];            /**< Base object: the tail call resets it. */
    OwnedNode *sentinel;                      /**< Sentinel of the node list. */
    uint64_t node_count;                      /**< Number of nodes in the list. */
    engine::Allocator *node_allocator;        /**< Frees the list nodes and the sentinel. */
    uint8_t unknown_0x0330[0x8];
    void *held_object;                        /**< Freed through the held allocator. */
    uint64_t unknown_0x0340;
    uint64_t unknown_0x0348;
    engine::Allocator *held_allocator;        /**< Frees the held object. */
    uint8_t unknown_0x0358[0x270];
    uint16_t word_0x05c8;                     /**< Cleared by the reset. */
    uint8_t unknown_0x05ca[0xe];
    uint64_t value_0x05d8;                    /**< Cleared by the reset. */
    uint64_t counter_0x05e0;                  /**< Above 7: reduced to 7 by the reset. */
    uint8_t unknown_0x05e8[0x81];
    uint8_t flags_0x0669;                     /**< Bit 1 is cleared by the reset when the counter is 8 or more. */
    uint8_t unknown_0x066a[0x6];
    uint8_t unknown_0x0670[0x308];            /**< Member object: the first base reset call receives it. */
    void *item_0x0978;                        /**< Released through the base reset and the allocator. */
    void *item_0x0980;                        /**< Freed through the allocator. */
    uint8_t unknown_0x0988[0x8];
    PackedRefObject *packed_ref;              /**< Reference released when the reset runs. */
};
static_assert(offsetof(OwnedState, sentinel) == 0x318 && offsetof(OwnedState, node_count) == 0x320);
static_assert(offsetof(OwnedState, node_allocator) == 0x328 && offsetof(OwnedState, held_object) == 0x338);
static_assert(offsetof(OwnedState, held_allocator) == 0x350 && offsetof(OwnedState, word_0x05c8) == 0x5c8);
static_assert(offsetof(OwnedState, value_0x05d8) == 0x5d8 && offsetof(OwnedState, counter_0x05e0) == 0x5e0);
static_assert(offsetof(OwnedState, flags_0x0669) == 0x669 && offsetof(OwnedState, unknown_0x0670) == 0x670);
static_assert(offsetof(OwnedState, item_0x0978) == 0x978 && offsetof(OwnedState, item_0x0980) == 0x980);
static_assert(offsetof(OwnedState, packed_ref) == 0x990 && sizeof(OwnedState) == 0x998);

}  // namespace misc
