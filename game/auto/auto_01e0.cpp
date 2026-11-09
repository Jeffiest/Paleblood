// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01e00100 reads.
 *
 */
struct Object01e00100 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e00100; meaning unknown. */
};
static_assert(offsetof(Object01e00100, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e00100(const Object01e00100 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e00110 reads.
 *
 */
struct Object01e00110 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e00110; meaning unknown. */
};
static_assert(offsetof(Object01e00110, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e00110(const Object01e00110 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e00160()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e003e0 = 0x890;

extern "C" uint32_t bb_auto_return_constant_01e003e0()
{
    return value_01e003e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e048c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e04d60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e04e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e074a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074c0()
{
    return value_01e074c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074d0()
{
    return value_01e074d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e074e0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e074e0()
{
    return value_01e074e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07500()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e07520 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01e07520()
{
    return value_01e07520;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e07530 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e07530()
{
    return value_01e07530;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07540()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07550()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07560()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07570()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07580()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_01e07810 reads.
 *
 */
struct Object01e07810 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_01e07810; meaning unknown. */
};
static_assert(offsetof(Object01e07810, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01e07810(Object01e07810 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01e07940 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01e07940()
{
    return value_01e07940;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07e60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e07e90 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01e07e90()
{
    return value_01e07e90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e07ea0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07eb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07ec0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07ed0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e07ee0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01e09010 reads.
 *
 */
struct Object01e09010 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01e09010; meaning unknown. */
};
static_assert(offsetof(Object01e09010, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e09010(const Object01e09010 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01e09140 reads.
 *
 */
struct Object01e09140 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_01e09140; meaning unknown. */
};
static_assert(offsetof(Object01e09140, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e09140(const Object01e09140 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_01e0b610 reads.
 *
 */
struct Object01e0b610 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01e0b610; meaning unknown. */
};
static_assert(offsetof(Object01e0b610, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0b610(const Object01e0b610 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0b6e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0b6f0()
{
}

/**
 *
 * The part of the object that auto_return_field_01e0b960 reads.
 *
 */
struct Object01e0b960 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e0b960; meaning unknown. */
};
static_assert(offsetof(Object01e0b960, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0b960(const Object01e0b960 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e0b970 reads.
 *
 */
struct Object01e0b970 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e0b970; meaning unknown. */
};
static_assert(offsetof(Object01e0b970, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0b970(const Object01e0b970 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e0b9c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0bc40 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0bc40()
{
    return value_01e0bc40;
}

/**
 *
 * The part of the object that auto_return_field_01e0bc80 reads.
 *
 */
struct Object01e0bc80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e0bc80; meaning unknown. */
};
static_assert(offsetof(Object01e0bc80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0bc80(const Object01e0bc80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e0bc90 reads.
 *
 */
struct Object01e0bc90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e0bc90; meaning unknown. */
};
static_assert(offsetof(Object01e0bc90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0bc90(const Object01e0bc90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e0bce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0bf60 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0bf60()
{
    return value_01e0bf60;
}

/**
 *
 * The part of the object that auto_return_field_01e0bfa0 reads.
 *
 */
struct Object01e0bfa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e0bfa0; meaning unknown. */
};
static_assert(offsetof(Object01e0bfa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0bfa0(const Object01e0bfa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e0bfb0 reads.
 *
 */
struct Object01e0bfb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e0bfb0; meaning unknown. */
};
static_assert(offsetof(Object01e0bfb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0bfb0(const Object01e0bfb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e0c000()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0c280 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0c280()
{
    return value_01e0c280;
}

/**
 *
 * The part of the object that auto_return_field_01e0c2c0 reads.
 *
 */
struct Object01e0c2c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e0c2c0; meaning unknown. */
};
static_assert(offsetof(Object01e0c2c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0c2c0(const Object01e0c2c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e0c2d0 reads.
 *
 */
struct Object01e0c2d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e0c2d0; meaning unknown. */
};
static_assert(offsetof(Object01e0c2d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0c2d0(const Object01e0c2d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e0c320()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0c5a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01e0c5a0()
{
    return value_01e0c5a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0d290()
{
}

/**
 *
 * The part of the object that auto_return_float_field_01e0d3b0 reads.
 *
 */
struct Object01e0d3b0 {
    uint8_t unknown_0x0000[0x18];
    float value_0x0018; /**< Read by auto_return_float_field_01e0d3b0; meaning unknown. */
};
static_assert(offsetof(Object01e0d3b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0d3b0(const Object01e0d3b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0d3c0 reads.
 *
 */
struct Object01e0d3c0 {
    uint8_t unknown_0x0000[0x1c];
    float value_0x001c; /**< Read by auto_return_float_field_01e0d3c0; meaning unknown. */
};
static_assert(offsetof(Object01e0d3c0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0d3c0(const Object01e0d3c0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_01e0d6b0 reads.
 *
 */
struct Object01e0d6b0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01e0d6b0; meaning unknown. */
};
static_assert(offsetof(Object01e0d6b0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0d6b0(const Object01e0d6b0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01e0d770 reads.
 *
 */
struct Object01e0d770 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01e0d770; meaning unknown. */
};
static_assert(offsetof(Object01e0d770, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0d770(const Object01e0d770 *self)
{
    return self->value_0x000c;
}

/**
 *
 * The part of the object that auto_return_field_01e0d7b0 reads.
 *
 */
struct Object01e0d7b0 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_01e0d7b0; meaning unknown. */
};
static_assert(offsetof(Object01e0d7b0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0d7b0(const Object01e0d7b0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0e6b0 reads.
 *
 */
struct Object01e0e6b0 {
    uint8_t unknown_0x0000[0x1a4];
    float value_0x01a4; /**< Read by auto_return_float_field_01e0e6b0; meaning unknown. */
};
static_assert(offsetof(Object01e0e6b0, value_0x01a4) == 0x1a4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0e6b0(const Object01e0e6b0 *self)
{
    return self->value_0x01a4;
}

/**
 *
 * The part of the object that auto_return_field_01e0e810 reads.
 *
 */
struct Object01e0e810 {
    uint8_t unknown_0x0000[0x1f4];
    uint32_t value_0x01f4; /**< Read by auto_return_field_01e0e810; meaning unknown. */
};
static_assert(offsetof(Object01e0e810, value_0x01f4) == 0x1f4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01e0e810(const Object01e0e810 *self)
{
    return self->value_0x01f4;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0ea10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0f000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0f060()
{
}

/**
 *
 * The part of the object that auto_return_field_01e0f0f0 reads.
 *
 */
struct Object01e0f0f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01e0f0f0; meaning unknown. */
};
static_assert(offsetof(Object01e0f0f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0f0f0(const Object01e0f0f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01e0f100 reads.
 *
 */
struct Object01e0f100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01e0f100; meaning unknown. */
};
static_assert(offsetof(Object01e0f100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01e0f100(const Object01e0f100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01e0f150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01e0f3d0 = 0x838;

extern "C" uint32_t bb_auto_return_constant_01e0f3d0()
{
    return value_01e0f3d0;
}

/**
 *
 * The part of the object that auto_return_float_field_01e0fc80 reads.
 *
 */
struct Object01e0fc80 {
    uint8_t unknown_0x0000[0x90];
    float value_0x0090; /**< Read by auto_return_float_field_01e0fc80; meaning unknown. */
};
static_assert(offsetof(Object01e0fc80, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01e0fc80(const Object01e0fc80 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01e0fe00()
{
}
