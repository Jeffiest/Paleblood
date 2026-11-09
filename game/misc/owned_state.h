// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owned state whose items, entries, packed reference, held object and node list it manages.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "owned_entry.h"
#include "owned_node.h"
#include "packed_ref_object.h"

namespace misc {

/**
 *
 * The state object: its allocators, the items and entries it owns, a packed reference, a node list and counters.
 *
 */
struct OwnedState {
    engine::Allocator *allocator;             /**< Frees the items at 0x978 and the entries at 0x980. */
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
    uint8_t unknown_0x0670[0x40];             /**< Member object: the list walk resets it first. */
    uint8_t unknown_0x06b0[0x2c8];            /**< Object whose address the entry update passes on. */
    void *item_0x0978;                        /**< Released through the base reset and the allocator. */
    OwnedEntry *entries_0x0980;               /**< Array of entries, freed through the allocator. */
    uint32_t entry_count_0x0988;              /**< Number of entries in the array. */
    uint8_t unknown_0x098c[0x4];
    PackedRefObject *packed_ref;              /**< Reference released when the reset runs. */
};
static_assert(offsetof(OwnedState, sentinel) == 0x318 && offsetof(OwnedState, node_count) == 0x320);
static_assert(offsetof(OwnedState, node_allocator) == 0x328 && offsetof(OwnedState, held_object) == 0x338);
static_assert(offsetof(OwnedState, held_allocator) == 0x350 && offsetof(OwnedState, word_0x05c8) == 0x5c8);
static_assert(offsetof(OwnedState, value_0x05d8) == 0x5d8 && offsetof(OwnedState, counter_0x05e0) == 0x5e0);
static_assert(offsetof(OwnedState, flags_0x0669) == 0x669 && offsetof(OwnedState, unknown_0x0670) == 0x670);
static_assert(offsetof(OwnedState, unknown_0x06b0) == 0x6b0 && offsetof(OwnedState, item_0x0978) == 0x978);
static_assert(offsetof(OwnedState, entries_0x0980) == 0x980 && offsetof(OwnedState, entry_count_0x0988) == 0x988);
static_assert(offsetof(OwnedState, packed_ref) == 0x990 && sizeof(OwnedState) == 0x998);

}  // namespace misc
