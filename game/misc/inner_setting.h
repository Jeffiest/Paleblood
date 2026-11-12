// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an inner setting block with a 32-bit value at 0xec and an enabled byte at 0xf0.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The inner setting block: the value at 0xec and the enabled flag at 0xf0.
 *
 */
struct InnerSetting {
    uint8_t unknown_0x0000[0xec];  /**< Not written by the setting write. */
    uint32_t value_0xec;           /**< The setting's value, written from the source. */
    uint8_t enabled_0xf0;          /**< Set to one by the setting write. */
};
static_assert(offsetof(InnerSetting, value_0xec) == 0xec);
static_assert(offsetof(InnerSetting, enabled_0xf0) == 0xf0);

}  // namespace misc
