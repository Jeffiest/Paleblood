// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c64dc0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c69cd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c69cd0()
{
    return value_02c69cd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c69ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6ad90()
{
}
