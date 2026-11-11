// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the static vtable block of an object with two base subobjects.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The static vtable block that both base subobjects point into: the primary base's address point is at
 * +0x10 and the secondary base's at +0xe0.
 *
 */
struct TwoBaseVtable {
    static constexpr auto header_bytes = 0x10;
    static constexpr auto primary_bytes = 0xd0;
    static constexpr auto secondary_bytes = 0x08;
    uint8_t unknown_0x0000[header_bytes];
    uint8_t primary_address_point[primary_bytes];   /**< The primary base's address point. */
    uint8_t secondary_address_point[secondary_bytes]; /**< The secondary base's address point. */
};
static_assert(offsetof(TwoBaseVtable, primary_address_point) == 0x10);
static_assert(offsetof(TwoBaseVtable, secondary_address_point) == 0xe0);

}  // namespace misc
