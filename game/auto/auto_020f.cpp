// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020f1930()
{
}

/**
 *
 * The part of the object that auto_return_float_field_020f4910 reads.
 *
 */
struct Object020f4910 {
    uint8_t unknown_0x0000[0x130];
    float value_0x0130; /**< Read by auto_return_float_field_020f4910; meaning unknown. */
};
static_assert(offsetof(Object020f4910, value_0x0130) == 0x130);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f4910(const Object020f4910 *self)
{
    return self->value_0x0130;
}

/**
 *
 * The part of the object that auto_return_float_field_020f4920 reads.
 *
 */
struct Object020f4920 {
    uint8_t unknown_0x0000[0x138];
    float value_0x0138; /**< Read by auto_return_float_field_020f4920; meaning unknown. */
};
static_assert(offsetof(Object020f4920, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f4920(const Object020f4920 *self)
{
    return self->value_0x0138;
}

/**
 *
 * The part of the object that auto_return_field_020f4a10 reads.
 *
 */
struct Object020f4a10 {
    uint8_t unknown_0x0000[0x13d];
    uint8_t value_0x013d; /**< Read by auto_return_field_020f4a10; meaning unknown. */
};
static_assert(offsetof(Object020f4a10, value_0x013d) == 0x13d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020f4a10(const Object020f4a10 *self)
{
    return self->value_0x013d;
}

/**
 *
 * The part of the object that auto_return_float_field_020f4a30 reads.
 *
 */
struct Object020f4a30 {
    uint8_t unknown_0x0000[0x140];
    float value_0x0140; /**< Read by auto_return_float_field_020f4a30; meaning unknown. */
};
static_assert(offsetof(Object020f4a30, value_0x0140) == 0x140);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f4a30(const Object020f4a30 *self)
{
    return self->value_0x0140;
}

/**
 *
 * The part of the object that auto_return_float_field_020f4a50 reads.
 *
 */
struct Object020f4a50 {
    uint8_t unknown_0x0000[0x144];
    float value_0x0144; /**< Read by auto_return_float_field_020f4a50; meaning unknown. */
};
static_assert(offsetof(Object020f4a50, value_0x0144) == 0x144);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f4a50(const Object020f4a50 *self)
{
    return self->value_0x0144;
}

/**
 *
 * The part of the object that auto_return_field_020f4a60 reads.
 *
 */
struct Object020f4a60 {
    uint8_t unknown_0x0000[0x148];
    uint8_t value_0x0148; /**< Read by auto_return_field_020f4a60; meaning unknown. */
};
static_assert(offsetof(Object020f4a60, value_0x0148) == 0x148);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020f4a60(const Object020f4a60 *self)
{
    return self->value_0x0148;
}

/**
 *
 * The part of the object that auto_return_field_020f68e0 reads.
 *
 */
struct Object020f68e0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020f68e0; meaning unknown. */
};
static_assert(offsetof(Object020f68e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020f68e0(const Object020f68e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020f7590()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020f7b60 = 0x150;

extern "C" uint32_t bb_auto_return_constant_020f7b60()
{
    return value_020f7b60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020f7e80 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020f7e80()
{
    return value_020f7e80;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020f81a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020f81a0()
{
    return value_020f81a0;
}

/**
 *
 * The part of the object that auto_return_float_field_020f9f90 reads.
 *
 */
struct Object020f9f90 {
    uint8_t unknown_0x0000[0x160];
    float value_0x0160; /**< Read by auto_return_float_field_020f9f90; meaning unknown. */
};
static_assert(offsetof(Object020f9f90, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f9f90(const Object020f9f90 *self)
{
    return self->value_0x0160;
}

/**
 *
 * The part of the object that auto_return_float_field_020f9fa0 reads.
 *
 */
struct Object020f9fa0 {
    uint8_t unknown_0x0000[0x164];
    float value_0x0164; /**< Read by auto_return_float_field_020f9fa0; meaning unknown. */
};
static_assert(offsetof(Object020f9fa0, value_0x0164) == 0x164);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_020f9fa0(const Object020f9fa0 *self)
{
    return self->value_0x0164;
}

/**
 *
 * The part of the object that auto_return_field_020f9ff0 reads.
 *
 */
struct Object020f9ff0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_020f9ff0; meaning unknown. */
};
static_assert(offsetof(Object020f9ff0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_020f9ff0(const Object020f9ff0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_member_address_020fa020 reads.
 *
 */
struct Object020fa020 {
    uint8_t unknown_0x0000[0x178];
    uint8_t member_0x0178; /**< Read by auto_return_member_address_020fa020; meaning unknown. */
};
static_assert(offsetof(Object020fa020, member_0x0178) == 0x178);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020fa020(Object020fa020 *self)
{
    return &self->member_0x0178;
}

/**
 *
 * The part of the object that auto_return_field_020fd070 reads.
 *
 */
struct Object020fd070 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_020fd070; meaning unknown. */
};
static_assert(offsetof(Object020fd070, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_020fd070(const Object020fd070 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020fdd30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020fe300 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_020fe300()
{
    return value_020fe300;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020fe620 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020fe620()
{
    return value_020fe620;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_020fe940 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_020fe940()
{
    return value_020fe940;
}

/**
 *
 * The part of the object that auto_return_member_address_020ff170 reads.
 *
 */
struct Object020ff170 {
    uint8_t unknown_0x0000[0x200];
    uint8_t member_0x0200; /**< Read by auto_return_member_address_020ff170; meaning unknown. */
};
static_assert(offsetof(Object020ff170, member_0x0200) == 0x200);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_020ff170(Object020ff170 *self)
{
    return &self->member_0x0200;
}
