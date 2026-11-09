// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the context a pair record points to, with its flags and the two values bound into it.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/** The flag bits a pair binding sets in its context. */
constexpr uint64_t pair_context_flag_bits = 0xc0000000;

/**
 *
 * The context: its flags at +0x1968 and the two values the binding stores at +0xd218 and +0xd220.
 *
 */
struct PairContext {
    uint8_t unknown_0x0000[0x1968];
    uint64_t flags_0x1968;
    uint8_t unknown_0x1970[0xb8a8];
    uint64_t first_value_0xd218;  /**< First value stored by the binding. */
    uint64_t second_value_0xd220; /**< Second value stored by the binding. */
    uint8_t unknown_0xd228[0x48];
    uint64_t value_0xd270;        /**< First value of the recorded probe values. */
    uint64_t value_0xd278;        /**< Second value of the recorded probe values. */
    uint64_t value_0xd280;        /**< Third value of the recorded probe values. */
};
static_assert(offsetof(PairContext, flags_0x1968) == 0x1968);
static_assert(offsetof(PairContext, first_value_0xd218) == 0xd218);
static_assert(offsetof(PairContext, second_value_0xd220) == 0xd220);
static_assert(offsetof(PairContext, value_0xd270) == 0xd270);
static_assert(offsetof(PairContext, value_0xd280) == 0xd280);

}  // namespace misc
