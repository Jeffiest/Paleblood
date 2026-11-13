// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes a flag byte, zero-extended, and all remaining argument registers to the inner object's routine when the inner object exists.
#include <cstdint>

#include "inner_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x013beb00, fn_013beb00, uint64_t(void *inner, uint32_t flag, uint64_t third_argument,
                                             uint64_t fourth_argument, uint64_t fifth_argument,
                                             uint64_t sixth_argument));

}  // namespace

/**
 *
 * Returns zero when the holder has no inner object. Otherwise the low byte of the second argument is passed on,
 * zero-extended to 32 bits, together with the inner object and the remaining argument registers, and the routine's
 * result is returned.
 */
extern "C" uint64_t bb_misc_forward_inner_byte_flag(misc::InnerHolder *holder, uint8_t flag,
                                                    uint64_t third_argument, uint64_t fourth_argument,
                                                    uint64_t fifth_argument, uint64_t sixth_argument)
{
    if (holder->inner == nullptr) return 0;
    return fn_013beb00(holder->inner, static_cast<uint32_t>(flag), third_argument, fourth_argument, fifth_argument,
                       sixth_argument);
}
