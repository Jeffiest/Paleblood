// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a two-word object made from the allocation context, a vtable word and a word the creation clears.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A two-word object created with an allocation context: its vtable, then a word that the creation clears.
 *
 */
struct ContextWordObject {
    const void *vtable;  /**< The object's vtable, stored as is. */
    uint64_t value_0x08; /**< Set to zero when the object is created. */
};
static_assert(offsetof(ContextWordObject, vtable) == 0x00);
static_assert(offsetof(ContextWordObject, value_0x08) == 0x08);
static_assert(sizeof(ContextWordObject) == 0x10);

}  // namespace misc
