// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the shared routine with a zero second argument and the other argument registers as they came.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01391c60, fn_01391c60, SixArgumentTarget);

/** The second argument the routine is given here: zero. */
constexpr uint64_t zero_second_argument = 0;

}  // namespace

/**
 *
 * Calls the shared routine as a tail call with a zero second argument, and returns its result unchanged.
 *
 * The second argument register is replaced, the other argument registers pass through.
 */
extern "C" uint64_t bb_misc_call_with_zero_kind_013b50f0(uint64_t first, uint64_t /* second: replaced by zero */,
                                                        uint64_t third, uint64_t fourth, uint64_t fifth,
                                                        uint64_t sixth)
{
    return fn_01391c60(first, zero_second_argument, third, fourth, fifth, sixth);
}
