// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an entry point of a shared routine: it sets the routine's kind argument and tail-calls it, the other arguments as they came.
#include <cstdint>

#include "runtime/original.h"

namespace {

using RoutineTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth, uint64_t fifth,
                               uint64_t sixth);

RT_ORIGINAL(0x01391c60, fn_routine, RoutineTarget);

/** The kind argument this entry point gives the routine. */
constexpr uint64_t kind_argument = 0x13;

}  // namespace

/**
 *
 * Calls the routine as a tail call with this entry point's kind argument, the other argument registers passed through,
 * and returns the routine's result unchanged.
 *
 */
extern "C" uint64_t bb_misc_tail_call_kind_013b55c0(uint64_t first, uint64_t /* second: replaced by the kind argument */, uint64_t third,
                              uint64_t fourth, uint64_t fifth, uint64_t sixth)
{
    return fn_routine(first, kind_argument, third, fourth, fifth, sixth);
}
