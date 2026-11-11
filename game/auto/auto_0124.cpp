// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01245410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01245410()
{
    return value_01245410;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0124a830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0124a9b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0124a9b0()
{
    return value_0124a9b0;
}
