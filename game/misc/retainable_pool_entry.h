// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an entry of an indexed pool: a reference count, a kind word, the next entry and a flag byte.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RetainablePoolEntry;

/**
 *
 * The entry's virtual table: the slot at +0x0 destroys the entry and the slot at +0x18 says whether it is kept.
 *
 */
struct RetainablePoolEntryVtable {
    void (*destroy)(RetainablePoolEntry *entry);      /**< Runs before an entry that is not kept is freed. */
    uint8_t unknown_0x0008[0x10];
    bool (*is_retained)(RetainablePoolEntry *entry);  /**< True when the entry stays in the pool. */
};
static_assert(offsetof(RetainablePoolEntryVtable, is_retained) == 0x18);

/**
 *
 * A pool entry: its virtual table, reference count, kind word, link to the next entry and flags.
 *
 */
struct RetainablePoolEntry {
    const RetainablePoolEntryVtable *vtable; /**< Virtual table of the entry. */
    uint32_t references_0x08;  /**< Zero while the entry is idle. */
    uint16_t kind_0x0c;        /**< The low 15 bits hold the kind. */
    uint8_t unknown_0x0e[0x2];
    RetainablePoolEntry *next_0x10;      /**< The following entry, or null at the end of the list. */
    uint8_t unknown_0x18[0x8];
    uint8_t flags_0x20;        /**< Bit 0 is cleared when the entry is selected. */
};
static_assert(offsetof(RetainablePoolEntry, references_0x08) == 0x8 && offsetof(RetainablePoolEntry, kind_0x0c) == 0xc);
static_assert(offsetof(RetainablePoolEntry, next_0x10) == 0x10 && offsetof(RetainablePoolEntry, flags_0x20) == 0x20);

}  // namespace misc
