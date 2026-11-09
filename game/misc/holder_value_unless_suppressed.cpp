// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns a holder's inner value unless the flags' low byte has its top bit set.
#include "misc.h"

namespace {

/**
 *
 * Bit of the flags argument that suppresses the value.
 *
 */
constexpr uint8_t suppress_flag = 0x80;

}  // namespace

/**
 *
 * Returns the holder's inner value, or zero when the suppress bit of the flags is set.
 *
 */
extern "C" uint64_t bb_misc_holder_value_unless_suppressed(const misc::Holder *holder, uint8_t flags)
{
    if ((flags & suppress_flag) != 0) return 0;
    return holder->inner->value;
}
