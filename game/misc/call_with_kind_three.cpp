// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the shared routine with the kind argument three and returns the low byte of its result.
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The target seen as taking the six integer argument registers and returning the integer result. */
using SixArgumentTarget = uint64_t(uint64_t first, uint64_t second, uint64_t third, uint64_t fourth,
                                   uint64_t fifth, uint64_t sixth);

RT_ORIGINAL(0x01391c60, fn_01391c60, SixArgumentTarget);

/** The kind argument the shared routine is given here. */
constexpr uint64_t kind_argument_three = 3;

}  // namespace

/**
 *
 * Calls the shared routine with the kind argument set to three, the other argument registers passed through, and
 * returns the low byte of its result.
 *
 */
extern "C" uint8_t bb_misc_call_with_kind_three_013b5180(uint64_t first, uint64_t /* second: replaced by three */,
                                                        uint64_t third, uint64_t fourth, uint64_t fifth,
                                                        uint64_t sixth)
{
    return static_cast<uint8_t>(fn_01391c60(first, kind_argument_three, third, fourth, fifth, sixth));
}
