// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FlaggedOwnedPairVtable;

/**
 *
 * An object that owns two pointers, which it releases when its flag byte is set, and then clears.
 *
 */
struct FlaggedOwnedPair {
    const FlaggedOwnedPairVtable *vtable;   /**< The address point of this class's vtable. */
    uint8_t unknown_0x08[0x28];
    void *first_0x30;                       /**< Released when the flag is set, then cleared. */
    void *second_0x38;                      /**< Released when the flag is set, then cleared. */
    uint8_t flag_0x40;                      /**< Nonzero: the two pointers are released. */
};
static_assert(offsetof(FlaggedOwnedPair, first_0x30) == 0x30 && offsetof(FlaggedOwnedPair, second_0x38) == 0x38);
static_assert(offsetof(FlaggedOwnedPair, flag_0x40) == 0x40);

}  // namespace misc
