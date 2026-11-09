// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c401a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c40200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c46bd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c48ef0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01c4c8e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01c4c920 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01c4c920()
{
    return value_01c4c920;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01c4c930 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01c4c930()
{
    return value_01c4c930;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01c4c940()
{
    return 0;
}
