// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a config whose flag byte selects the probe's first value.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A config: unknown state followed by the flag byte whose bit 4 selects the probe's first value.
 *
 */
struct SelectionConfig {
    uint8_t unknown_0x000[0x818];
    uint8_t flags_0x818; /**< Bit 4 selects the probe's first value. */
};
static_assert(offsetof(SelectionConfig, flags_0x818) == 0x818);

}  // namespace misc
