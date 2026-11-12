// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a small object a source record creates: its vtable first, then a 32-bit flags word that is cleared.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The small object a source creates: its vtable, a flags word cleared at creation, and a word the creation leaves alone.
 *
 */
struct SmallSourceObject {
    const void *vtable;                  /**< The object's vtable. */
    uint32_t flags_0x08;                 /**< Cleared when the object is created. */
    uint32_t unknown_0x0c;               /**< Not written by the creation. */
};
static_assert(offsetof(SmallSourceObject, flags_0x08) == 0x08);
static_assert(sizeof(SmallSourceObject) == 0x10);

}  // namespace misc
