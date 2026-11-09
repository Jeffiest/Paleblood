// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the settings record of a selection, which holds its config.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SelectionConfig;

/**
 *
 * A settings record that keeps its config at +0x8.
 *
 */
struct SelectionSettings {
    uint8_t unknown_0x00[0x8];
    SelectionConfig *config; /**< The config the selection flag is read from. */
};
static_assert(offsetof(SelectionSettings, config) == 0x8);

}  // namespace misc
