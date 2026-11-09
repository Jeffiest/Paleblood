// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the record a pair binding fills, with its context and the two values and counters it sets.
#pragma once

#include <cstddef>
#include <cstdint>

#include "pair_context.h"

namespace misc {

/** The largest value the binding lets its first count keep. */
constexpr uint32_t pair_count_cap = 30;

/** The smallest value the binding lets its second count keep. */
constexpr uint32_t pair_count_floor = 32;

/**
 *
 * The record: its context at +0x08, the two values it stores at +0x878 and +0x880, and the two counts
 * clamped at +0x960 and +0x964.
 *
 */
struct PairRecord {
    uint8_t unknown_0x0000[0x08];
    PairContext *context_0x08;
    uint8_t unknown_0x0010[0x868];
    uint64_t first_value_0x878;
    uint64_t second_value_0x880;
    uint8_t unknown_0x0888[0xd8];
    uint32_t count_0x960;      /**< First count, clamped to at most the cap. */
    uint32_t count_0x964;      /**< Second count, raised to at least the floor. */
};
static_assert(offsetof(PairRecord, context_0x08) == 0x08);
static_assert(offsetof(PairRecord, first_value_0x878) == 0x878);
static_assert(offsetof(PairRecord, second_value_0x880) == 0x880);
static_assert(offsetof(PairRecord, count_0x960) == 0x960);
static_assert(offsetof(PairRecord, count_0x964) == 0x964);

}  // namespace misc
