// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object a bind record refers to, released through its virtual table.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct BoundTarget;

/**
 *
 * The bound target's virtual table: the slot at +0x30 takes the target and a 64-bit code.
 *
 */
struct BoundTargetVtable {
    uint8_t unknown_0x0000[0x30];
    void (*slot_0x30)(BoundTarget *target, uint64_t code); /**< Releases the target under the code. */
};
static_assert(offsetof(BoundTargetVtable, slot_0x30) == 0x30);

/**
 *
 * A bound target: only its virtual table is used here.
 *
 */
struct BoundTarget {
    const BoundTargetVtable *vtable; /**< Virtual table of the target. */
};

}  // namespace misc
