// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a cache of 4096 slots, each holding an object and a keyed counter, with a ring of the most recent slots.
#pragma once

#include <cstddef>
#include <cstdint>

#include "keyed_counter_table.h"

namespace misc {

struct CachedSlotObject;

/**
 *
 * The vtable of an object a slot holds: its first entry destroys the object.
 *
 */
struct CachedSlotObjectVtable {
    void (*destroy_0x00)(CachedSlotObject *self); /**< Destroys the object; the slot's allocator frees it afterwards. */
};

/**
 *
 * An object a slot holds: its first word is its vtable.
 *
 */
struct CachedSlotObject {
    const CachedSlotObjectVtable *vtable_0x00; /**< The object's vtable. */
    uint32_t key_0x08;                   /**< Compared with a word when the slot is looked up. */
};
static_assert(offsetof(CachedSlotObject, key_0x08) == 0x08);

/** The number of slots, and of entries in the ring of recent slots. */
constexpr size_t kKeyedSlotCount = 0x1000;

/** The number of slot pointers the lookup can reach: every index that fits in sixteen bits except the all-ones one. */
constexpr size_t kSlotLookupCount = 0xffff;

/**
 *
 * The cache: slots hold objects, entries hold a key and a count per slot, and the ring keeps the last slots used.
 *
 */
struct KeyedSlotCache {
    uint8_t unknown_0x0000[0x0008];
    CachedSlotObject *slots_0x0008[kKeyedSlotCount];          /**< The object a slot holds, or null. */
    KeyedCounterEntry entries_0x8008[kKeyedSlotCount];  /**< The key and count of each slot. */
    uint32_t ring_0x10008[kKeyedSlotCount];             /**< The most recent slots, written in order. */
    uint8_t unknown_0x14008[0x0004];
    int32_t ring_position_0x1400c;                      /**< The ring entry most recently written. */
    uint8_t unknown_0x14010[0x0018];
    void *held_block_0x14028;                           /**< A block held outside the slots, or null. */
    uint8_t must_be_clear_0x14030;                      /**< Nonzero is a fatal report when the cache is checked. */
    uint8_t must_be_clear_0x14031;                      /**< Nonzero is a fatal report when the cache is checked. */
};
static_assert(offsetof(KeyedSlotCache, slots_0x0008) == 0x0008 && offsetof(KeyedSlotCache, entries_0x8008) == 0x8008);
static_assert(offsetof(KeyedSlotCache, ring_0x10008) == 0x10008 && offsetof(KeyedSlotCache, ring_position_0x1400c) == 0x1400c);
static_assert(offsetof(KeyedSlotCache, held_block_0x14028) == 0x14028);
static_assert(offsetof(KeyedSlotCache, must_be_clear_0x14030) == 0x14030 && offsetof(KeyedSlotCache, must_be_clear_0x14031) == 0x14031);

/**
 *
 * The same slot pointers as the lookup reads them: indexed by the low 16 bits of a word, without a bound check.
 *
 */
struct SlotLookupTable {
    uint8_t unknown_0x0000[0x0008];
    CachedSlotObject *slots_0x0008[kSlotLookupCount]; /**< The object a slot holds, or null. */
};
static_assert(offsetof(SlotLookupTable, slots_0x0008) == 0x0008);

}  // namespace misc
