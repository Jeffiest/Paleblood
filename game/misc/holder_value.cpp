// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the value of a holder's inner record.
#include "misc.h"

/**
 *
 * Returns the holder's inner value.
 *
 */
extern "C" uint64_t bb_misc_holder_value(const misc::Holder *holder)
{
    return holder->inner->value;
}
