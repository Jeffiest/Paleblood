// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a gating block whose flag byte at +0x384 enables the store.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A gating block: unknown state followed by the flag byte that enables the gated store.
 *
 */
struct GatedBlock {
    uint8_t unknown_0x000[0x384];
    uint8_t enabled_0x384; /**< Nonzero when the gated store is enabled. */
};
static_assert(offsetof(GatedBlock, enabled_0x384) == 0x384);

}  // namespace misc
