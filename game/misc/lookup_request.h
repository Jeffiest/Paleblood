// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the request record a pair list lookup reads, the list nodes it walks and the entry it builds.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A node of the request's lookup list: the link to the next node is the word at +0x08.
 *
 */
struct LookupNode {
    uint8_t unknown_0x0000[0x08]; /**< Not read by the lookup walk. */
    LookupNode *next;             /**< The next node, or null at the end of the list. */
};
static_assert(offsetof(LookupNode, next) == 0x08);

/** The payload bytes of a lookup entry, after its vtable word. */
inline constexpr size_t lookup_entry_payload_size = 0x38;

/**
 *
 * The entry a lookup builds for its caller: its vtable, then the payload that the fill routine writes.
 *
 */
struct LookupEntry {
    const void *vtable;                         /**< The entry's vtable, stored as is. */
    uint8_t payload[lookup_entry_payload_size]; /**< Filled by the fill routine from the chosen source word. */
};
static_assert(offsetof(LookupEntry, vtable) == 0x00);
static_assert(offsetof(LookupEntry, payload) == 0x08);
static_assert(sizeof(LookupEntry) == 0x40);

/**
 *
 * The request a pair lookup reads: its list head, the two source words, a mode byte, a flags word and the pool
 * the entry is allocated from.
 *
 */
struct LookupRequest {
    uint8_t unknown_0x0000[0x110];   /**< Not read by the lookup. */
    LookupNode *head;                /**< The head of the list walked when the flag bit is set. */
    uint64_t primary_word;           /**< The source word used when the flag bit is set. */
    uint8_t unknown_0x0120[0xf0];    /**< Not read by the lookup. */
    uint64_t secondary_word;         /**< The source word used when the flag bit is clear. */
    uint8_t unknown_0x0218[0x240];   /**< Not read by the lookup. */
    uint8_t mode;                    /**< Must be one for the lookup to run. */
    uint8_t unknown_0x0459[1];       /**< Not read by the lookup. */
    uint16_t flags;                  /**< Bit zero selects the list walk and the primary source word. */
    uint8_t unknown_0x045c[4];       /**< Not read by the lookup. */
    uint64_t pool;                   /**< The pool argument of the entry allocation. */
    uint8_t unknown_0x0468[0x08];    /**< Not read by the lookup. */
};
static_assert(offsetof(LookupRequest, head) == 0x110);
static_assert(offsetof(LookupRequest, primary_word) == 0x118);
static_assert(offsetof(LookupRequest, secondary_word) == 0x210);
static_assert(offsetof(LookupRequest, mode) == 0x458);
static_assert(offsetof(LookupRequest, flags) == 0x45a);
static_assert(offsetof(LookupRequest, pool) == 0x460);

}  // namespace misc
