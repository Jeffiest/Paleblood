// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02ec0be0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02ec12f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02ec12f0()
{
    return value_02ec12f0;
}
