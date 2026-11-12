// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object whose active flag and alternate byte pick the mode its shared routine runs in.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The mode object: the bytes at 0x00 to 0x8f belong to the object's other users, the active flag at 0x90 says
 * whether the object is in its active mode, and the alternate byte at 0x91 picks between two modes while it is not.
 *
 */
struct ModeSelectedObject {
    uint8_t unknown_0x00[0x90];
    uint8_t active_0x90;               /**< Active flag: when set, the object is in its active mode. */
    uint8_t alternate_0x91;            /**< Alternate byte that picks one of two modes while the flag is clear. */
};
static_assert(offsetof(ModeSelectedObject, active_0x90) == 0x90 && offsetof(ModeSelectedObject, alternate_0x91) == 0x91);

}  // namespace misc
