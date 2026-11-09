// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that refers to a probe source.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ProbeSource;

/**
 *
 * A source holder: the probe source it refers to at +0x8.
 *
 */
struct SourceHolder {
    uint8_t unknown_0x00[0x8];
    ProbeSource *source_0x08; /**< The probe source the holder reads from. */
};
static_assert(offsetof(SourceHolder, source_0x08) == 0x8);

}  // namespace misc
