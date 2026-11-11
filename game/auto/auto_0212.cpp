// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02120590 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02120590()
{
    return value_02120590;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021205a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021205a0()
{
    return value_021205a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02120990()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02121850 reads.
 *
 */
struct Object02121850 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t member_0x00a0; /**< Read by auto_return_member_address_02121850; meaning unknown. */
};
static_assert(offsetof(Object02121850, member_0x00a0) == 0xa0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02121850(Object02121850 *self)
{
    return &self->member_0x00a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02121b60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02121b60()
{
    return value_02121b60;
}

/**
 *
 * The part of the object that auto_return_member_address_02121d90 reads.
 *
 */
struct Object02121d90 {
    uint8_t unknown_0x0000[0x224];
    uint8_t member_0x0224; /**< Read by auto_return_member_address_02121d90; meaning unknown. */
};
static_assert(offsetof(Object02121d90, member_0x0224) == 0x224);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02121d90(Object02121d90 *self)
{
    return &self->member_0x0224;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02122cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02122d50()
{
}

/**
 *
 * The part of the object that auto_return_member_address_02124e50 reads.
 *
 */
struct Object02124e50 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t member_0x00c0; /**< Read by auto_return_member_address_02124e50; meaning unknown. */
};
static_assert(offsetof(Object02124e50, member_0x00c0) == 0xc0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e50(Object02124e50 *self)
{
    return &self->member_0x00c0;
}

/**
 *
 * The part of the object that auto_return_member_address_02124e60 reads.
 *
 */
struct Object02124e60 {
    uint8_t unknown_0x0000[0xd0];
    uint8_t member_0x00d0; /**< Read by auto_return_member_address_02124e60; meaning unknown. */
};
static_assert(offsetof(Object02124e60, member_0x00d0) == 0xd0);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e60(Object02124e60 *self)
{
    return &self->member_0x00d0;
}

/**
 *
 * The part of the object that auto_return_member_address_02124e80 reads.
 *
 */
struct Object02124e80 {
    uint8_t unknown_0x0000[0x750];
    uint8_t member_0x0750; /**< Read by auto_return_member_address_02124e80; meaning unknown. */
};
static_assert(offsetof(Object02124e80, member_0x0750) == 0x750);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02124e80(Object02124e80 *self)
{
    return &self->member_0x0750;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02127a20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b2c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212b8a0()
{
}

/**
 *
 * The part of the object that auto_return_field_0212ba70 reads.
 *
 */
struct Object0212ba70 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_0212ba70; meaning unknown. */
};
static_assert(offsetof(Object0212ba70, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0212ba70(const Object0212ba70 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0212c230()
{
}
