// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a90f00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a90f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a91380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a9d120()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a9d140 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00a9d140()
{
    return value_00a9d140;
}
