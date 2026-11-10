// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a chain of nodes that is handed back to the scratch service, with its own value word.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A node of a release chain: the first word is the next node, or null at the end of the chain.
 *
 */
struct ReleaseChainNode {
    ReleaseChainNode *next;      /**< Next node of the chain, or null after the last one. */
};
static_assert(offsetof(ReleaseChainNode, next) == 0x00);

struct ReleaseChainAllocator;

/**
 *
 * The vtable of a chain's allocator, of which only the allocate slot is used.
 *
 */
struct ReleaseChainAllocatorVtable {
    uint8_t unknown_0x0000[0x50];
    void *(*allocate)(ReleaseChainAllocator *allocator, uint64_t size, uint64_t flags); /**< Slot at 0x50: returns a block of size bytes or null. */
    void *(*allocate_aligned)(ReleaseChainAllocator *allocator, uint64_t size, uint64_t alignment, uint64_t flags); /**< Slot at 0x58: returns an aligned block or null. */
};
static_assert(offsetof(ReleaseChainAllocatorVtable, allocate) == 0x50);
static_assert(offsetof(ReleaseChainAllocatorVtable, allocate_aligned) == 0x58);

/**
 *
 * The allocator a chain takes its nodes from; the first word is its vtable pointer.
 *
 */
struct ReleaseChainAllocator {
    const ReleaseChainAllocatorVtable *vtable; /**< Dispatch table for the allocator's methods. */
};
static_assert(offsetof(ReleaseChainAllocator, vtable) == 0x00);

/**
 *
 * A release chain: two words cleared on initialization, the head node at 0x10 and the allocator at 0x18.
 *
 */
struct ReleaseChain {
    uint64_t first_word;         /**< Cleared on initialization. */
    uint64_t second_word;        /**< Cleared on initialization. */
    ReleaseChainNode *head;      /**< First node of the chain, released node by node. */
    ReleaseChainAllocator *allocator; /**< Allocator the chain's nodes are taken from. */
};
static_assert(offsetof(ReleaseChain, head) == 0x10);
static_assert(offsetof(ReleaseChain, allocator) == 0x18);

}  // namespace misc
