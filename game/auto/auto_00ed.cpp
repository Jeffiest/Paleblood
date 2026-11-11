// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_float_field_00ed4cf0 reads.
 *
 */
struct Object00ed4cf0 {
    uint8_t unknown_0x0000[0x118];
    float value_0x0118; /**< Read by auto_return_float_field_00ed4cf0; meaning unknown. */
};
static_assert(offsetof(Object00ed4cf0, value_0x0118) == 0x118);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_00ed4cf0(const Object00ed4cf0 *self)
{
    return self->value_0x0118;
}

/**
 *
 * The part of the object that auto_return_member_address_00ed4d40 reads.
 *
 */
struct Object00ed4d40 {
    uint8_t unknown_0x0000[0xe0];
    uint8_t member_0x00e0; /**< Read by auto_return_member_address_00ed4d40; meaning unknown. */
};
static_assert(offsetof(Object00ed4d40, member_0x00e0) == 0xe0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00ed4d40(Object00ed4d40 *self)
{
    return &self->member_0x00e0;
}

/**
 *
 * The part of the object that auto_return_field_00ed5000 reads.
 *
 */
struct Object00ed5000 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_00ed5000; meaning unknown. */
};
static_assert(offsetof(Object00ed5000, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ed5000(const Object00ed5000 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ed77f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ed77f0()
{
    return value_00ed77f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ed7f10 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ed7f10()
{
    return value_00ed7f10;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00ed8360 = 0x2;

extern "C" uint32_t bb_auto_return_constant_00ed8360()
{
    return value_00ed8360;
}
