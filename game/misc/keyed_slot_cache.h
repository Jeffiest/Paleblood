// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a cache of 4096 slots, each holding an object and a keyed counter, with a ring of the most recent slots.
#pragma once

#include <cstddef>
#include <cstdint>

#include "keyed_counter_table.h"

namespace misc {

struct SlotObject;

/**
 *
 * The vtable of an object a slot holds: its first entry destroys the object.
 *
 */
struct SlotObjectVtable {
    void (*destroy_0x00)(SlotObject *self); /**< Destroys the object; the slot's allocator frees it afterwards. */
};

/**
 *
 * An object a slot holds: its first word is its vtable.
 *
 */
struct SlotObject {
    const SlotObjectVtable *vtable_0x00; /**< The object's vtable. */
};

/** The number of slots, and of entries in the ring of recent slots. */
constexpr size_t kKeyedSlotCount = 0x1000;

/**
 *
 * The cache: slots hold objects, entries hold a key and a count per slot, and the ring keeps the last slots used.
 *
 */
struct KeyedSlotCache {
    uint8_t unknown_0x0000[0x0008];
    SlotObject *slots_0x0008[kKeyedSlotCount];          /**< The object a slot holds, or null. */
    KeyedCounterEntry entries_0x8008[kKeyedSlotCount];  /**< The key and count of each slot. */
    uint32_t ring_0x10008[kKeyedSlotCount];             /**< The most recent slots, written in order. */
    uint8_t unknown_0x14008[0x0004];
    int32_t ring_position_0x1400c;                      /**< The ring entry most recently written. */
};
static_assert(offsetof(KeyedSlotCache, slots_0x0008) == 0x0008 && offsetof(KeyedSlotCache, entries_0x8008) == 0x8008);
static_assert(offsetof(KeyedSlotCache, ring_0x10008) == 0x10008 && offsetof(KeyedSlotCache, ring_position_0x1400c) == 0x1400c);
static_assert(sizeof(KeyedSlotCache) == 0x14010);

}  // namespace misc
