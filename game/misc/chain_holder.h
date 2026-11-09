// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that refers to the owner of a chain.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ChainOwner;

/**
 *
 * A holder that keeps the chain's owner at +0x8.
 *
 */
struct ChainHolder {
    uint8_t unknown_0x00[0x8];
    ChainOwner *owner; /**< The owner of the chain. */
};
static_assert(offsetof(ChainHolder, owner) == 0x8);

}  // namespace misc
