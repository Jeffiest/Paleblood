// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02100e10 reads.
 *
 */
struct Object02100e10 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_02100e10; meaning unknown. */
};
static_assert(offsetof(Object02100e10, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02100e10(const Object02100e10 *self)
{
    return self->value_0x0110;
}

/**
 *
 * The part of the object that auto_return_field_02100e20 reads.
 *
 */
struct Object02100e20 {
    uint8_t unknown_0x0000[0x308];
    uint64_t value_0x0308; /**< Read by auto_return_field_02100e20; meaning unknown. */
};
static_assert(offsetof(Object02100e20, value_0x0308) == 0x308);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02100e20(const Object02100e20 *self)
{
    return self->value_0x0308;
}

/**
 *
 * The part of the object that auto_return_field_02104030 reads.
 *
 */
struct Object02104030 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02104030; meaning unknown. */
};
static_assert(offsetof(Object02104030, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02104030(const Object02104030 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02104d00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021052d0 = 0x310;

extern "C" uint32_t bb_auto_return_constant_021052d0()
{
    return value_021052d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_021055f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_021055f0()
{
    return value_021055f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02105910 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02105910()
{
    return value_02105910;
}

/**
 *
 * The part of the object that auto_return_member_address_021065e0 reads.
 *
 */
struct Object021065e0 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_021065e0; meaning unknown. */
};
static_assert(offsetof(Object021065e0, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_021065e0(Object021065e0 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * The part of the object that auto_return_field_02106600 reads.
 *
 */
struct Object02106600 {
    uint8_t unknown_0x0000[0x1f0];
    uint8_t value_0x01f0; /**< Read by auto_return_field_02106600; meaning unknown. */
};
static_assert(offsetof(Object02106600, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02106600(const Object02106600 *self)
{
    return self->value_0x01f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021080a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02108100()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210ac90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210ac90()
{
    return value_0210ac90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210afb0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210afb0()
{
    return value_0210afb0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0210b2d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0210b2d0()
{
    return value_0210b2d0;
}

/**
 *
 * The part of the object that auto_return_field_0210bac0 reads.
 *
 */
struct Object0210bac0 {
    uint8_t unknown_0x0000[0x88];
    uint64_t value_0x0088; /**< Read by auto_return_field_0210bac0; meaning unknown. */
};
static_assert(offsetof(Object0210bac0, value_0x0088) == 0x88);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0210bac0(const Object0210bac0 *self)
{
    return self->value_0x0088;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0210fa50()
{
}
