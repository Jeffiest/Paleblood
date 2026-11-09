// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a7ac50 = 0x3;

extern "C" uint32_t bb_auto_return_constant_00a7ac50()
{
    return value_00a7ac50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a7bbd0()
{
}
