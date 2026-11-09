// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the owner of a chain, whose virtual table finds the chain's link.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ChainOwner;
struct ChainSlot;

/**
 *
 * The owner's virtual table: the slot at +0x168 finds the chain's link.
 *
 */
struct ChainOwnerVtable {
    uint8_t unknown_0x0000[0x168];
    ChainSlot *(*find_slot)(ChainOwner *owner); /**< Finds the link the chain reports from. */
};
static_assert(offsetof(ChainOwnerVtable, find_slot) == 0x168);

/**
 *
 * An owner of a chain, with its virtual table first.
 *
 */
struct ChainOwner {
    const ChainOwnerVtable *vtable; /**< Virtual table of the owner. */
};
static_assert(offsetof(ChainOwner, vtable) == 0x0);

}  // namespace misc
