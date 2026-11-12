// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the lock-guarded cache object that keeps keyed object references, and the records and
// request its insert reads.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct KeyedCacheObject;

/**
 *
 * The table of keyed entries; its first word points at the table's block.
 *
 */
struct KeyedCacheTable {
    void *block_0x0000; /**< The table's block, read first by the insert. */
};
static_assert(offsetof(KeyedCacheTable, block_0x0000) == 0x00);

/**
 *
 * The record an insert is given: a flag the table sets when it keeps the object, and the object.
 *
 */
struct KeyedCacheRecord {
    int32_t kept_flag;                  /**< Zero when the table did not keep the object. */
    uint8_t unknown_0x0004[0x4];
    union {
        KeyedCacheObject *object;       /**< The object the caller holds a reference to. */
        uint32_t counter_0x08;          /**< A counter word, for the records that carry one instead. */
    };
};
static_assert(offsetof(KeyedCacheRecord, kept_flag) == 0x00);
static_assert(offsetof(KeyedCacheRecord, object) == 0x08);

/**
 *
 * The request an insert reads: the key it is filed under and the record that receives the result.
 *
 */
struct KeyedInsertRequest {
    const uint32_t *key;                /**< Pointer to the key word. */
    KeyedCacheRecord *record;           /**< The record the insert reads. */
};
static_assert(offsetof(KeyedInsertRequest, key) == 0x00);
static_assert(offsetof(KeyedInsertRequest, record) == 0x08);

/** The size of the lock object inside the cache, up to the table that follows it. */
constexpr size_t cache_lock_size = 0x10;

/**
 *
 * The cache object: a signed level that decides whether its lock is taken, the lock, and the table.
 *
 */
struct LockedKeyedCache {
    uint8_t unknown_0x0000[0xe4];
    int32_t level_0xe4;                 /**< Signed; the lock is taken while it is below two. */
    uint8_t unknown_0x00e8[0x58];
    uint32_t counter_0x0140;            /**< A counter the record inserts number their records with. */
    uint8_t unknown_0x0144[0x4];
    uint8_t lock_0x0148[cache_lock_size]; /**< The lock object; its address is passed to the lock calls. */
    KeyedCacheTable table_0x0158;       /**< The table of keyed entries. */
};
static_assert(offsetof(LockedKeyedCache, level_0xe4) == 0xe4);
static_assert(offsetof(LockedKeyedCache, counter_0x0140) == 0x140);
static_assert(offsetof(LockedKeyedCache, lock_0x0148) == 0x148);
static_assert(offsetof(LockedKeyedCache, table_0x0158) == 0x158);

}  // namespace misc
