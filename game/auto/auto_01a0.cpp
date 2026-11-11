// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a00320()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a00770 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_01a00770()
{
    return value_01a00770;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a02220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a056f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a08140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a0dbc0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a0e200 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a0e200()
{
    return value_01a0e200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a0f1a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01a0f7e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01a0f7e0()
{
    return value_01a0f7e0;
}
