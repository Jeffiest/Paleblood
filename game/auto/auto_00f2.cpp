// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f20d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f24060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f24290()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f25520 = 0x70;

extern "C" uint32_t bb_auto_return_constant_00f25520()
{
    return value_00f25520;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f25530()
{
}

/**
 *
 * The part of the object that auto_return_member_address_00f258c0 reads.
 *
 */
struct Object00f258c0 {
    uint8_t unknown_0x0000[0x50];
    uint8_t member_0x0050; /**< Read by auto_return_member_address_00f258c0; meaning unknown. */
};
static_assert(offsetof(Object00f258c0, member_0x0050) == 0x50);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00f258c0(Object00f258c0 *self)
{
    return &self->member_0x0050;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f25980 = 0x10;

extern "C" uint32_t bb_auto_return_constant_00f25980()
{
    return value_00f25980;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f259c0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00f25e70 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_00f25e70()
{
    return value_00f25e70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f25e90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f260b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f26a40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f28140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f288f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f2aea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00f2c670()
{
}
