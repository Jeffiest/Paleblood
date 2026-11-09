// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012b0840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_012bd290()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_012bea20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_012bea20()
{
    return value_012bea20;
}
