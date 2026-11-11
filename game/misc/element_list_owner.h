// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that owns two lists of destroyable nodes, each list a begin and an end pointer.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "destroyable_node.h"
#include "runtime/original.h"

namespace misc {

/**
 *
 * The vtable address point an element list owner's destructor stores in the object.
 *
 */
RT_GLOBAL(0x0574f820, element_list_owner_vtable, const uint8_t);

/**
 *
 * An owner of two node lists: each list is a begin pointer and an end pointer into an array of node pointers.
 *
 * Each list's array is released through its own allocator: the first at +0x28 and the second at +0x50. The
 * third word of the second list, its capacity at +0x48, is cleared with the other two when the list is released.
 *
 */
struct ElementListOwner {
    const void *vtable;                    /**< Set by the owner's destructor to its vtable address point. */
    uint8_t unknown_0x0008[0x08];
    DestroyableNode **first_begin_0x10;    /**< The first node pointer of the first list, also its array. */
    DestroyableNode **first_end_0x18;      /**< One past the last node pointer of the first list. */
    uint8_t unknown_0x0020[0x08];
    engine::Allocator *first_allocator_0x28; /**< Releases the first list's array. */
    uint8_t unknown_0x0030[0x08];
    DestroyableNode **second_begin_0x38;   /**< The first node pointer of the second list, also its array. */
    DestroyableNode **second_end_0x40;     /**< One past the last node pointer of the second list. */
    DestroyableNode **second_capacity_0x48; /**< The end of the second list's array. */
    engine::Allocator *second_allocator_0x50; /**< Releases the second list's array. */
};
static_assert(offsetof(ElementListOwner, vtable) == 0x00);
static_assert(offsetof(ElementListOwner, first_begin_0x10) == 0x10);
static_assert(offsetof(ElementListOwner, first_end_0x18) == 0x18);
static_assert(offsetof(ElementListOwner, first_allocator_0x28) == 0x28);
static_assert(offsetof(ElementListOwner, second_begin_0x38) == 0x38);
static_assert(offsetof(ElementListOwner, second_end_0x40) == 0x40);
static_assert(offsetof(ElementListOwner, second_capacity_0x48) == 0x48);
static_assert(offsetof(ElementListOwner, second_allocator_0x50) == 0x50);

}  // namespace misc
