// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_012e4ff0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_012e4ff0()
{
    return value_012e4ff0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_012e5030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_012ecdd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_012ecdd0()
{
    return value_012ecdd0;
}
