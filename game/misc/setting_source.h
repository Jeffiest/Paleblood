// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the source of a setting: the 32-bit value that is written into the inner setting block.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The setting source: its value at +0x0c.
 *
 */
struct SettingSource {
    uint8_t unknown_0x0000[0xc];   /**< Not read by the setting write. */
    uint32_t value_0x0c;           /**< The value copied into the inner setting. */
};
static_assert(offsetof(SettingSource, value_0x0c) == 0x0c);

}  // namespace misc
