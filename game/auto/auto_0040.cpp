// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_004034f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_004034f0()
{
    return value_004034f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00406600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00409fd0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0040c4c0()
{
    return 0;
}
