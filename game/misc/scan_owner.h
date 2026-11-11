// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the object the global scan owner points to, whose state word at +0x84 says whether a scan may run.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The scan owner: a state word at +0x84 that must read three for a scan to run.
 *
 */
struct ScanOwner {
    uint8_t unknown_0x0000[0x84];
    int32_t state_0x84;   /**< Three while a scan may run. */
};
static_assert(offsetof(ScanOwner, state_0x84) == 0x84);

}  // namespace misc
