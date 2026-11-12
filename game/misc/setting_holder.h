// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that points at the inner setting block its setting is written into.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct InnerSetting;

/**
 *
 * A setting holder: the inner setting block sits at +0x08.
 *
 */
struct SettingHolder {
    uint8_t unknown_0x0000[0x8];          /**< Not read by the setting write. */
    InnerSetting *inner_0x08;             /**< The inner setting block the value is written into. */
};
static_assert(offsetof(SettingHolder, inner_0x08) == 0x08);

}  // namespace misc
