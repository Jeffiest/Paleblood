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
    uint8_t unknown_0x00[0x20];
    void (*notify_add)(RefChild *child, RefItem *item);    /**< Slot 0x20: an item was attached. */
    void (*notify_remove)(RefChild *child, RefItem *item); /**< Slot 0x28: an item was detached. */
};
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
