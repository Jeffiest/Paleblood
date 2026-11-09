// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_004616b0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_004616b0()
{
    return value_004616b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00461760 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00461760()
{
    return value_00461760;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00461770 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00461770()
{
    return value_00461770;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00461780 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00461780()
{
    return value_00461780;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00461790 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00461790()
{
    return value_00461790;
}

/**
 *
 * The part of the object that auto_return_field_00462320 reads.
 *
 */
struct Object00462320 {
    uint8_t unknown_0x0000[0x20];
    uint8_t value_0x0020; /**< Read by auto_return_field_00462320; meaning unknown. */
};
static_assert(offsetof(Object00462320, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00462320(const Object00462320 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_00462330 reads.
 *
 */
struct Object00462330 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_00462330; meaning unknown. */
};
static_assert(offsetof(Object00462330, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00462330(Object00462330 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00462400 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00462400()
{
    return value_00462400;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00462410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00462410()
{
    return value_00462410;
}

/**
 *
 * The part of the object that auto_return_field_00462650 reads.
 *
 */
struct Object00462650 {
    uint8_t unknown_0x0000[0x20];
    uint32_t value_0x0020; /**< Read by auto_return_field_00462650; meaning unknown. */
};
static_assert(offsetof(Object00462650, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00462650(const Object00462650 *self)
{
    return self->value_0x0020;
}

/**
 *
 * The part of the object that auto_return_field_00462660 reads.
 *
 */
struct Object00462660 {
    uint8_t unknown_0x0000[0x24];
    uint32_t value_0x0024; /**< Read by auto_return_field_00462660; meaning unknown. */
};
static_assert(offsetof(Object00462660, value_0x0024) == 0x24);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00462660(const Object00462660 *self)
{
    return self->value_0x0024;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00462b30 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00462b30()
{
    return value_00462b30;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00462b40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00462b40()
{
    return value_00462b40;
}

/**
 *
 * The part of the object that auto_return_member_address_00462ba0 reads.
 *
 */
struct Object00462ba0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_00462ba0; meaning unknown. */
};
static_assert(offsetof(Object00462ba0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00462ba0(Object00462ba0 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_00463040 reads.
 *
 */
struct Object00463040 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_00463040; meaning unknown. */
};
static_assert(offsetof(Object00463040, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_00463040(Object00463040 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00463320 = 0xf4240;

extern "C" uint32_t bb_auto_return_constant_00463320()
{
    return value_00463320;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_004634a0()
{
}

/**
 *
 * The part of the object that auto_return_field_00464d60 reads.
 *
 */
struct Object00464d60 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_00464d60; meaning unknown. */
};
static_assert(offsetof(Object00464d60, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_00464d60(const Object00464d60 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_00464ef0 reads.
 *
 */
struct Object00464ef0 {
    uint8_t unknown_0x0000[0x2c];
    uint32_t value_0x002c; /**< Read by auto_return_field_00464ef0; meaning unknown. */
};
static_assert(offsetof(Object00464ef0, value_0x002c) == 0x2c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00464ef0(const Object00464ef0 *self)
{
    return self->value_0x002c;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00465480 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00465480()
{
    return value_00465480;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00465ad0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00465ad0()
{
    return value_00465ad0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00465ae0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00465ae0()
{
    return value_00465ae0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00466230()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00466360()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_00466740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00466840 = 0x8;

extern "C" uint32_t bb_auto_return_constant_00466840()
{
    return value_00466840;
}
