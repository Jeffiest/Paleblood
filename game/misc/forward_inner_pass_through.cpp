// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes all of its arguments on to the inner object's routine when the inner object exists, and returns zero otherwise.
#include <cstdint>

#include "inner_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x013beae0, fn_013beae0, uint64_t(void *inner, uint64_t second_argument, uint64_t third_argument,
                                             uint64_t fourth_argument, uint64_t fifth_argument,
                                             uint64_t sixth_argument));

}  // namespace

/**
 *
 * Returns zero when the holder has no inner object. Otherwise the inner object and all five further argument registers
 * are passed on unchanged, and the routine's result is returned.
 */
extern "C" uint64_t bb_misc_forward_inner_pass_through(misc::InnerHolder *holder, uint64_t second_argument,
                                                       uint64_t third_argument, uint64_t fourth_argument,
                                                       uint64_t fifth_argument, uint64_t sixth_argument)
{
    if (holder->inner == nullptr) return 0;
    return fn_013beae0(holder->inner, second_argument, third_argument, fourth_argument, fifth_argument,
                       sixth_argument);
}
