// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01f02c60 reads.
 *
 */
struct Object01f02c60 {
    uint8_t unknown_0x0000[0xdf0];
    uint8_t member_0x0df0; /**< Read by auto_return_member_address_01f02c60; meaning unknown. */
};
static_assert(offsetof(Object01f02c60, member_0x0df0) == 0xdf0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f02c60(Object01f02c60 *self)
{
    return &self->member_0x0df0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f033a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f035d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f039e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03ae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03ea0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f03fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f05140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f05240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f05390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f05490()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f055e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01f059b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01f059b0()
{
    return value_01f059b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f05a90()
{
}
