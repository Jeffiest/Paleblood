// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a source a flush reads, with its target and the item the flush passes on.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FlushTarget;

/**
 *
 * A source: its target sits at +0x08, and the item at +0x10 is passed on by address.
 *
 */
struct FlushSource {
    uint8_t unknown_0x0000[0x08];
    FlushTarget *target_0x08;
    uint8_t item_0x10[1]; /**< Only its address is passed on; its size is not known. */
};
static_assert(offsetof(FlushSource, target_0x08) == 0x08);
static_assert(offsetof(FlushSource, item_0x10) == 0x10);

}  // namespace misc
