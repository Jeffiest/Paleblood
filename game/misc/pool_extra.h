// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PoolExtra;

/**
 *
 * The virtual function an extra object provides: a signed value read from the object.
 *
 */
struct PoolExtraVtable {
    uint8_t unknown_0x00[0x28];
    int32_t (*value)(PoolExtra *extra); /**< Slot 0x28: the value the extra contributes. */
};
static_assert(offsetof(PoolExtraVtable, value) == 0x28);

/**
 *
 * An optional extra object attached to a pool entry; a null pointer contributes nothing.
 *
 */
struct PoolExtra {
    const PoolExtraVtable *vtable; /**< The extra's virtual functions. */
};
static_assert(offsetof(PoolExtra, vtable) == 0x0);

}  // namespace misc
