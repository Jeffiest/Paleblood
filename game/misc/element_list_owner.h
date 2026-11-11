// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that owns two lists of destroyable nodes, each list a begin and an end pointer.
#pragma once

#include <cstddef>
#include <cstdint>

#include "destroyable_node.h"

namespace misc {

/**
 *
 * An owner of two node lists: each list is a begin pointer and an end pointer into an array of node pointers.
 *
 * The fields between the lists belong to other members and are not read by the list routines.
 *
 */
struct ElementListOwner {
    uint8_t unknown_0x0000[0x10];
    DestroyableNode **first_begin_0x10;    /**< The first node pointer of the first list. */
    DestroyableNode **first_end_0x18;      /**< One past the last node pointer of the first list. */
    uint8_t unknown_0x0020[0x18];
    DestroyableNode **second_begin_0x38;   /**< The first node pointer of the second list. */
    DestroyableNode **second_end_0x40;     /**< One past the last node pointer of the second list. */
};
static_assert(offsetof(ElementListOwner, first_begin_0x10) == 0x10);
static_assert(offsetof(ElementListOwner, first_end_0x18) == 0x18);
static_assert(offsetof(ElementListOwner, second_begin_0x38) == 0x38);
static_assert(offsetof(ElementListOwner, second_end_0x40) == 0x40);

}  // namespace misc
