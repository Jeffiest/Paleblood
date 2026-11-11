// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint64_t value_01343fa0 = 0x7fff00007fff;

extern "C" uint64_t bb_auto_return_constant_01343fa0()
{
    return value_01343fa0;
}
