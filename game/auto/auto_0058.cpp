// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00586d30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_005876b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_005876b0()
{
    return value_005876b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_005876c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_005876c0()
{
    return value_005876c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00587950 = 0x627dafcf;

extern "C" uint32_t bb_auto_return_constant_00587950()
{
    return value_00587950;
}
