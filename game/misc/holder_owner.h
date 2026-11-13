// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner of a node holder, a table of keyed entries and a spare object, which a clear routine takes down.
#pragma once

#include <cstddef>
#include <cstdint>

#include "node_build_holder.h"

namespace misc {

/**
 *
 * One entry of a keyed table: its key word, which a clear marks as free, and the rest of the entry.
 *
 */
struct HolderEntry {
    int64_t key;                    /**< The key word; the clear sets it to the free marker. */
    uint8_t unknown_0x0008[0x10];
};
static_assert(sizeof(HolderEntry) == 0x18);

/**
 *
 * A keyed table: its entry count at +0x08, then the entries from +0x10 on.
 *
 */
struct HolderEntryTable {
    uint8_t unknown_0x0000[0x8];
    uint64_t count;                 /**< The entry count; the clear visits this many entries plus one. */
    HolderEntry entries[1];         /**< The entries, the first at offset 0x10. */
};
static_assert(offsetof(HolderEntryTable, count) == 0x08);
static_assert(offsetof(HolderEntryTable, entries) == 0x10);

/**
 *
 * The object that holds the keyed table: its first word is the table pointer.
 *
 */
struct HolderEntryHolder {
    HolderEntryTable *table;        /**< The table, or null once it has been released. */
};

/**
 *
 * The owner a clear routine takes down: its vtable pointer, the spare object at +0x30, the node holder at +0x38
 * and the entry holder at +0x58.
 *
 */
struct HolderOwner {
    const uint8_t *vtable;          /**< Dispatch table of the owner, which is the game's member table. */
    uint8_t unknown_0x0008[0x28];
    void *spare;                    /**< The spare object, released and cleared by the clear. */
    NodeBuildHolder *holder;        /**< The node holder, finished and released by the clear. */
    uint8_t unknown_0x0040[0x18];
    HolderEntryHolder *entries;     /**< The entry holder, whose table is reset and released. */
};
static_assert(offsetof(HolderOwner, spare) == 0x30);
static_assert(offsetof(HolderOwner, holder) == 0x38);
static_assert(offsetof(HolderOwner, entries) == 0x58);

}  // namespace misc
