// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_012c2720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_012c2720()
{
    return value_012c2720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012c6580()
{
}
