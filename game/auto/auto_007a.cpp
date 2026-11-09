// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_007ac220 = 0xa9;

extern "C" uint32_t bb_auto_return_constant_007ac220()
{
    return value_007ac220;
}
