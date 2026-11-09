// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02793780 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02793780()
{
    return value_02793780;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02793890()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02793b50 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02793b50()
{
    return value_02793b50;
}

/**
 *
 * The part of the object that auto_return_field_02794420 reads.
 *
 */
struct Object02794420 {
    uint8_t unknown_0x0000[0xe8];
    uint32_t value_0x00e8; /**< Read by auto_return_field_02794420; meaning unknown. */
};
static_assert(offsetof(Object02794420, value_0x00e8) == 0xe8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02794420(const Object02794420 *self)
{
    return self->value_0x00e8;
}

/**
 *
 * The part of the object that auto_return_field_02794430 reads.
 *
 */
struct Object02794430 {
    uint8_t unknown_0x0000[0xec];
    uint32_t value_0x00ec; /**< Read by auto_return_field_02794430; meaning unknown. */
};
static_assert(offsetof(Object02794430, value_0x00ec) == 0xec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02794430(const Object02794430 *self)
{
    return self->value_0x00ec;
}

/**
 *
 * The part of the object that auto_return_member_address_027944d0 reads.
 *
 */
struct Object027944d0 {
    uint8_t unknown_0x0000[0x90];
    uint8_t member_0x0090; /**< Read by auto_return_member_address_027944d0; meaning unknown. */
};
static_assert(offsetof(Object027944d0, member_0x0090) == 0x90);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_027944d0(Object027944d0 *self)
{
    return &self->member_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_02794570 reads.
 *
 */
struct Object02794570 {
    uint8_t unknown_0x0000[0x23f8];
    uint64_t value_0x23f8; /**< Read by auto_return_field_02794570; meaning unknown. */
};
static_assert(offsetof(Object02794570, value_0x23f8) == 0x23f8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02794570(const Object02794570 *self)
{
    return self->value_0x23f8;
}

/**
 *
 * The part of the object that auto_return_field_027945c0 reads.
 *
 */
struct Object027945c0 {
    uint8_t unknown_0x0000[0x23f0];
    uint32_t value_0x23f0; /**< Read by auto_return_field_027945c0; meaning unknown. */
};
static_assert(offsetof(Object027945c0, value_0x23f0) == 0x23f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027945c0(const Object027945c0 *self)
{
    return self->value_0x23f0;
}

/**
 *
 * The part of the object that auto_return_field_027945f0 reads.
 *
 */
struct Object027945f0 {
    uint8_t unknown_0x0000[0x23f4];
    uint32_t value_0x23f4; /**< Read by auto_return_field_027945f0; meaning unknown. */
};
static_assert(offsetof(Object027945f0, value_0x23f4) == 0x23f4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_027945f0(const Object027945f0 *self)
{
    return self->value_0x23f4;
}

/**
 *
 * The part of the object that auto_return_field_02794600 reads.
 *
 */
struct Object02794600 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02794600; meaning unknown. */
};
static_assert(offsetof(Object02794600, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02794600(const Object02794600 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02798160()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02798170 reads.
 *
 */
struct Object02798170 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_02798170; meaning unknown. */
};
static_assert(offsetof(Object02798170, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02798170(const Object02798170 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02798180 reads.
 *
 */
struct Object02798180 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_02798180; meaning unknown. */
};
static_assert(offsetof(Object02798180, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02798180(const Object02798180 *self)
{
    return self->value_0x0030;
}

/**
 *
 * The part of the object that auto_return_field_02798280 reads.
 *
 */
struct Object02798280 {
    uint8_t unknown_0x0000[0x48];
    uint32_t value_0x0048; /**< Read by auto_return_field_02798280; meaning unknown. */
};
static_assert(offsetof(Object02798280, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02798280(const Object02798280 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02798c90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02798c90()
{
    return value_02798c90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279ae80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279ae90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b750()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279b770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279b790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279b7a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b7f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b800()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279b810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279b820()
{
}

/**
 *
 * The part of the object that auto_return_field_0279b830 reads.
 *
 */
struct Object0279b830 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_0279b830; meaning unknown. */
};
static_assert(offsetof(Object0279b830, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279b830(const Object0279b830 *self)
{
    return self->value_0x0028;
}

/**
 *
 * The part of the object that auto_return_field_0279b840 reads.
 *
 */
struct Object0279b840 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_0279b840; meaning unknown. */
};
static_assert(offsetof(Object0279b840, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279b840(const Object0279b840 *self)
{
    return self->value_0x002c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279b940 = 0x8500;

extern "C" uint32_t bb_auto_return_constant_0279b940()
{
    return value_0279b940;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279b950 = 0x1;

extern "C" uint32_t bb_auto_return_constant_0279b950()
{
    return value_0279b950;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b980()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b990()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279b9a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279b9b0 reads.
 *
 */
struct Object0279b9b0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_0279b9b0; meaning unknown. */
};
static_assert(offsetof(Object0279b9b0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0279b9b0(const Object0279b9b0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279bad0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279bae0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279baf0 reads.
 *
 */
struct Object0279baf0 {
    uint8_t unknown_0x0000[0x28];
    uint64_t value_0x0028; /**< Read by auto_return_field_0279baf0; meaning unknown. */
};
static_assert(offsetof(Object0279baf0, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0279baf0(const Object0279baf0 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279bb30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279d580 reads.
 *
 */
struct Object0279d580 {
    uint8_t unknown_0x0000[0x110];
    uint64_t value_0x0110; /**< Read by auto_return_field_0279d580; meaning unknown. */
};
static_assert(offsetof(Object0279d580, value_0x0110) == 0x110);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0279d580(const Object0279d580 *self)
{
    return self->value_0x0110;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279d5a0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0279d5a0()
{
    return value_0279d5a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279d5d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279d5e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279d600 reads.
 *
 */
struct Object0279d600 {
    uint8_t unknown_0x0000[0x11c];
    uint32_t value_0x011c; /**< Read by auto_return_field_0279d600; meaning unknown. */
};
static_assert(offsetof(Object0279d600, value_0x011c) == 0x11c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279d600(const Object0279d600 *self)
{
    return self->value_0x011c;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279d630()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279d670 reads.
 *
 */
struct Object0279d670 {
    uint8_t unknown_0x0000[0x138];
    uint64_t value_0x0138; /**< Read by auto_return_field_0279d670; meaning unknown. */
};
static_assert(offsetof(Object0279d670, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0279d670(const Object0279d670 *self)
{
    return self->value_0x0138;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279dfa0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279e0a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279e0b0 reads.
 *
 */
struct Object0279e0b0 {
    uint8_t unknown_0x0000[0x72];
    uint16_t value_0x0072; /**< Read by auto_return_field_0279e0b0; meaning unknown. */
};
static_assert(offsetof(Object0279e0b0, value_0x0072) == 0x72);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279e0b0(const Object0279e0b0 *self)
{
    return self->value_0x0072;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e110()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279e130 = 0x8400;

extern "C" uint32_t bb_auto_return_constant_0279e130()
{
    return value_0279e130;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279e140 = 0x3;

extern "C" uint32_t bb_auto_return_constant_0279e140()
{
    return value_0279e140;
}

/**
 *
 * The part of the object that auto_return_field_0279e160 reads.
 *
 */
struct Object0279e160 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_0279e160; meaning unknown. */
};
static_assert(offsetof(Object0279e160, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279e160(const Object0279e160 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279e190()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_0279e1c0 reads.
 *
 */
struct Object0279e1c0 {
    uint8_t unknown_0x0000[0x34];
    uint32_t value_0x0034; /**< Read by auto_return_field_0279e1c0; meaning unknown. */
};
static_assert(offsetof(Object0279e1c0, value_0x0034) == 0x34);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0279e1c0(const Object0279e1c0 *self)
{
    return self->value_0x0034;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279e2b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e2f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0279e310 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0279e310()
{
    return value_0279e310;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e330()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279e990 = 0x8200;

extern "C" uint32_t bb_auto_return_constant_0279e990()
{
    return value_0279e990;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279e9a0 = 0x5;

extern "C" uint32_t bb_auto_return_constant_0279e9a0()
{
    return value_0279e9a0;
}

/**
 *
 * The part of the object that auto_return_field_0279eb00 reads.
 *
 */
struct Object0279eb00 {
    uint8_t unknown_0x0000[0x90];
    uint64_t value_0x0090; /**< Read by auto_return_field_0279eb00; meaning unknown. */
};
static_assert(offsetof(Object0279eb00, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0279eb00(const Object0279eb00 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0279eb30 = 0x5;

extern "C" uint32_t bb_auto_return_constant_0279eb30()
{
    return value_0279eb30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0279f0f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0279f0f0()
{
    return value_0279f0f0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0279feb0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0279feb0()
{
    return value_0279feb0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0279ff50()
{
    return 0;
}
