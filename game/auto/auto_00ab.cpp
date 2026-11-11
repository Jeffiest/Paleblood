// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00abc860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00abc860()
{
    return value_00abc860;
}
