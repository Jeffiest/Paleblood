// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_member_address_01cf3a00 reads.
 *
 */
struct Object01cf3a00 {
    uint8_t unknown_0x0000[0x3d8];
    uint8_t member_0x03d8; /**< Read by auto_return_member_address_01cf3a00; meaning unknown. */
};
static_assert(offsetof(Object01cf3a00, member_0x03d8) == 0x3d8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01cf3a00(Object01cf3a00 *self)
{
    return &self->member_0x03d8;
}

/**
 *
 * The part of the object that auto_return_field_01cf9710 reads.
 *
 */
struct Object01cf9710 {
    uint8_t unknown_0x0000[0x400];
    uint64_t value_0x0400; /**< Read by auto_return_field_01cf9710; meaning unknown. */
};
static_assert(offsetof(Object01cf9710, value_0x0400) == 0x400);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cf9710(const Object01cf9710 *self)
{
    return self->value_0x0400;
}

/**
 *
 * The part of the object that auto_return_float_field_01cfaff0 reads.
 *
 */
struct Object01cfaff0 {
    uint8_t unknown_0x0000[0x514];
    float value_0x0514; /**< Read by auto_return_float_field_01cfaff0; meaning unknown. */
};
static_assert(offsetof(Object01cfaff0, value_0x0514) == 0x514);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01cfaff0(const Object01cfaff0 *self)
{
    return self->value_0x0514;
}

/**
 *
 * The part of the object that auto_return_field_01cfd960 reads.
 *
 */
struct Object01cfd960 {
    uint8_t unknown_0x0000[0x3c0];
    uint64_t value_0x03c0; /**< Read by auto_return_field_01cfd960; meaning unknown. */
};
static_assert(offsetof(Object01cfd960, value_0x03c0) == 0x3c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cfd960(const Object01cfd960 *self)
{
    return self->value_0x03c0;
}
