// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00af3260()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00afb830 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00afb830()
{
    return value_00afb830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00afbaf0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00afbaf0()
{
    return value_00afbaf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00aff820 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00aff820()
{
    return value_00aff820;
}
