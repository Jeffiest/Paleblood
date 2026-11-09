// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the target of a flush source, whose slot at +0x18 is passed on by address.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A target: its slot at +0x18 is passed on by address; its contents are not read here.
 *
 */
struct FlushTarget {
    uint8_t unknown_0x0000[0x18];
    uint8_t slot_0x18[1]; /**< Only its address is passed on; its size is not known. */
};
static_assert(offsetof(FlushTarget, slot_0x18) == 0x18);

}  // namespace misc
