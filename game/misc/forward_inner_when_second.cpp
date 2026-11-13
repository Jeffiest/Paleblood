// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: when the second argument is set and the holder has an inner object, passes all arguments on to the inner object's routine.
#include <cstdint>

#include "inner_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x013bde00, fn_013bde00, uint64_t(void *inner, uint64_t second_argument, uint64_t third_argument,
                                             uint64_t fourth_argument, uint64_t fifth_argument,
                                             uint64_t sixth_argument));

}  // namespace

/**
 *
 * Returns zero when the second argument is zero or the holder has no inner object. Otherwise the inner object and all
 * the argument registers are passed on unchanged, and the routine's result is returned.
 */
extern "C" uint64_t bb_misc_forward_inner_when_second(misc::InnerHolder *holder, uint64_t second_argument,
                                                      uint64_t third_argument, uint64_t fourth_argument,
                                                      uint64_t fifth_argument, uint64_t sixth_argument)
{
    if (second_argument == 0 || holder->inner == nullptr) return 0;
    return fn_013bde00(holder->inner, second_argument, third_argument, fourth_argument, fifth_argument,
                       sixth_argument);
}
