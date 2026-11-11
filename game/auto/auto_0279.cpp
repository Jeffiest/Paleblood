// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

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
extern "C" void bb_auto_empty_0279b7a0()
{
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
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0279e110()
{
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
extern "C" void bb_auto_empty_0279e330()
{
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
