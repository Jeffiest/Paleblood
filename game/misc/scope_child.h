// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the child of a scope, with its flags, its table and the root node it last attached.
#pragma once

#include <cstddef>
#include <cstdint>

#include "flag_node.h"

namespace misc {

/** The flag bit a scope sets in its child when it attaches a root. */
constexpr uint64_t scope_child_attach_flag = 0x8000000;

/**
 *
 * The child a scope works through: its flags, the table whose address the attach call receives,
 * and the root node it last attached.
 *
 */
struct ScopeChild {
    uint8_t unknown_0x0000[0x1978];
    uint64_t flags_0x1978;        /**< Flags; the attach sets its bit here. */
    uint8_t unknown_0x1980[0x9db0];
    uint8_t table_0xb730[1];      /**< Only its address is passed on; its size is not known. */
    uint8_t unknown_0xb731[0x1e4f];
    FlagNode *root_0xd580;        /**< Root node last attached. */
};
static_assert(offsetof(ScopeChild, flags_0x1978) == 0x1978);
static_assert(offsetof(ScopeChild, table_0xb730) == 0xb730);
static_assert(offsetof(ScopeChild, root_0xd580) == 0xd580);

}  // namespace misc
