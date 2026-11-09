// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00d51b80 reads.
 *
 */
struct Object00d51b80 {
    uint8_t unknown_0x0000[0xc0];
    uint64_t value_0x00c0; /**< Read by auto_return_field_00d51b80; meaning unknown. */
};
static_assert(offsetof(Object00d51b80, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d51b80(const Object00d51b80 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d53a00()
{
}

/**
 *
 * The part of the object that auto_return_float_field_00d561c0 reads.
 *
 */
struct Object00d561c0 {
    uint8_t unknown_0x0000[0x20];
    float value_0x0020; /**< Read by auto_return_float_field_00d561c0; meaning unknown. */
};
static_assert(offsetof(Object00d561c0, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00d561c0(const Object00d561c0 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_00d561d0 reads.
 *
 */
struct Object00d561d0 {
    uint8_t unknown_0x0000[0x10];
    uint8_t member_0x0010; /**< Read by auto_return_member_address_00d561d0; meaning unknown. */
};
static_assert(offsetof(Object00d561d0, member_0x0010) == 0x10);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00d561d0(Object00d561d0 *self)
{
    return &self->member_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d58150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d58170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d582e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d582f0()
{
}

/**
 *
 * The part of the object that auto_return_field_00d58da0 reads.
 *
 */
struct Object00d58da0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00d58da0; meaning unknown. */
};
static_assert(offsetof(Object00d58da0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00d58da0(const Object00d58da0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ade0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ae90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5af60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5af80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5af90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d0c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5d130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5e860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5e870()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5fa20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00d5ff60()
{
}
