// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the result a probe source reports: a detail pointer at +0x8.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ProbeDetail;

/**
 *
 * A probe result: the detail at +0x8, null when the probe reports none.
 *
 */
struct ProbeResult {
    uint8_t unknown_0x00[0x8];
    ProbeDetail *detail_0x08; /**< Null when the probe reports no detail. */
};
static_assert(offsetof(ProbeResult, detail_0x08) == 0x8);

}  // namespace misc
