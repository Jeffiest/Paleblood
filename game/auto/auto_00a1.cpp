// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a12270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a12280()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00a14f60 reads.
 *
 */
struct Object00a14f60 {
    uint8_t unknown_0x0000[0x170];
    uint8_t member_0x0170; /**< Read by auto_return_member_address_00a14f60; meaning unknown. */
};
static_assert(offsetof(Object00a14f60, member_0x0170) == 0x170);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00a14f60(Object00a14f60 *self)
{
    return &self->member_0x0170;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a164e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a164f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a165a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a16aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a1aed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a1aee0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00a1d380 = 0x2;

extern "C" uint32_t bb_auto_return_constant_00a1d380()
{
    return value_00a1d380;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00a1e280()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00a1e290()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00a1fda0()
{
    return 0;
}
