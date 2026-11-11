// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b24a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b295c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b2eb80 = 0x8;

extern "C" uint32_t bb_auto_return_constant_01b2eb80()
{
    return value_01b2eb80;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b2f020()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b2f470 = 0x220;

extern "C" uint32_t bb_auto_return_constant_01b2f470()
{
    return value_01b2f470;
}
