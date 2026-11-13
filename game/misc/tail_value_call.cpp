// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tail-calls a library routine with the object's 32-bit value; the other argument registers pass through.
#include <cstdint>

#include "runtime/original.h"
#include "thunk_value_object.h"

namespace {

/** The library routine the thunk jumps to; its result is the thunk's RAX. */
RT_ORIGINAL(0x02fc0b08, tail_value_call,
            uint64_t(uint32_t value, uint64_t rsi, uint64_t rdx, uint64_t rcx, uint64_t r8, uint64_t r9));

}  // namespace

/**
 *
 * Passes the object's 32-bit value, and the other argument registers unchanged, to the library routine, and returns
 * its result.
 *
 */
extern "C" uint64_t bb_misc_tail_value_call_02276f40(misc::ThunkValueObject *object, uint64_t rsi, uint64_t rdx,
                                                     uint64_t rcx, uint64_t r8, uint64_t r9)
{
    return tail_value_call(object->value, rsi, rdx, rcx, r8, r9);
}
