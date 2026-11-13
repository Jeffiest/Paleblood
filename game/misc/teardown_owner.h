// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner with an object, two node lists, a single pointer slot and the releaser that frees it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "destroyable_node.h"

namespace misc {

/**
 *
 * A node of an owner's list: the two links, then the object the node holds, which may be null.
 *
 */
struct OwnedListNode {
    OwnedListNode *next;                       /**< The following node; the list's sentinel ends the list. */
    OwnedListNode *prev;                       /**< The preceding node. */
    DestroyableNode *object;                   /**< The object the node holds, or null. */
};
static_assert(offsetof(OwnedListNode, object) == 0x10);

struct TeardownReleaser;

/**
 *
 * The vtable of the releaser: its release slot is at +0x70.
 *
 */
struct TeardownReleaserVtable {
    uint8_t unknown_0x0000[0x70];
    void (*release)(TeardownReleaser *releaser, void *value);    /**< Releases the value it is given. */
};
static_assert(offsetof(TeardownReleaserVtable, release) == 0x70);

/**
 *
 * An object whose release slot is called with the owner's single pointer when the owner is torn down.
 *
 */
struct TeardownReleaser {
    const TeardownReleaserVtable *vtable;      /**< The releaser's vtable. */
};

/**
 *
 * An owner that holds an object, two node lists (each a sentinel and a count), an allocator for each list,
 * and a single pointer released through its releaser.
 *
 */
struct TeardownOwner {
    const void *vtable;                        /**< Set by the teardown to the owner's vtable address point. */
    uint8_t unknown_0x0008[0x08];
    OwnedListNode *first_sentinel;             /**< The sentinel of the first list. */
    uint64_t first_count;                      /**< The number of nodes in the first list. */
    engine::Allocator *first_allocator;        /**< Frees the first list's nodes and then its sentinel. */
    DestroyableNode *object;                   /**< An object destroyed and freed by the teardown, or null. */
    uint8_t unknown_0x0030[0x08];
    OwnedListNode *second_sentinel;            /**< The sentinel of the second list. */
    uint64_t second_count;                     /**< The number of nodes in the second list. */
    engine::Allocator *second_allocator;       /**< Frees the second list's nodes and then its sentinel. */
    uint8_t unknown_0x0050[0x08];
    void *single;                              /**< A pointer released through the releaser, or null. */
    void *single_copy;                         /**< A copy of the single pointer, cleared with it. */
    uint64_t single_cleared;                   /**< Cleared together with the single pointer. */
    TeardownReleaser *releaser;                /**< Releases the single pointer. */
};
static_assert(offsetof(TeardownOwner, first_sentinel) == 0x10);
static_assert(offsetof(TeardownOwner, first_count) == 0x18);
static_assert(offsetof(TeardownOwner, first_allocator) == 0x20);
static_assert(offsetof(TeardownOwner, object) == 0x28);
static_assert(offsetof(TeardownOwner, second_sentinel) == 0x38);
static_assert(offsetof(TeardownOwner, second_count) == 0x40);
static_assert(offsetof(TeardownOwner, second_allocator) == 0x48);
static_assert(offsetof(TeardownOwner, single) == 0x58);
static_assert(offsetof(TeardownOwner, single_copy) == 0x60);
static_assert(offsetof(TeardownOwner, single_cleared) == 0x68);
static_assert(offsetof(TeardownOwner, releaser) == 0x70);

}  // namespace misc
