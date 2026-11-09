// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a gated value, with the target it writes and the settings that gate it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct GatedTarget;
struct GatedSettings;

/**
 *
 * An owner that keeps its target at +0x20 and its settings at +0x3b0.
 *
 */
struct GatedOwner {
    uint8_t unknown_0x00[0x20];
    GatedTarget *target;     /**< The target the stored value is written to. */
    uint8_t unknown_0x28[0x388];
    GatedSettings *settings; /**< The settings whose block flag gates the store. */
};
static_assert(offsetof(GatedOwner, target) == 0x20 && offsetof(GatedOwner, settings) == 0x3b0);

}  // namespace misc
