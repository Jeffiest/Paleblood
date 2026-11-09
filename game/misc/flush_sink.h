// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the sink a flush writes into, whose item at +0x10 is passed on by address.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A sink: the flush passes it on as the first argument, and its item at +0x10 by address.
 *
 */
struct FlushSink {
    uint8_t unknown_0x0000[0x10];
    uint8_t item_0x10[1]; /**< Only its address is passed on; its size is not known. */
};
static_assert(offsetof(FlushSink, item_0x10) == 0x10);

}  // namespace misc
