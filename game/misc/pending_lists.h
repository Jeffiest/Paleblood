// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the pending lists of a holder: entries that own reference-counted elements, callbacks and items.
#pragma once

#include <cstddef>
#include <cstdint>

#include "slot_object.h"

namespace misc {

struct PendingEntry;
struct PendingItem;
struct PendingCallback;

/**
 *
 * A reference-counted object: its reference count is the signed word at 0x08.
 *
 */
struct RefCountedHeader {
    uint8_t unknown_0x00[0x08];
    int32_t references;                 /**< Reference count; the last reference releases the object. */
};
static_assert(offsetof(RefCountedHeader, references) == 0x08);

/**
 *
 * An element of a pending entry: a tagged pointer to a reference-counted object, in the first word.
 *
 */
struct PendingElement {
    uint64_t tagged_ref;                /**< Object pointer with its two low tag bits set. */
    uint8_t unknown_0x08[0x08];
};
static_assert(offsetof(PendingElement, tagged_ref) == 0x00);
static_assert(sizeof(PendingElement) == 0x10);

/**
 *
 * A pending entry: its element array at 0x00, the element count at 0x08, a tagged reference at 0x18 and the next
 * entry at 0x28.
 *
 */
struct PendingEntry {
    PendingElement *elements;           /**< Element array, released after its elements. */
    uint64_t count;                     /**< Number of elements. */
    uint8_t unknown_0x10[0x08];
    uint64_t tagged_ref;                /**< Tagged pointer to the entry's own reference-counted object. */
    uint8_t unknown_0x20[0x08];
    PendingEntry *next;                 /**< The entry after this one, or null. */
};
static_assert(offsetof(PendingEntry, elements) == 0x00 && offsetof(PendingEntry, count) == 0x08);
static_assert(offsetof(PendingEntry, tagged_ref) == 0x18 && offsetof(PendingEntry, next) == 0x28);

/**
 *
 * A pending item: the object at 0x08 is released with the record release routine, and the next item at 0x18.
 *
 */
struct PendingItem {
    uint8_t unknown_0x00[0x08];
    void *object;                       /**< Object released with the record release routine, or null. */
    uint8_t unknown_0x10[0x08];
    PendingItem *next;                  /**< The item after this one, or null. */
};
static_assert(offsetof(PendingItem, object) == 0x08 && offsetof(PendingItem, next) == 0x18);

/**
 *
 * A pending callback: the object at 0x00 has its slot at 0x18 called with the argument at 0x08, and the next at 0x18.
 *
 */
struct PendingCallback {
    SlotObject *object;                 /**< Object whose slot is called, or null. */
    uint64_t argument;                  /**< Argument of the call. */
    uint8_t unknown_0x10[0x08];
    PendingCallback *next;              /**< The callback after this one, or null. */
};
static_assert(offsetof(PendingCallback, object) == 0x00 && offsetof(PendingCallback, argument) == 0x08);
static_assert(offsetof(PendingCallback, next) == 0x18);

/**
 *
 * The holder: a chain word at 0x00, the entry list at 0x10, the item list at 0x20 and the callback list at 0x30.
 *
 */
struct PendingLists {
    uint64_t chain_0x00;                /**< Cleared when the holder is released. */
    uint8_t unknown_0x08[0x08];
    PendingEntry *entries;              /**< Head of the entry list. */
    uint8_t unknown_0x18[0x08];
    PendingItem *items;                 /**< Head of the item list. */
    uint8_t unknown_0x28[0x08];
    PendingCallback *callbacks;         /**< Head of the callback list. */
};
static_assert(offsetof(PendingLists, entries) == 0x10 && offsetof(PendingLists, items) == 0x20);
static_assert(offsetof(PendingLists, callbacks) == 0x30);

}  // namespace misc
