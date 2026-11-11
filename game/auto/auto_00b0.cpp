// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00b00c50 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00b00c50()
{
    return value_00b00c50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b07180 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b07180()
{
    return value_00b07180;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b0e880()
{
}
