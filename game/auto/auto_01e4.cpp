// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e41070 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01e41070()
{
    return value_01e41070;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e413d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e44200()
{
}

/**
 *
 * The part of the object that auto_return_field_01e45d80 reads.
 *
 */
struct Object01e45d80 {
    uint8_t unknown_0x0000[0x11];
    uint8_t value_0x0011; /**< Read by auto_return_field_01e45d80; meaning unknown. */
};
static_assert(offsetof(Object01e45d80, value_0x0011) == 0x11);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e45d80(const Object01e45d80 *self)
{
    return self->value_0x0011;
}

/**
 *
 * The part of the object that auto_return_field_01e45d90 reads.
 *
 */
struct Object01e45d90 {
    uint8_t unknown_0x0000[0x12];
    uint8_t value_0x0012; /**< Read by auto_return_field_01e45d90; meaning unknown. */
};
static_assert(offsetof(Object01e45d90, value_0x0012) == 0x12);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e45d90(const Object01e45d90 *self)
{
    return self->value_0x0012;
}

/**
 *
 * The part of the object that auto_return_float_field_01e45da0 reads.
 *
 */
struct Object01e45da0 {
    uint8_t unknown_0x0000[0xc];
    float value_0x000c; /**< Read by auto_return_float_field_01e45da0; meaning unknown. */
};
static_assert(offsetof(Object01e45da0, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e45da0(const Object01e45da0 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_01e46eb0 reads.
 *
 */
struct Object01e46eb0 {
    uint8_t unknown_0x0000[0x28];
    uint8_t value_0x0028; /**< Read by auto_return_field_01e46eb0; meaning unknown. */
};
static_assert(offsetof(Object01e46eb0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01e46eb0(const Object01e46eb0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e47730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e47790()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01e4d3b0 reads.
 *
 */
struct Object01e4d3b0 {
    uint8_t unknown_0x0000[0x1e0];
    uint8_t member_0x01e0; /**< Read by auto_return_member_address_01e4d3b0; meaning unknown. */
};
static_assert(offsetof(Object01e4d3b0, member_0x01e0) == 0x1e0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e4d3b0(Object01e4d3b0 *self)
{
    return &self->member_0x01e0;
}
