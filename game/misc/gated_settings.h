// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the settings of a gated owner, with its payload at +0x8 and its gating block at +0x30.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct GatedPayload;
struct GatedBlock;

/**
 *
 * A settings record that keeps its payload at +0x8 and its gating block at +0x30.
 *
 */
struct GatedSettings {
    uint8_t unknown_0x00[0x8];
    GatedPayload *payload; /**< The payload whose bits the read reports. */
    uint8_t unknown_0x10[0x20];
    GatedBlock *block;     /**< The block whose flag gates the store, or null when there is none. */
};
static_assert(offsetof(GatedSettings, payload) == 0x8 && offsetof(GatedSettings, block) == 0x30);

}  // namespace misc
