// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af1680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af1d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af5820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01af82d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01af8720 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01af8720()
{
    return value_01af8720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01afe000()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01afe450 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01afe450()
{
    return value_01afe450;
}
