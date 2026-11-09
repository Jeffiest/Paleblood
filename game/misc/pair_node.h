// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a node of a pair binding, whose virtual slot at +0x18 gives the value the binding stores.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct PairNode;

/**
 *
 * The node's virtual table; the slot at +0x18 is the one the binding calls.
 *
 */
struct PairNodeVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*value_0x18)(PairNode *self); /**< Gives the node's value. */
};
static_assert(offsetof(PairNodeVtable, value_0x18) == 0x18);

/**
 *
 * A node: its first word is the virtual table.
 *
 */
struct PairNode {
    const PairNodeVtable *vtable;
};

}  // namespace misc
