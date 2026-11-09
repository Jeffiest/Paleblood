// SPDX-License-Identifier: GPL-2.0-or-later
// An object that owns a linked list of heap nodes and frees them when it is destroyed.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable of the owned-list class, stored in the object as is (no address point).
 *
 */
RT_GLOBAL(0x057a78e0, owned_list_vtable, const uint8_t);

/**
 *
 * A node of an owned list: the object it holds, then the link to the next node.
 *
 */
struct OwnedNode {
    void *object;       /**< The object the node holds, stored as is. */
    OwnedNode *next;    /**< The next node, or null at the end of the list. */
};
static_assert(offsetof(OwnedNode, next) == 0x08);

/** Low bits of the size tag: the object's kind, 1 for the owned-list class. */
constexpr uint32_t owned_list_kind = 1;

/** Shift that brings the object's size down from the high bits of the size tag. */
constexpr uint32_t size_tag_shift = 16;

/** Size tag value that means the default object size. */
constexpr uint32_t size_tag_default = 0xffff;

/** Object size used when the size tag holds the default value. */
constexpr uint32_t owned_list_default_size = 0x28;

/** Size tag a new owned list is created with: the default size and kind 1. */
constexpr uint32_t owned_list_tag = (size_tag_default << size_tag_shift) | owned_list_kind;

/**
 *
 * An object that owns a linked list of nodes; destroying it frees every node through its allocator.
 *
 */
struct OwnedList {
    const void *vtable;    /**< The owned-list vtable, stored as is. */
    uint32_t tag;          /**< Size tag: kind in the low bits, object size in the high 16 bits. */
    uint8_t unknown_0x0c[4];
    uint64_t argument;     /**< The value the constructor was given, stored as is. */
    OwnedNode *head;       /**< First node of the list, or null when the list is empty. */
    OwnedNode *tail;       /**< Last node of the list, or null when the list is empty. */
};
static_assert(offsetof(OwnedList, tag) == 0x08 && offsetof(OwnedList, argument) == 0x10);
static_assert(offsetof(OwnedList, head) == 0x18 && offsetof(OwnedList, tail) == 0x20);

}  // namespace misc
