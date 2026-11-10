// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that reaches its gated owner and keeps the value it last stored.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct GatedOwner;

/**
 *
 * A holder that reaches its owner at +0x8 and keeps the stored value at +0x20.
 *
 */
struct GatedHolder {
    uint8_t unknown_0x00[0x8];
    GatedOwner *owner;   /**< The owner whose target and settings the holder reaches. */
    uint8_t unknown_0x10[0x10];
    uint32_t value_0x20; /**< The value last stored by the holder. */
};
static_assert(offsetof(GatedHolder, owner) == 0x8 && offsetof(GatedHolder, value_0x20) == 0x20);

}  // namespace misc
