// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object with two bases whose vtables are set on release, and the counted item it holds.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable block of the two-base object: the primary base's address point is 0x10 into it.
 *
 */
RT_GLOBAL(0x05677110, dual_base_vtable, const uint8_t);

/** Offset of the secondary base's vtable from the start of the vtable block. */
constexpr size_t dual_base_secondary_vtable_offset = 0x58;
/** Offset of the secondary base inside the object. */
constexpr size_t dual_base_secondary_offset = 0x10;

/**
 *
 * An object with a primary base at its start and a secondary base at 0x10, which holds a counted item at 0x20.
 *
 */
struct DualBaseObject {
    const void *primary_vtable;   /**< Primary base's vtable address point, at 0x00. */
    uint8_t unknown_0x0008[0x08];
    const void *secondary_vtable; /**< Secondary base's vtable, at 0x10. */
    uint8_t unknown_0x0018[0x08];
    RefItem *held;                /**< Counted item the object holds, at 0x20; null when there is none. */
};
static_assert(offsetof(DualBaseObject, primary_vtable) == 0x00);
static_assert(offsetof(DualBaseObject, secondary_vtable) == 0x10);
static_assert(offsetof(DualBaseObject, held) == 0x20);
static_assert(sizeof(DualBaseObject) == 0x28);

/**
 *
 * Gives the object that a secondary base pointer belongs to.
 *
 */
inline DualBaseObject *dual_base_from_secondary(uint8_t *secondary)
{
    return reinterpret_cast<DualBaseObject *>(secondary - dual_base_secondary_offset);
}

/**
 *
 * Sets both vtables of the object, releases the item it holds and clears the item.
 *
 * The held item is destroyed when its release leaves no references.
 */
inline void release_dual_base_object(DualBaseObject *object)
{
    object->primary_vtable = dual_base_vtable.address() + engine::vtable_address_point;
    object->secondary_vtable = dual_base_vtable.address() + dual_base_secondary_vtable_offset;
    RefItem *held = object->held;
    if (held != nullptr && held->refcount_word >= ref_counted_threshold &&
        decrement_ref_count(&held->refcount_word) == 0)
        held->vtable->destroy(held);
    object->held = nullptr;
}

}  // namespace misc
