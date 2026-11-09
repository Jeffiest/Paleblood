// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * Size of the lock object held by a SlotPool: one 64-bit word.
 *
 */
constexpr size_t slot_pool_lock_bytes = sizeof(uint64_t);

/**
 *
 * A lock-guarded pool of slots: each slot has a 64-bit value and a used flag that claims it.
 *
 */
struct SlotPool {
    uint8_t unknown_0x00[0x10];
    void **children;          /**< Child objects, visited in order when the pool is not changed. */
    int32_t child_count;      /**< Number of child objects. */
    uint8_t unknown_0x1c[0x34];
    uint64_t *values;         /**< One 64-bit value per slot. */
    int32_t slot_count;       /**< Number of slots in values and in used. */
    uint32_t values_capacity; /**< Allocated slots in values; the top two bits are flags. */
    uint8_t *used;            /**< One byte per slot: nonzero once the slot is claimed. */
    int32_t used_size;        /**< Bytes in used, kept equal to slot_count. */
    uint32_t used_capacity;   /**< Allocated bytes in used; the top two bits are flags. */
    uint8_t lock[slot_pool_lock_bytes];  /**< The lock guarding the pool, passed to the lock calls by address. */
    uint32_t spin_count;      /**< Try-lock attempts made before blocking on the lock. */
};
static_assert(offsetof(SlotPool, children) == 0x10);
static_assert(offsetof(SlotPool, child_count) == 0x18);
static_assert(offsetof(SlotPool, values) == 0x50);
static_assert(offsetof(SlotPool, slot_count) == 0x58);
static_assert(offsetof(SlotPool, values_capacity) == 0x5c);
static_assert(offsetof(SlotPool, used) == 0x60);
static_assert(offsetof(SlotPool, used_size) == 0x68);
static_assert(offsetof(SlotPool, used_capacity) == 0x6c);
static_assert(offsetof(SlotPool, lock) == 0x70);
static_assert(offsetof(SlotPool, spin_count) == 0x78);

}  // namespace misc
