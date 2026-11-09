// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SlotPool;
struct PoolEntry;
struct PoolChild;

/**
 *
 * The virtual functions a pool child provides: a visit that returns a signed count and a measure.
 *
 */
struct PoolChildVtable {
    uint8_t unknown_0x00[0x50];
    int32_t (*visit)(PoolChild *child, SlotPool *pool, PoolEntry *entry); /**< Slot 0x50: visits the child. */
    uint8_t unknown_0x58[0x8];
    uint32_t (*measure)(PoolChild *child, PoolEntry *entry);              /**< Slot 0x60: measures the child. */
};
static_assert(offsetof(PoolChildVtable, visit) == 0x50);
static_assert(offsetof(PoolChildVtable, measure) == 0x60);

/**
 *
 * A child of a pool owner, reached through its vtable.
 *
 */
struct PoolChild {
    const PoolChildVtable *vtable; /**< The child's virtual functions. */
};
static_assert(offsetof(PoolChild, vtable) == 0x0);

}  // namespace misc
