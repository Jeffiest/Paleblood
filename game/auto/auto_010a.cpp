// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a3220()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a3290()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a3cf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a3d00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a4d30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010a4d40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010af540()
{
}

/**
 *
 * The part of the object that auto_return_field_010a3b10 reads.
 *
 */
struct Object010a3b10 {
    uint8_t unknown_0x0000[0xc];
    uint8_t value_0x000c; /**< Read by auto_return_field_010a3b10; meaning unknown. */
};
static_assert(offsetof(Object010a3b10, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010a3b10(const Object010a3b10 *self)
{
    return self->value_0x000c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010a3ce0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010a3ce0()
{
    return value_010a3ce0;
}

/**
 *
 * The part of the object that auto_return_member_address_010a4170 reads.
 *
 */
struct Object010a4170 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_010a4170; meaning unknown. */
};
static_assert(offsetof(Object010a4170, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a4170(Object010a4170 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_010a4180 reads.
 *
 */
struct Object010a4180 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010a4180; meaning unknown. */
};
static_assert(offsetof(Object010a4180, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010a4180(const Object010a4180 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010a5cf0 reads.
 *
 */
struct Object010a5cf0 {
    uint8_t unknown_0x0000[0x78];
    uint32_t value_0x0078; /**< Read by auto_return_field_010a5cf0; meaning unknown. */
};
static_assert(offsetof(Object010a5cf0, value_0x0078) == 0x78);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010a5cf0(const Object010a5cf0 *self)
{
    return self->value_0x0078;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6bb0 reads.
 *
 */
struct Object010a6bb0 {
    uint8_t unknown_0x0000[0x118];
    uint8_t member_0x0118; /**< Read by auto_return_member_address_010a6bb0; meaning unknown. */
};
static_assert(offsetof(Object010a6bb0, member_0x0118) == 0x118);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6bb0(Object010a6bb0 *self)
{
    return &self->member_0x0118;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6bc0 reads.
 *
 */
struct Object010a6bc0 {
    uint8_t unknown_0x0000[0x1b8];
    uint8_t member_0x01b8; /**< Read by auto_return_member_address_010a6bc0; meaning unknown. */
};
static_assert(offsetof(Object010a6bc0, member_0x01b8) == 0x1b8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6bc0(Object010a6bc0 *self)
{
    return &self->member_0x01b8;
}

/**
 *
 * The part of the object that auto_return_field_010a6e20 reads.
 *
 */
struct Object010a6e20 {
    uint8_t unknown_0x0000[0x108];
    uint32_t value_0x0108; /**< Read by auto_return_field_010a6e20; meaning unknown. */
};
static_assert(offsetof(Object010a6e20, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010a6e20(const Object010a6e20 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6e30 reads.
 *
 */
struct Object010a6e30 {
    uint8_t unknown_0x0000[0x110];
    uint8_t member_0x0110; /**< Read by auto_return_member_address_010a6e30; meaning unknown. */
};
static_assert(offsetof(Object010a6e30, member_0x0110) == 0x110);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6e30(Object010a6e30 *self)
{
    return &self->member_0x0110;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6e70 reads.
 *
 */
struct Object010a6e70 {
    uint8_t unknown_0x0000[0x150];
    uint8_t member_0x0150; /**< Read by auto_return_member_address_010a6e70; meaning unknown. */
};
static_assert(offsetof(Object010a6e70, member_0x0150) == 0x150);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6e70(Object010a6e70 *self)
{
    return &self->member_0x0150;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6e80 reads.
 *
 */
struct Object010a6e80 {
    uint8_t unknown_0x0000[0x178];
    uint8_t member_0x0178; /**< Read by auto_return_member_address_010a6e80; meaning unknown. */
};
static_assert(offsetof(Object010a6e80, member_0x0178) == 0x178);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6e80(Object010a6e80 *self)
{
    return &self->member_0x0178;
}

/**
 *
 * The part of the object that auto_return_member_address_010a6eb0 reads.
 *
 */
struct Object010a6eb0 {
    uint8_t unknown_0x0000[0x240];
    uint8_t member_0x0240; /**< Read by auto_return_member_address_010a6eb0; meaning unknown. */
};
static_assert(offsetof(Object010a6eb0, member_0x0240) == 0x240);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_010a6eb0(Object010a6eb0 *self)
{
    return &self->member_0x0240;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_010a6ec0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_010a73c0 reads.
 *
 */
struct Object010a73c0 {
    uint8_t unknown_0x0000[0x108];
    uint32_t value_0x0108; /**< Read by auto_return_field_010a73c0; meaning unknown. */
};
static_assert(offsetof(Object010a73c0, value_0x0108) == 0x108);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010a73c0(const Object010a73c0 *self)
{
    return self->value_0x0108;
}

/**
 *
 * The part of the object that auto_return_field_010ac1f0 reads.
 *
 */
struct Object010ac1f0 {
    uint8_t unknown_0x0000[0x80];
    uint32_t value_0x0080; /**< Read by auto_return_field_010ac1f0; meaning unknown. */
};
static_assert(offsetof(Object010ac1f0, value_0x0080) == 0x80);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010ac1f0(const Object010ac1f0 *self)
{
    return self->value_0x0080;
}

/**
 *
 * The part of the object that auto_return_field_010aebb0 reads.
 *
 */
struct Object010aebb0 {
    uint32_t value_0x0000; /**< Read by auto_return_field_010aebb0; meaning unknown. */
};
static_assert(offsetof(Object010aebb0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010aebb0(const Object010aebb0 *self)
{
    return self->value_0x0000;
}
