// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a member object with a signed count and a flag byte that the release paths set.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A member object: a signed count at 0xe4 and a flag byte at 0xec.
 *
 */
struct FlaggedMember {
    uint8_t unknown_0x0000[0xe4];
    int32_t count_0xe4;                 /**< Signed count; the flag is set when it is one or less. */
    uint8_t unknown_0x00e8[0x4];
    uint8_t flag_0xec;                  /**< Set to one by the release paths when the count is one or less. */
};
static_assert(offsetof(FlaggedMember, count_0xe4) == 0xe4);
static_assert(offsetof(FlaggedMember, flag_0xec) == 0xec);

}  // namespace misc
