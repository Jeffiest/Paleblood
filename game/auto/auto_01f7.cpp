// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f70ec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f713d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f715c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f71890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f720f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01f72110 reads.
 *
 */
struct Object01f72110 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01f72110; meaning unknown. */
};
static_assert(offsetof(Object01f72110, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01f72110(Object01f72110 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f72230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f724b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f725b0()
{
}

/**
 *
 * The part of the object that auto_return_field_01f72e60 reads.
 *
 */
struct Object01f72e60 {
    uint8_t unknown_0x0000[0x3c0];
    uint8_t value_0x03c0; /**< Read by auto_return_field_01f72e60; meaning unknown. */
};
static_assert(offsetof(Object01f72e60, value_0x03c0) == 0x3c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01f72e60(const Object01f72e60 *self)
{
    return self->value_0x03c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f72f90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f733c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73500()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f736f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f73f10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f74dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f750c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f751d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f757f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f758f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01f75a80()
{
}
