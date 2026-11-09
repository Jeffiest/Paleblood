// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner of a circular list of value nodes, guarded by a lock that lives inside the owner.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ListNode;

/**
 *
 * A node of the list: its next node, the slot before it, and the value it carries.
 *
 */
struct ListNode {
    ListNode *next;    /**< The following node. */
    void *previous;    /**< The slot before this node: the owner's head slot, or the previous node. */
    uint64_t value;    /**< The value the node carries. */
};
static_assert(offsetof(ListNode, previous) == 0x08);
static_assert(offsetof(ListNode, value) == 0x10);

/** The room the lock takes inside the owner. */
constexpr size_t list_lock_size = 0x10;

/**
 *
 * The owner of the list: its head slot and the lock that guards the list.
 *
 */
struct ListOwner {
    uint8_t unknown_0x0000[0x30];
    ListNode *head;    /**< The first node of the list, which is never null. */
    ListNode *tail;   /**< The last node, where a removal walk starts. */
    uint8_t lock[list_lock_size]; /**< The lock; its address is given to the lock calls. */
};
static_assert(offsetof(ListOwner, head) == 0x30);
static_assert(offsetof(ListOwner, tail) == 0x38);
static_assert(offsetof(ListOwner, lock) == 0x40);

}  // namespace misc
