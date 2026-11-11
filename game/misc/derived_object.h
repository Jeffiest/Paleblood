// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the derived object whose vtable is at 0x05670010 and which holds a reference item at +0xb0.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace misc {

// The derived class's vtable, whose address point the object stores first.
RT_GLOBAL(0x05670010, derived_vtable, const uint8_t);

/**
 *
 * A derived object: its vtable, a size word whose high half is the block size, and a reference item
 * held at +0xb0.
 *
 */
struct DerivedObject {
    const void *vtable;          /**< The derived vtable's address point. */
    uint32_t size_word_0x08;     /**< High half: the block size, or 0xffff for the default size. */
    uint8_t unknown_0x0c[0xa4];
    RefItem *holder_0xb0;        /**< The reference item held by the object, or null. */
};
static_assert(offsetof(DerivedObject, size_word_0x08) == 0x8);
static_assert(offsetof(DerivedObject, holder_0xb0) == 0xb0);

/**
 *
 * Stores the derived vtable's address point in the object.
 *
 */
inline void store_derived_vtable(DerivedObject *object)
{
    object->vtable = derived_vtable.address() + engine::vtable_address_point;
}

/**
 *
 * Drops the object's reference to its held item: the count is decremented when the item is counted,
 * the item is destroyed when that was its last reference, and the object's pointer is cleared.
 *
 */
inline void drop_held_reference(DerivedObject *object)
{
    RefItem *holder = object->holder_0xb0;
    if (holder != nullptr && holder->refcount_word >= ref_counted_threshold) {
        if (decrement_ref_count(&holder->refcount_word) == 0) holder->vtable->destroy(holder);
    }
    object->holder_0xb0 = nullptr;
}

}  // namespace misc
