// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct RefChild;
struct RefItem;

/**
 *
 * The virtual functions a child of a reference holder gets told about when an item is attached or
 * detached.
 *
 */
struct RefChildVtable {
    uint8_t unknown_0x00[0x10];
    void (*notify_0x10)(RefChild *child, RefItem *item);   /**< Slot 0x10: told about an item. */
    void (*notify_0x18)(RefChild *child, RefItem *item);   /**< Slot 0x18: told about an item. */
    void (*notify_add)(RefChild *child, void *added);      /**< Slot 0x20: an item or leaf was attached. */
    void (*notify_remove)(RefChild *child, void *removed); /**< Slot 0x28: an item or leaf was detached. */
};
static_assert(offsetof(RefChildVtable, notify_0x10) == 0x10);
static_assert(offsetof(RefChildVtable, notify_0x18) == 0x18);
static_assert(offsetof(RefChildVtable, notify_add) == 0x20);
static_assert(offsetof(RefChildVtable, notify_remove) == 0x28);

/**
 *
 * A child object held by a reference holder, reached through its vtable.
 *
 */
struct RefChild {
    const RefChildVtable *vtable; /**< The child's virtual functions. */
};
static_assert(offsetof(RefChild, vtable) == 0x0);

}  // namespace misc
