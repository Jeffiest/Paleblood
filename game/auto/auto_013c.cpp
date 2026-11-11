// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_013c3450 reads.
 *
 */
struct Object013c3450 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t value_0x00d8; /**< Read by auto_return_field_013c3450; meaning unknown. */
};
static_assert(offsetof(Object013c3450, value_0x00d8) == 0xd8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013c3450(const Object013c3450 *self)
{
    return self->value_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_013c3460 reads.
 *
 */
struct Object013c3460 {
    uint8_t unknown_0x0000[0xd9];
    uint8_t value_0x00d9; /**< Read by auto_return_field_013c3460; meaning unknown. */
};
static_assert(offsetof(Object013c3460, value_0x00d9) == 0xd9);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013c3460(const Object013c3460 *self)
{
    return self->value_0x00d9;
}

/**
 *
 * The part of the object that auto_return_field_013c3d30 reads.
 *
 */
struct Object013c3d30 {
    uint8_t unknown_0x0000[0x80];
    uint8_t value_0x0080; /**< Read by auto_return_field_013c3d30; meaning unknown. */
};
static_assert(offsetof(Object013c3d30, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013c3d30(const Object013c3d30 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_member_address_013c3d40 reads.
 *
 */
struct Object013c3d40 {
    uint8_t unknown_0x0000[0x88];
    uint8_t member_0x0088; /**< Read by auto_return_member_address_013c3d40; meaning unknown. */
};
static_assert(offsetof(Object013c3d40, member_0x0088) == 0x88);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_013c3d40(Object013c3d40 *self)
{
    return &self->member_0x0088;
}

/**
 *
 * The part of the object that auto_return_field_013c3d50 reads.
 *
 */
struct Object013c3d50 {
    uint8_t unknown_0x0000[0xc0];
    uint8_t value_0x00c0; /**< Read by auto_return_field_013c3d50; meaning unknown. */
};
static_assert(offsetof(Object013c3d50, value_0x00c0) == 0xc0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013c3d50(const Object013c3d50 *self)
{
    return self->value_0x00c0;
}

/**
 *
 * The part of the object that auto_return_field_013c3d60 reads.
 *
 */
struct Object013c3d60 {
    uint8_t unknown_0x0000[0xc1];
    uint8_t value_0x00c1; /**< Read by auto_return_field_013c3d60; meaning unknown. */
};
static_assert(offsetof(Object013c3d60, value_0x00c1) == 0xc1);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_013c3d60(const Object013c3d60 *self)
{
    return self->value_0x00c1;
}

/**
 *
 * The part of the object that auto_return_member_address_013c3d70 reads.
 *
 */
struct Object013c3d70 {
    uint8_t unknown_0x0000[0xc8];
    uint8_t member_0x00c8; /**< Read by auto_return_member_address_013c3d70; meaning unknown. */
};
static_assert(offsetof(Object013c3d70, member_0x00c8) == 0xc8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_013c3d70(Object013c3d70 *self)
{
    return &self->member_0x00c8;
}

/**
 *
 * The part of the object that auto_return_field_013c3d80 reads.
 *
 */
struct Object013c3d80 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_013c3d80; meaning unknown. */
};
static_assert(offsetof(Object013c3d80, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013c3d80(const Object013c3d80 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_field_013c3d90 reads.
 *
 */
struct Object013c3d90 {
    uint8_t unknown_0x0000[0x108];
    uint64_t value_0x0108; /**< Read by auto_return_field_013c3d90; meaning unknown. */
};
static_assert(offsetof(Object013c3d90, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_013c3d90(const Object013c3d90 *self)
{
    return self->value_0x0108;
}
