// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02b12e60 reads.
 *
 */
struct Object02b12e60 {
    uint8_t value_0x0000; /**< Read by auto_return_field_02b12e60; meaning unknown. */
};
static_assert(offsetof(Object02b12e60, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02b12e60(const Object02b12e60 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02b144f0 reads.
 *
 */
struct Object02b144f0 {
    uint8_t unknown_0x0000[0x3c];
    uint32_t value_0x003c; /**< Read by auto_return_field_02b144f0; meaning unknown. */
};
static_assert(offsetof(Object02b144f0, value_0x003c) == 0x3c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02b144f0(const Object02b144f0 *self)
{
    return self->value_0x003c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02b14930 = 0x170;

extern "C" uint32_t bb_auto_return_constant_02b14930()
{
    return value_02b14930;
}

/**
 *
 * The part of the object that auto_return_member_address_02b1d7a0 reads.
 *
 */
struct Object02b1d7a0 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_02b1d7a0; meaning unknown. */
};
static_assert(offsetof(Object02b1d7a0, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02b1d7a0(Object02b1d7a0 *self)
{
    return &self->member_0x00d0;
}
