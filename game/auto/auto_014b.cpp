// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_014bcd00 = 0x1;

extern "C" uint8_t bb_auto_return_constant_014bcd00()
{
    return value_014bcd00;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_014bcd30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_014bcd30()
{
    return value_014bcd30;
}
