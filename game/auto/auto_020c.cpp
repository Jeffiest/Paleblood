// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0a40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0e00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020c0e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020ca7d0()
{
}

/**
 *
 * The part of the object that auto_return_field_020cc5a0 reads.
 *
 */
struct Object020cc5a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020cc5a0; meaning unknown. */
};
static_assert(offsetof(Object020cc5a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020cc5a0(const Object020cc5a0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020cd350()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cd8d0 = 0x158;

extern "C" uint32_t bb_auto_return_constant_020cd8d0()
{
    return value_020cd8d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cdbf0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020cdbf0()
{
    return value_020cdbf0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020cdf10 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020cdf10()
{
    return value_020cdf10;
}
