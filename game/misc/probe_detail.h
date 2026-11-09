// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a probe detail: a flag byte at +0x139.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A probe detail: its flag byte at +0x139.
 *
 */
struct ProbeDetail {
    uint8_t unknown_0x0000[0x139];
    uint8_t flag_0x139; /**< The flag the probe reads reports. */
};
static_assert(offsetof(ProbeDetail, flag_0x139) == 0x139);

}  // namespace misc
