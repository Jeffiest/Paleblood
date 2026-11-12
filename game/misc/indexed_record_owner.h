// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner object whose slot table and link sit under one lock, and the lookup record that names a slot.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The size of the lock object inside the owner, from +0x148 up to the slot table. */
constexpr size_t indexed_owner_lock_size = 0x18;

/**
 *
 * One slot of the table: a header that the table's users never read, then the payload word they point into.
 *
 */
struct IndexedSlot {
    uint8_t unknown_0x0000[0x20];
    uint64_t payload_0x20;       /**< The payload word; a lookup points at it. */
};
static_assert(offsetof(IndexedSlot, payload_0x20) == 0x20);
static_assert(sizeof(IndexedSlot) == 0x28);

/**
 *
 * The slot table: a pointer to its first slot, which is the first word of the table.
 *
 */
struct IndexedSlotTable {
    IndexedSlot *slots;          /**< The first slot of the table. */
};
static_assert(sizeof(IndexedSlotTable) == 0x8);

/**
 *
 * A lookup record: the key the table is searched with, then the payload pointer of the slot found.
 *
 */
struct IndexedLookup {
    uint64_t key;                /**< The key; replaced by the value once the slot is found. */
    void *payload;               /**< The payload pointer of the slot found. */
};
static_assert(offsetof(IndexedLookup, key) == 0x00);
static_assert(offsetof(IndexedLookup, payload) == 0x08);

/**
 *
 * The owner: a level word at +0xe4, the lock at +0x148, the slot table at +0x160 and the link object at +0x168.
 *
 */
struct IndexedRecordOwner {
    uint8_t unknown_0x0000[0xe4];
    int32_t level_0xe4;                              /**< The level below which the lock is taken. */
    uint8_t unknown_0x00e8[0x60];
    uint8_t lock_0x0148[indexed_owner_lock_size];    /**< The lock object; its address is passed to the lock calls. */
    IndexedSlotTable table_0x0160;                   /**< The slot table that the lookup searches. */
    uint8_t unknown_0x0168[0x8];                     /**< The link object; only its address is passed on. */
};
static_assert(offsetof(IndexedRecordOwner, level_0xe4) == 0xe4);
static_assert(offsetof(IndexedRecordOwner, lock_0x0148) == 0x148);
static_assert(offsetof(IndexedRecordOwner, table_0x0160) == 0x160);
static_assert(offsetof(IndexedRecordOwner, unknown_0x0168) == 0x168);

}  // namespace misc
