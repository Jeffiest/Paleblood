// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01534370 reads.
 *
 */
struct Object01534370 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_01534370; meaning unknown. */
};
static_assert(offsetof(Object01534370, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01534370(const Object01534370 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_01536b50 reads.
 *
 */
struct Object01536b50 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_01536b50; meaning unknown. */
};
static_assert(offsetof(Object01536b50, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01536b50(Object01536b50 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_015380c0 reads.
 *
 */
struct Object015380c0 {
    uint8_t unknown_0x0000[0x60];
    uint8_t member_0x0060; /**< Read by auto_return_member_address_015380c0; meaning unknown. */
};
static_assert(offsetof(Object015380c0, member_0x0060) == 0x60);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_015380c0(Object015380c0 *self)
{
    return &self->member_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_015380e0 reads.
 *
 */
struct Object015380e0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_015380e0; meaning unknown. */
};
static_assert(offsetof(Object015380e0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_015380e0(const Object015380e0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_015380f0 reads.
 *
 */
struct Object015380f0 {
    uint8_t unknown_0x0000[0x80];
    uint64_t value_0x0080; /**< Read by auto_return_field_015380f0; meaning unknown. */
};
static_assert(offsetof(Object015380f0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_015380f0(const Object015380f0 *self)
{
    return self->value_0x0080;
}
