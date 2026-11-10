// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the record that supplies the second argument of a member-function thunk call.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * A record whose word at +0x10 is passed as the second argument of the thunk's target.
 *
 */
struct ThunkSecondArgument {
    uint8_t unknown_0x00[0x10];
    uint64_t value_0x10;          /**< The value passed on to the target. */
};
static_assert(offsetof(ThunkSecondArgument, value_0x10) == 0x10);

}  // namespace misc
