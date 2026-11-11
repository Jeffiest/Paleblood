// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the object the global scan source points to, whose state word at +0x124 selects the flag test of a walk.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The scan source: a state word at +0x124 that must read six for the flag test to run.
 *
 */
struct ScanSource {
    uint8_t unknown_0x0000[0x124];
    int32_t state_0x124;   /**< Six while the flag test may run. */
};
static_assert(offsetof(ScanSource, state_0x124) == 0x124);

}  // namespace misc
