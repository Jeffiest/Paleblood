// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a handle that refers to a target object by id and carries a flag byte.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct KeyedHandleVtable;

/**
 *
 * A handle to a target: its virtual table, the target, an id, and a flag byte.
 *
 */
struct KeyedHandle {
    const KeyedHandleVtable *vtable; /**< Virtual table of the handle. */
    void *target;                    /**< The object the handle refers to. */
    int64_t id;                     /**< The id of the handle; -1 when none is assigned. */
    uint8_t flags_0x18;              /**< Bit 0 marks the handle as active. */
};
static_assert(offsetof(KeyedHandle, target) == 0x8 && offsetof(KeyedHandle, id) == 0x10);
static_assert(offsetof(KeyedHandle, flags_0x18) == 0x18);

}  // namespace misc
