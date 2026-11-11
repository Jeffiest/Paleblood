// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01ca0640 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01ca0640()
{
    return value_01ca0640;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ca2920()
{
}
