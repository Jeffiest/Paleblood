// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00be0e70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00be0e70()
{
    return value_00be0e70;
}

/**
 *
 * The part of the object that auto_return_field_00be3100 reads.
 *
 */
struct Object00be3100 {
    uint8_t unknown_0x0000[0x88];
    uint32_t value_0x0088; /**< Read by auto_return_field_00be3100; meaning unknown. */
};
static_assert(offsetof(Object00be3100, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be3100(const Object00be3100 *self)
{
    return self->value_0x0088;
}

/**
 *
 * The part of the object that auto_return_member_address_00be3360 reads.
 *
 */
struct Object00be3360 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_00be3360; meaning unknown. */
};
static_assert(offsetof(Object00be3360, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00be3360(Object00be3360 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_00be3370 reads.
 *
 */
struct Object00be3370 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_00be3370; meaning unknown. */
};
static_assert(offsetof(Object00be3370, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be3370(const Object00be3370 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_00be35d0 reads.
 *
 */
struct Object00be35d0 {
    uint8_t unknown_0x0000[0xb0];
    uint8_t value_0x00b0; /**< Read by auto_return_field_00be35d0; meaning unknown. */
};
static_assert(offsetof(Object00be35d0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00be35d0(const Object00be35d0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_00be35e0 reads.
 *
 */
struct Object00be35e0 {
    uint8_t unknown_0x0000[0xa8];
    uint32_t value_0x00a8; /**< Read by auto_return_field_00be35e0; meaning unknown. */
};
static_assert(offsetof(Object00be35e0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00be35e0(const Object00be35e0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00beaf80 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00beaf80()
{
    return value_00beaf80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00beb6d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00beb6d0()
{
    return value_00beb6d0;
}
