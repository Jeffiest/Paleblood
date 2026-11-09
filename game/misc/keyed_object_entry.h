// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the keyed entries an owner keeps in two lists, the object each entry holds and the request
// record that builds that object.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct KeyedObject;

/**
 *
 * An entry in an owner's list: the three keys it was made for, a flag that hides it from lookups
 * and the object it holds.
 *
 */
struct KeyedEntry {
    int32_t key_a;       /**< First key. */
    int32_t key_b;       /**< Second key. */
    int32_t key_c;       /**< Third key. */
    uint8_t hidden;      /**< Non-zero when lookups skip the entry. */
    uint8_t unknown_0x0d[0x3];
    KeyedObject *object; /**< The object the entry holds. */
};
static_assert(offsetof(KeyedEntry, key_c) == 0x08 && offsetof(KeyedEntry, hidden) == 0x0c);
static_assert(offsetof(KeyedEntry, object) == 0x10 && sizeof(KeyedEntry) == 0x18);

/**
 *
 * A growable array of entry pointers: the begin, end and capacity pointers at +0x08, +0x10 and +0x18.
 *
 */
struct KeyedEntryVector {
    uint8_t unknown_0x00[0x8];
    KeyedEntry **begin;    /**< First element. */
    KeyedEntry **end;      /**< One past the last element. */
    KeyedEntry **capacity; /**< One past the storage. */
};
static_assert(offsetof(KeyedEntryVector, begin) == 0x08 && offsetof(KeyedEntryVector, end) == 0x10);
static_assert(offsetof(KeyedEntryVector, capacity) == 0x18 && sizeof(KeyedEntryVector) == 0x20);

/**
 *
 * The owner with the two entry vectors: one at +0x1338 and one at +0x1360.
 *
 */
struct KeyedOwner {
    uint8_t unknown_0x0000[0x1338];
    KeyedEntryVector entries_0x1338; /**< The first list; its begin and end are read by lookups. */
    uint8_t unknown_0x1358[0x8];
    KeyedEntryVector entries_0x1360; /**< The second list. */
};
static_assert(offsetof(KeyedOwner, entries_0x1338) == 0x1338);
static_assert(offsetof(KeyedOwner, entries_0x1360) == 0x1360);

/** The number of words in the constant range copied into an object. */
constexpr uint32_t initial_range_words = 2;

/**
 *
 * The object an entry holds: its vtable, a reference count and the values set when it is built.
 *
 */
struct KeyedObject {
    const void *vtable;        /**< The static vtable of the object. */
    uint32_t reference_count;  /**< Raised once the object is kept by an entry. */
    uint8_t unknown_0x0c[0x4];
    float scale;               /**< Set to one when the object is built. */
    uint8_t unknown_0x14[0xc];
    uint64_t initial_0x20[initial_range_words]; /**< Copied from a constant table when the object is built. */
    uint64_t cleared_0x30;     /**< Set to zero. */
    uint8_t unknown_0x38[0x8];
    uint64_t cleared_0x40;     /**< Set to zero. */
    uint64_t cleared_0x48;     /**< Set to zero. */
    uint64_t cleared_0x50;     /**< Set to zero. */
    uint32_t cleared_0x58;     /**< Set to zero. */
    uint8_t unknown_0x5c[0x4];
    uint64_t cleared_0x60;     /**< Set to zero. */
    uint64_t cleared_0x68;     /**< Set to zero. */
    uint64_t cleared_0x70;     /**< Set to zero. */
    int64_t unset_0x78;        /**< Set to minus one. */
    uint32_t unset_0x80;       /**< Set to all ones. */
    uint8_t unknown_0x84[0xc];
};
static_assert(offsetof(KeyedObject, scale) == 0x10 && offsetof(KeyedObject, initial_0x20) == 0x20);
static_assert(offsetof(KeyedObject, cleared_0x58) == 0x58 && offsetof(KeyedObject, unset_0x78) == 0x78);
static_assert(offsetof(KeyedObject, unset_0x80) == 0x80 && sizeof(KeyedObject) == 0x90);

/** The flags word the request record carries. */
constexpr uint32_t keyed_request_flags = 0x100;

/**
 *
 * The request record the object is built from: the three keys, a one, another one, the flags word
 * and two zero words. It lives on the caller's stack.
 *
 */
struct KeyedRequest {
    int32_t key_a;           /**< First key. */
    int32_t key_b;           /**< Second key. */
    int32_t key_c;           /**< Third key. */
    int32_t one_0x0c;        /**< Set to one. */
    uint64_t one_0x10;       /**< Set to one. */
    uint32_t flags_0x18;     /**< The flags word. */
    uint32_t zero_0x1c;      /**< Set to zero. */
    uint64_t zero_0x20;      /**< Set to zero. */
};
static_assert(offsetof(KeyedRequest, one_0x0c) == 0x0c && offsetof(KeyedRequest, one_0x10) == 0x10);
static_assert(offsetof(KeyedRequest, flags_0x18) == 0x18 && sizeof(KeyedRequest) == 0x28);

}  // namespace misc
