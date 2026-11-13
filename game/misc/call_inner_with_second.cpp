// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the inner object's routine with the second argument when that argument and the inner object are both set.
#include <cstdint>

#include "inner_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x013bdb70, fn_013bdb70, uint64_t(void *inner, uint64_t second_argument));

}  // namespace

/**
 *
 * Returns zero when the second argument is zero or the holder has no inner object. Otherwise calls the inner object's
 * routine with the inner object and the second argument, and returns its result.
 */
extern "C" uint64_t bb_misc_call_inner_with_second(misc::InnerHolder *holder, uint64_t second_argument)
{
    if (second_argument == 0 || holder->inner == nullptr) return 0;
    return fn_013bdb70(holder->inner, second_argument);
}
