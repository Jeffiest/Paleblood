// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00cbbf10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00cbbf10()
{
    return value_00cbbf10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00cbbf20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00cbbf20()
{
    return value_00cbbf20;
}
