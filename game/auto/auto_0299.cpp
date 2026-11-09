// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02997ec0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02997f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02997f10()
{
    return value_02997f10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0299aec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0299b1b0()
{
}
