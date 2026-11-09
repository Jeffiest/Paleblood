// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b100c0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b100c0()
{
    return value_00b100c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b104b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b104c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b10650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b10670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b10690()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b11330 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b11330()
{
    return value_00b11330;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b16470 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b16470()
{
    return value_00b16470;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b168a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b168b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b181c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b181e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b18920()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b18d50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b18d50()
{
    return value_00b18d50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00b1abb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00b1abb0()
{
    return value_00b1abb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b1abc0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b1abc0()
{
    return value_00b1abc0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1b0a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1b2d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b1b870 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b1b870()
{
    return value_00b1b870;
}

/**
 *
 * The part of the object that auto_return_member_address_00b1fb40 reads.
 *
 */
struct Object00b1fb40 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_00b1fb40; meaning unknown. */
};
static_assert(offsetof(Object00b1fb40, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00b1fb40(Object00b1fb40 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00b1fb50 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00b1fb50()
{
    return value_00b1fb50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1fca0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1fcc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1fce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00b1fd00()
{
}
