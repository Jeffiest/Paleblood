// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an owner of two chain lists, each with its own sentinel and node allocator, behind one virtual table.
#pragma once

#include <cstddef>
#include <cstdint>

#include "chain_list_owner.h"

namespace misc {

/**
 *
 * An owner of two chain lists: the virtual table first, then a list at +0x08 and a second list at +0x28, a flag
 * word at +0x48 and a zero word at +0x50.
 *
 */
struct ChainPairOwner {
    const void *vtable;                 /**< The owner's virtual table address point, set when it is built. */
    ChainListOwner first_list;          /**< The first chain list, at +0x08. */
    ChainListOwner second_list;         /**< The second chain list, at +0x28. */
    uint32_t flag_0x48;                 /**< Zeroed when the owner is built. */
    uint8_t unknown_0x4c[0x4];          /**< Not written by the build. */
    uint64_t zero_0x50;                 /**< Zeroed when the owner is built. */
};
static_assert(offsetof(ChainPairOwner, first_list) == 0x08);
static_assert(offsetof(ChainPairOwner, second_list) == 0x28);
static_assert(offsetof(ChainPairOwner, flag_0x48) == 0x48);
static_assert(offsetof(ChainPairOwner, zero_0x50) == 0x50);
static_assert(sizeof(ChainPairOwner) == 0x58);

}  // namespace misc
