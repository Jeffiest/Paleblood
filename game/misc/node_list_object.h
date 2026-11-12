// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that keeps a list of keyed entries, and the entry the list links.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct NodeListEntry;

/**
 *
 * A list entry: a 32-bit key, a value, and the link to the next entry.
 *
 */
struct NodeListEntry {
    uint32_t key_0x00;                  /**< The key the entry is found by. */
    uint8_t unknown_0x0004[0x4];
    uint64_t value_0x08;                /**< The value returned for the key. */
    uint8_t unknown_0x0010[0x8];
    NodeListEntry *next_0x18;           /**< The next entry, or null at the end of the list. */
};
static_assert(offsetof(NodeListEntry, key_0x00) == 0x00);
static_assert(offsetof(NodeListEntry, value_0x08) == 0x08);
static_assert(offsetof(NodeListEntry, next_0x18) == 0x18);

/**
 *
 * The object that keeps the list: its first entry is at +0x120.
 *
 */
struct NodeListObject {
    uint8_t unknown_0x0000[0x120];
    NodeListEntry *head_0x0120;         /**< The first entry of the list, or null when it is empty. */
};
static_assert(offsetof(NodeListObject, head_0x0120) == 0x120);

}  // namespace misc
