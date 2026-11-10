// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a payload whose flag byte at +0x10 carries the bit the read reports.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A payload: unknown state followed by the flag byte whose bit 1 the read reports.
 *
 */
struct GatedPayload {
    uint8_t unknown_0x00[0x10];
    uint8_t bits_0x10; /**< Bit 1 is the flag the gated read reports. */
};
static_assert(offsetof(GatedPayload, bits_0x10) == 0x10);

}  // namespace misc
