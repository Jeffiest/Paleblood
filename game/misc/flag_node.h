// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the flag node a scope attaches as its root, and the flag bits the scope sets on it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A node whose low flag word the scope sets bits in when it attaches the node as its root.
 *
 */
struct FlagNode {
    uint8_t unknown_0x0000[0x44];
    uint32_t flags_0x44; /**< Low word of the flags; the scope sets its attach bits here. */
};
static_assert(offsetof(FlagNode, flags_0x44) == 0x44);

/** The flag bits the scope sets on the root node it attaches. */
constexpr uint32_t scope_root_flag_bits = 0x100800;

}  // namespace misc
